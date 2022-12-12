#include<stdio.h>
int main()
{
	int s[100] = { 0 };
	printf("请输入一个正整数:\n");
	int n;
	scanf_s("%d", &n);
	int i=0, j=1;
	int x=0;
	while (1) 
	{
		for (; i < n; i++,j++)
		{
			if (s[i] == 1)
			    j--;
			else
				if (j == 3)
				{
					j = 0;
					s[i] = 1; x++;
				}
		}
		i = 0;
		if (x == n - 1)
			break;
	}
	for (j = 0; j < n; j++)
		if (s[j]==0)
			printf("最后剩下的数为：%d", j+1);
	return 0;
}