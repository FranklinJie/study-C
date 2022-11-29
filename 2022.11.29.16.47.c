#include<stdio.h>
int main()
{
	int n;
	int a[9][9];
	printf("请输入正整数n：");
	scanf("%d", n);
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = i * n + j + 1;
	for (i = 0; i < n; i++)
		for (j = 0; j < i; j++)
		{
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%4d", a[i][j]);
	    printf("\n");
     }
}