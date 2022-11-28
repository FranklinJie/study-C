#include <stdio.h>
int main(void)
{
    int n;
    printf("please input the total of numbers:");
    scanf("%d", &n);
    int s[1000];
    for (int i = 0; i < n; i++)
    {
        s[i] = i + 1;
    }
    if (n == 1)
    {
        printf("1");
    }
    else
    {
        int cnt = n;
        int t = 0;
        for (int j = 0; j < n; j++)
        {

            if (cnt == 1)
            {
                break;
            }
            if (s[j] != 0)
            {
                t++;
            }
            if (t % 3 == 0 && s[j] != 0)
            {
                s[j] = 0;
                cnt--;
            }
            if (j == n - 1 && cnt != 1)
            {
                j = -1;
            }

        }
        for (int k = 0; k < n; k++)
        {
            if (s[k] != 0)
            {
                printf("%dis left\n", s[k]);
                break;
            }
        }
    }
    return 0;
}