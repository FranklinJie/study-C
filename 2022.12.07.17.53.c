int main()
{
    char source[999];
    printf("Input source string 1:\n");
    gets(source);
    char inserted[999];
    printf("Input inserted string 2:\n");
    gets(inserted);
    char s;
    printf("Input a letter to locate the index:\n");
    scanf("%c", &s);
    int i;
    int m = strlen(source), n = strlen(inserted);
    for (i = 0; i < m; i++)
        if (source[i] == s)
        {
            for (int j = m + n - 1; j >= i + n; j--)
                source[j] = source[j - n];
            for (int p = 0; p < n; p++)
                source[i + p] = inserted[p];
            break;
        }
    source[m + n] = '\0';
    if (i >= m)
        printf("Not found!");
    else
        printf("The new string is:%s", source);
}