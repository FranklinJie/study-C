#define N 10
void InputMatrix(int a[N][N], int n)
{
    printf("Input %d*%d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
void PrintMatrix(int a[N][N], int n)
{
    printf("The transposed matrix is:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
}
void Transpose(int a[N][N], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
}
int main()
{
    int n;
    printf("Input n:\n");
    scanf("%d", &n);
    int a[N][N];
    InputMatrix(a, n);
    Transpose(a, n);
    PrintMatrix(a, n);
}