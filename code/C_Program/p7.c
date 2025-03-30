#include<stdio.h>
void main()
{
    int i,j,n,a;

    printf("Enter the row | cloum  :  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            printf(" ");
        }


        for(int k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
