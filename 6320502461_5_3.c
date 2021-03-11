#include<stdio.h>

int main()
{
    int u[3]={2,3,5},i,j=1,k,x;
    int n;
    scanf("%d",&n);
    int o[n];
    o[0]=1;
    for(i=2,j=1;j<n;i++)
    {
        x=i;
        for(k=0;k<3; )
        {
            if(x%u[k]==0)
            {
                x/=u[k];

            }
            else
            {
                k++;
            }
        }
        if(x==1)
        {
            o[j]=i;
            j++;
        }
    }
    printf("%d",o[n-1]);

    return 0;
}
