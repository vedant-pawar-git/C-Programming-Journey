#include <stdio.h>
 
int main()
{
    int a,b,c,d,i;
    float e;
    printf("Enter the marks of three subjects: ");
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    e=(float)d/3;
    int choice=0;
    for (i=1;choice!=5;i++)
    {
        printf("1. TOTAL\n");
        printf("2. AVERAGE\n");
        printf("3. PASS/FAIL\n");
        printf("4. GRADE\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            printf("TOTAL: %d\n",d);
            break;

            case 2:
            printf("AVERAGE: %.2f\n",e);
            break;

            case 3:
            if(a<40 || b<40 || c<40)
            {
                printf("FAIL\n");
            }
            else if (a>=40 && b>=40 && c>=40 && e<=100)
            {
                printf("PASS\n");
            }
            else 
            {
                printf("INVALID INFORMATION\n");
            }
            break;

            case 4:
            if(e<=100 && e>=90)
            {
                printf("GRADE A\n");
            }
            else if (e<90 && e>=75)
            {
                printf("GRADE B\n");
            }
            else if (e<75 && e>=60)
            {
                printf("GRADE C\n");
            }
            else if (e<60 && e>=40)
            {
                printf("GRADE D\n");
            }
            else 
            {
                printf("FAIL\n");
            }
            break;

            case 5:
            break;
        }
    }
    return 0;
}