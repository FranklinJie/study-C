void find(int n) 
{
    int i, j, k = 1, max = 1, m;
    for (i = 10; i < n; i++) 
    {
        for (j = 2; j <= i / 2; j++)
            if (i % j == 0)
                max += j;
        for (m = 2; m <= max / 2; m++)
            if (max % m == 0) 
                k += m;
        if (k == i)
            printf("(%d,%d)\n", i, max);
    }
}
int main() 
{
    int n;
    printf("Input n:\n");
    scanf_s("%d", &n);
    find(n);
}