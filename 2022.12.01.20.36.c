
int ss(double x)
{
    int i;
    if (x == 1)
        return 0;
    else
    {
        for (i = 2; i < x; i++)
            if (x / i == (long long)(x / i))
                break;
        if (i >= x)
            return 1;
        else
            return 0;
    }
}
int main()
{
    int n;
    printf("Input n:\n");
    scanf("%d",n);
    double x = 1;
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        x *= 2;
        if (ss(x - 1))
        {
            printf("2^%d-1=%.0lf\n", i, x-1);
            a++;
        }
    }
    printf("count=%d\n", a);
}