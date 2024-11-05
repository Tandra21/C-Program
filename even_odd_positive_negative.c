#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            //even
            even++;
        }
        else
        {
            //odd
            odd++;
        }
        if(a<0)
        {
            //negative
            neg++;
        }
        else if(a>0)
        {
            pos++;
        }
    }
    printf("even : %d\nodd : %d\nnegative : %d\npositive : %d\n",even,odd,neg,pos);
    return 0;
}