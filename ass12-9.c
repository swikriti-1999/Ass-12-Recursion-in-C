#include<stdio.h>
void oct(int n);
int main()
{
    int n;
    printf("\n enter a number: ");
    scanf("%d",&n);
    oct(n);
    return 0;
}
void oct(int n)
{
    int res=0;
    if(n>0)
    {
        res=n%8;
        oct(n/8);
        printf("%d",res);
    }
}