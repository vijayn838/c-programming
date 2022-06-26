#include<stdio.h>
#include<conio.h>
long fact(int n)
{
    if(n>0)
    return(n*fact(n-1));
    else
    return (1);
}
main()
{
    printf("fact of no. 5: %ld",fact(5));
    getch();
}

