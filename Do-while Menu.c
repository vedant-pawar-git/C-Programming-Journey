#include <stdio.h>
int main ()
{
    int choice=0;
    do 
    {
        printf("1.Say Hello\n");
        printf("2.Say Goodbye\n");
        printf("3.Exit\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            printf("Hello\n");
            break;

            case 2:
            printf("Goodbye\n");
            break;

            case 3:
            printf("Bye\n");
            break;
            
            default :
            printf("Invalid Choice\n");
        }
    }
    while(choice!=3);
    return 0;
}