#include<stdio.h>
int main()
{
    int choice;
    float a;
    float total;
    start:
        printf("If the customer is new then press1\nif the customer is old then press 2:");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter the amount : ");
            scanf("%f",&a);
            if(a<=1000){
                total=a-(a*(0.05));
                printf("amount to be paid : %.2f\n",total);
            }
            else if(a>=1000 && a<=2000){
                total=a-(a*(0.07));
                printf("amount to be paid : %.2f\n",total);
            }
             else if(a>2000){
                total=a-(a*(0.10));
                printf("amount to be paid : %.2f\n",total);
        }
        else{
        printf("amount to be paid : %f\n",a);
        }
        goto start;
        }
        else if(choice==2)
        {
             printf("Enter the amount : ");
            scanf("%d",&a);
            if(a>1000){
                total=a-(a*(0.07));
                printf("amount to be paid : %.2f\n",total);
            }
            else if(a>=1000 && a<=2000){
                total=a-(a*(0.10));
                printf("amount to be paid : %.2f\n",total);
            }
             else if(a>2000){
                total=a-(a*(0.13));
                printf("amount to be paid : %.2f\n",total);
        }
        else{
        printf("Invalid choice\n");
        }
        }
        goto start;
            return 0;
}
