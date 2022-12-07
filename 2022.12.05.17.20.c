int main()
{
    char s1[100];
    printf("main string:");
    gets_s(s1);
    char s2[100];
    printf("sub string:");
    gets_s(s2);
    int m = strlen(s1), t = strlen(s2);
    printf("site of beginning:(<=%d)", m);
    int n;
    scanf_s("%d", &n);
    for (int i = m + t - 1; i > n + t - 1; i--)
        s1[i] = s1[i - t];
    for (int i = 0; i < t; i++)
        s1[n + i] = s2[i];
    s1[m + t] = '\0';
    printf("After instert:%s\n", s1);
}