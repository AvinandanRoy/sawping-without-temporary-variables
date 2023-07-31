//without temporary variables swap system

#include<stdio.h>
int main()
{
    int x , y , temp;
    printf("Enter the first number : ");
    scanf("%d", &x);
    printf("Enter the second number : ");
    scanf("%d", &y);
    x = x-y ;
    y = x + y ;
    x = y - x ;

    printf("Now the value of first number is : %d\n", x);
    printf("Now the value of second number is : %d\n", y);


}

