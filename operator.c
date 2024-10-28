#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("Enter the a,b value and operator ");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case'+':printf("The addition of %d",a+b);
        break;
        case'*':printf("The multiplication of %d",a*b);
        break;
        case'-':printf("The subraction of %d",a-b);
        break;
        case'/':printf("The qucifient of %d",a/b);
        break;
        case'%':printf("The reminder of %d",a%b);
        break;
        default:printf("Invalid output");
        break;
    }
}
