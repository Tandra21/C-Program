#include<stdio.h>
int main()
{
    int amount,note1000,note500,note200,note100,note50,note20,note10;
    printf("Enter the amount : \n");
    scanf("%d",&amount);
    note1000=amount/1000;
    amount=amount-note1000*1000;


     note500=amount/500;
    amount=amount-note500*500;

     note200=amount/200;
    amount=amount-note200*200;

     note100=amount/100;
    amount=amount-note100*100;

     note50=amount/50;
    amount=amount-note50*50;

     note20=amount/20;
    amount=amount-note20*20;

     note10=amount/10;
    amount=amount-note10*10;
    printf("note1000=%d\n note500=%d\n note200=%d\n note100=%d\n note50=%d\n note20=%d\n note10=%d\n",note1000,note500,note200,note100,note50,note20,note10);
    return 0;
}
