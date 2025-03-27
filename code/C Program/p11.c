#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the a :: ");
    scanf("%d",&a);

    printf("Enter the b :: ");
    scanf("%d",&b);

    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
