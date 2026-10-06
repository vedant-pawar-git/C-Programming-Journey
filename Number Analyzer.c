#include <stdio.h>

int main()
{
    int a,b,i,choice = 0;

    printf("Enter number: ");
    scanf("%d",&a);

    for(i=1;choice!=5;i++)
    {
        printf("1. Check Positive/Negative\n");
        printf("2. Check Even/Odd\n");
        printf("3. Find Square\n");
        printf("4. Print Multiplication Table\n");
        printf("5. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                if(a>0)
                {
                    printf("Positive\n\n");
                }
                else if(a<0)
                {
                    printf("Negative\n\n");
                }
                else
                {
                    printf("Zero is neither Negative nor Positive\n\n");
                }
                break;

            case 2:
                if(a%2==0)
                {
                    printf("Even\n\n");
                }
                else
                {
                    printf("Odd\n\n");
                }
                break;

            case 3:
                b=a*a;
                printf("Square of the number: %d\n\n",b);
                break;

            case 4:
                for(i=1;i<=10;i++)
                {
                    printf("%d*%d=%d\n",i,a,i*a);
                }
                break;

            case 5:
                printf("Exit");
                break;
        }
    }

    return 0;
}