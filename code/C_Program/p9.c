#include<stdio.h>
void main()
{
    int i,j,n;

    printf("Enter the row | cloum  :  ");
    scanf("%d",&n);

    int nsp=n-1;

    for(i=1;i<=n;i++)
    {
        int a=i-1;
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        nsp--;

        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }

        for(int y=1;y<=i-1;y++)
        {
            printf("%d",a);
            a--;
        }

        printf("\n");
    }
}
