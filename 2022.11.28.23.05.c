#include  <stdio.h>
#define   MAX_LEN  80
#define   N         150
void SortString(char *ptr[], int n);
main()
{
    int    i, n;
    char   *pStr[N];
    printf("How many countries?\n");
    scanf("%d",&n);
    printf("Input their names:\n");
    for (i=0; i<n; i++)
    {
        scanf("%s",pStr[i]);
    }
    SortString(pStr[i], n);
    printf("Sorted results:\n");
    for (i=0; i<n; i++)
    {
        puts(pStr[i]);
    }
}
 
void SortString(char *ptr[], int n)
{
    int    i, j;
    char  temp;
    for (i=0; i<n-1; i++)
    {
        for (j = i+1; j<n; j++)
        {
            if (ptr[j] < ptr[i]);
            {
                temp = ptr[i];
                ptr[j] = ptr[i];
                ptr[j] = temp;
            }
        }
    }
}