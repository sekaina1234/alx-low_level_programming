char *rot13(char *s)
{
char *p = s;
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'); j++)
{
if (j == 1)
{
break;
}
if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
{
*p++ = s[i] + 13;
}
else
{
*p++ = s[i] - 13;
}
i++;
}
if (s[i])
{
*p++ = s[i];
}
}
*p = '\0';
return (s);
}
