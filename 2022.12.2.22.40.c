#include<stdio.h>
#include<string.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main()
{
    char a[5][81];
    printf("Input five countries' names:\n");
    for (int i = 0; i < 5; i++)
        gets_s(a[i]);
    for (int n = 0; n < 4; n++)
        for (int i = n + 1; i < 4; i++)
                if (strcmp(a[n], a[i])>0)
                for(int s=0;s<(strlen(a[n])>strlen(a[i])?strlen(a[n]):strlen(a[i])); s++)
                {char temp = a[n][s];
                  a[n][s] = a[i][s];
                  a[i][s] = temp;
                }
    printf("The minimum is:\n");
    for (int i = 0; i < 5; i++)
    {
        //for (int j = 0; j < strlen(a[i]); j++)
          printf("%s\n", a[i]);
    }
}