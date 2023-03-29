char *leet(char *str)
{
char leet_map[5][3] = {
{'a', 'A', '4'},
{'e', 'E', '3'},
{'o', 'O', '0'},
{'t', 'T', '7'},
{'l', 'L', '1'}
};
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == leet_map[j][0] ||
str[i] == leet_map[j][1])
{
str[i] = leet_map[j][2];
break;
}
}
}
return (str);
}
