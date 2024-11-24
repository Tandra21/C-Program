#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    while(m<=n)
    {
        if(m%2==0)
        {
            printf("%d is the even number\n",m);
    }
    else if(m%2!=0)
    {
        printf("%d is the odd number\n",m);
    }
    m++;
    }
    return 0;
}
