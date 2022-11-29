int main()
{
    int A[10][10], B[10][10];
    printf("Input m, n:");
    int m, n;
    scanf("%d,%d", &m, &n);
    printf("Input %d*%d matrix a:\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Input %d*%d matrix b:\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);
    printf("Results:\n");
    for (int i = 0; i < m; i++)
       { for (int j = 0; j < n; j++)
            printf("%6d", A[i][j] + B[i][j]);
            printf("\n");}
}