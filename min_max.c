#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,min=INT_MAX,max=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a<min)
        {
            min=a;
        }
        if(a>max)
        {
            max=a;
        }
    }
    printf("The minimum number is : %d\n",min);
    printf("The maximum number is : %d\n",max);
    return 0;
}