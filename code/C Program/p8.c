#include<stdio.h>
void main()
{
    int i,j,n,a;

    printf("Enter the row | cloum  :  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        char a='A';
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");


    }
}
