#include <stdio.h>

int main()
{
    int a,b,sum,difference,product,quotient,remainder;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    remainder=a%b;
    printf("sum = %d\n",sum);
    printf("difference = %d\n",difference);
    printf("product = %d\n",product);
    printf("quotient = %d\n",quotient);
    printf("remainder = %d\n",remainder);
    return 0;

}