#include<stdio.h>
void main()
{
    int i,j,n,a;

    printf("Enter the row | cloum  :  ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        if(i%2==0)a=0;
        else a=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",a);           //if((i+j)%2==0)printf("1");
            if(a==0) a=1;               //elseprintf("0");
            else a=0;

        }
        printf("\n");
    }
}
