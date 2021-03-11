#include<stdio.h>

int main()
{
    int n,m,x;
    scanf("%d",&n);
    int a[n][n];

    scanf("%d",&m);

    int sum=0;
    x=n-m+1;
    int check[x][x];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            sum=0;
            for(int k=i;k<m+i;k++)
            {
                for(int l=j;l<m+j;l++)
                {
                    sum=sum+a[k][l];
                }
            }
            check[i][j]=sum;
        }
    }
    int ans=check[0][0];
    for(int o=0;o<x;o++)
    {
        for(int p=0;p<x;p++)
        {
            if(ans<check[o][p])
                ans=check[o][p];
        }
    }
    printf("%d",ans);

    return 0;
}
