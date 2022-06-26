#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,f;
    printf("enter two no.s");
    scanf("%d%d",&a,&b);
    for(f=a<b?a:b;f>=1;f--)
    if(a%f==0&&b%f==0)
    {
    printf("hcf is: %d",f);
    break;}
    getch();
}
