#include<stdio.h>
int main()
{
    int a,b,a_count=0,b_count=0;
    scanf("%d%d",&a,&b);
    while(a<=b)
    {
        if(a%2==0)
        {
            a_count++;
        }
        else if(a%2!=0)
        {
            b_count++;
        }
        a++;
    }
    printf("There is %d number even\n",a_count);
    printf("There is %d number odd\n",b_count);
    return 0;
}

