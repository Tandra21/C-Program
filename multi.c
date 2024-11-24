#include<stdio.h>
int main()
{
    int m=1,n;
    scanf("%d",&n);
    while(m<=10)
    {
        printf("%d*%d=%d\n",n,m,n*m);
        m++;
    }
    return 0;
}

