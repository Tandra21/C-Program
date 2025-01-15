#include<stdio.h>
#include<math.h>
int main()
{
    int n,y,m,w,d;
    scanf("%d",&n);
    y=n/365;
    m=n%365/30;
    w=n%365%30/7;
    d=n%365%30%7;
    printf("%d\n",y);
    printf("%d\n",m);
    printf("%d\n",w);
    printf("%d\n",d);
    return 0;
}
