#include<stdio.h>
void rev(int n);
int main()
{
    int n;
    printf("\n enter a number: ");
    scanf("%d",&n);
    rev(n);
    return 0;
}
void rev(int n)
{
    int rem=0;
    if(n>0)
    {
        rem=n%10;
        printf("%d",rem);
        rev(n/10);
    }
}