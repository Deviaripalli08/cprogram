#include<stdio.h>
void main()
{
    char D;
    printf("Enter an alpbhet ");
    scanf("%c",&D);
    switch(D)
    {
        case'a':printf("The char vowle is %c",D);
        break;
        case'e':printf("The char vowel is %c",D);
        break;
        case'i':printf("The char vowel is %c",D);
        break;
        case'o':printf("The char vowel is %c",D);
        break;
        case'u':printf("The char vowel is %c",D);
        break;
        default:printf("Invalid output");
        break;
    }
}
