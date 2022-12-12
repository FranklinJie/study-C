int main()
{
    printf("Input source string 1:\n");
    char s1[100];
    gets(s1);
    printf("Input inserted string 2:\n");
    char s2[100];
    gets(s2);
    printf("Input a letter to locate the index:\n");
    char s;
    scanf("%c", &s);
    int m = strlen(s1), n = strlen(s2);
    int i, j;
    for (i = 0; i < m; i++)
        if (s1[i] == s)
        {
            for (j = m + n - 1; j >= i + n; j--)
                s1[j] = s1[j - n];
            for (j = i; j < i + n; j++)
                s1[j] = s2[j - i];
            break;
        }
    s1[m + n] = '\0';
    if (i >= m)
        printf("Not found!");
    else
        printf("The new string is:%s", s1);
}