#include<stdio.h>
int addition(int x,int y)
{
    int add;
    add = x + y;
    return add;
}
int main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter another number");
    scanf("%d",&b);

    int sum = addition(a,b);
    printf("The sum of %d and %d is %d",a,b,sum);
    return 0;

}