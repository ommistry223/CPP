#include<stdio.h>
void main()
{
    int i,j,n,a;

    printf("Enter the row | cloum  :  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n/2+1 || j==n/2+1)
            {
              printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
}
