#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ELF_MAGIC "\x7f""ELF"
#define EI_NIDENT 16
#define EI_CLASS 4
#define ELFCLASSNONE 0
#define ELFCLASS32 1
#define ELFCLASS64 2
#define EI_DATA 5
#define ELFDATANONE 0
#define ELFDATA2LSB 1
#define ELFDATA2MSB 2
#define EI_VERSION 6
#define EV_CURRENT 1
#define EI_OSABI 7
#define ELFOSABI_NONE 0
#define ELFOSABI_HPUX 1
#define ELFOSABI_NETBSD 2
#define ELFOSABI_LINUX 3
#define ELFOSABI_SOLARIS 6
#define ELFOSABI_FREEBSD 9
#define ELFOSABI_ARM 97
#define EI_ABIVERSION 8
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
int main(int argc, char **argv)
{
if (argc < 2)
{
fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
exit(1);
}
FILE *file = fopen(argv[1], "rb");
if (file == NULL)
{
perror("Error opening file");
exit(1);
}
unsigned char e_ident[EI_NIDENT];
if (fread(e_ident, sizeof(e_ident), 1, file) != 1)
{
perror("Error reading ELF header");
exit(1);
}
print_magic(e_ident);
print_class(e_ident);
print_data(e_ident);
print_version(e_ident);
print_osabi(e_ident);
unsigned int e_type;
if (fseek(file, EI_CLASS == ELFCLASS32 ? 16 : 24, SEEK_SET) != 0 ||
fread(&e_type, sizeof(e_type), 1, file) != 1)
{
perror("Error reading ELF header");
exit(1);
}
print_type(e_type, e_ident);
fclose(file);
return (0);
}
void print_magic(unsigned char *e_ident)
{
if (memcmp(e_ident, ELF_MAGIC, 4) == 0)
{
printf("ELF Header: ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", e_ident[i]);
}
printf("\n");
}
else
{
fprintf(stderr, "Error: Not an ELF file\n");
exit(1);
}
}
void print_class(unsigned char *e_ident)
{
printf("  Class: ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
void print_data(unsigned char *e_ident)
{
printf("  Data: ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB
