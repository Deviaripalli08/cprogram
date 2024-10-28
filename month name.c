#include<stdio.h>
void main()
{
    int a;
    printf("Enter a value");
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("janauary");
        break;
        case 2:printf("feburary");
        break;
        case 3:printf("march");
        break;
        case 4:printf("april");
        break;
        case 5:printf("may");
        break;
        case 6:printf("june");
        break;
        break;
        case 8:printf("august");
        break;
        case 9:printf("septamber");
        break;
        case 10:printf("october");
        break;
        case 11:printf("november");
        break;
        case 12:printf("december");
        default:printf("Invalid output");
        break;
    }
}
