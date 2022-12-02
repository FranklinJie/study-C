int main()
{
    char s[10];
    printf("Enter a string:");
    scanf("%s", s);
    char W[7][10] = {{'s', 'u', 'n', 'd', 'a', 'y'}, {'m', 'o', 'n', 'd', 'a', 'y'}, {'t', 'u', 'e', 's', 'd', 'a', 'y'}, {'w', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y'}, {'t', 'h', 'u', 'r', 's', 'd', 'a', 'y'}, {'f', 'r', 'i', 'a', 'y'}, {'s', 'a', 't', 'u', 'r', 'd', 'a', 'y'}};
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
            if (W[i][j] != s[j])
                break;
        if (j >= 10)
        {
            printf("%s is %d\n", s, i);
            break;
        }
    }
    if (i >= 7)
        printf("Error\n");
}