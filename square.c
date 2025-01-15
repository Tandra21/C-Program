#include<stdio.h>
int main()
{
    float length,width,perimeter;
    printf("Enter the value of length & width of the rectangular:");
    scanf("%f%f",&length,&width);
    perimeter=2*(length+width);
    printf("The perimeter value=%.2f\n",perimeter);
    return 0;
}

