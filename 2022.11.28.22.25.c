int main()
{
    char s[1000];
    gets(s);
    char *p;
    char max = s[0];
    int n;
    for (p = s; p < s + strlen (s); p++)
        if (*p > max)
        {
            max = *p;
            n = p - s;
        }
    for (p = s + n; p >s; p--)
        *p = *(p - 1);
    *s = max;
    puts(s);
}