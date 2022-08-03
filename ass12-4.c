#include<stdio.h>
void oddN(int n);
int main()
{
    int n;
    printf("\n enter value for n to print n reverse odd numbers: ");
    scanf("%d",&n);
    oddN(n);
    return 0;
}
void oddN(int n)
{
    if(n>0)
    printf("%d ",(2*n-1));
    oddN(n-1);
}