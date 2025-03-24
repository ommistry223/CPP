#include<stdio.h>
int main()
{
    int i,j,temp;
    int a[5];

    for(i=0;i<=4;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=4;i>=0;i--){
        printf("%d ",a[i]);
    }

    return 0;
}