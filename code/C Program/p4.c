#include<stdio.h>
void main()
{
    int i,j,n,m,a;

    printf("Enter the row :  ");
    scanf("%d",&n);
    printf("Enter the clouem  :  ");
    scanf("%d",&m);


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1 || j==1 || i==n || j==m)
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
