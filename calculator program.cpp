#include<stdio.h>

int main()
{ 
    int p,q;
    char opt;
    float r;
    printf("choose the operator");
    scanf("%c",&opt);
    printf("enter the first no.");
    scanf("%d",&p);
    printf("enter the secomnd no.");
    scanf("%d",&q);
    switch(opt)
    {
        case'+':
       { r=p+q;
        printf("addition of two no.:%f",r);
        break;}
        case'-':
       { r=p-q;
        printf("subs %f",r);
        break;}
        case'*':
        {r=p*q;
        printf("multiply %f",r);
        break;}
        case'/':
        {r=p/q;
        printf("division %f",r);
        break;}
        default:
        printf("invalid operator");

    }
    return 0;
    }
