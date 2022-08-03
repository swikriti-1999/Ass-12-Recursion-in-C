#include<stdio.h>
void evenN(int n);
int main()
{
    int n;
    printf("\n enter value for  to print n reverse natural numbers: ");
    scanf("%d",&n);
    evenN(n);
    return 0;
}
void evenN(int n)
{
    if(n>0)
    printf("%d ",n*2);
    evenN(n-1);
}