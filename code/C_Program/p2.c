#include<stdio.h>
void main()
{
    int i,j,n,a;

    printf("Enter the row | cloum  :  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int a=65;
        char ch=(char)a;
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%c",ch);
            }
            else{
                printf("%d",j);
            }
            ch++;
        }
        printf("\n");
    }
}
