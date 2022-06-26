#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][3],sum=0,i,j;
    printf("enter the matrix elements");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
    }
    }
    printf("matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d",a[i][j]);
        sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum %d",sum);
    
    

}
