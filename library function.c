#include<stdio.h>
int main()
{
    float m,n,o,p,q,r,s,t;
    scanf("%f%f%f%f",&m,&n,&o,&p);
    q=pow(m,n);
    r=sqrt(m);
    s=ceil(o);
    t=floor(p);
    printf("square:%.4f\n",q);
    printf("root:%.4f\n",r);
    printf("ceil:%.0f\n",s);
    printf("floor:%.0f\n",t);
    return 0;
}
