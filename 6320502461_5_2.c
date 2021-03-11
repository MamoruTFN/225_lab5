#include<stdio.h>

int main()
{
    int n,x,y,i,a,b,j,c,d;
    scanf("%d",&n);
    x=n-(n+1)%2;
    y=(x+1)/2;
    a=y;
    b=y;

    for(i=0; i<y; i++)
    {
        for(int j=1; j<=x; j++)
        {
            if(a==j||b==j)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        a--;
        b++;
        printf("\n");
    }
    c=++a;
    d=--b;
    if(n%2==0)
    {
        i--;
    }
    else
    {
        i-=2;
        c++;
        d--;
    }
    for(int k=0;k<=i;k++)
    {
        for(int j=1;j<=x;j++)
        {
            if(c==j||d==j)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        c++;
        d--;
        printf("\n");
    }


    return 0;
}
