#include<stdio.h>
void evenN(int n);
int main()
{
    int n;
    printf("\n enter value for  to print squares ofn natural numbers: ");
    scanf("%d",&n);
    evenN(n);
    return 0;
}
void evenN(int n)
{
    if(n>1)
    evenN(n-1);
    printf("%d ",n*n);
}