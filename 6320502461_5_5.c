#include<stdio.h>

int main()
{
    int n,m;

    scanf("%d",&n);
    int a[n][n];

    scanf("%d",&m);
    int b[m][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
