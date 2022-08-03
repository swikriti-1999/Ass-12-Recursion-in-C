#include<stdio.h>
void bin(int n);
int main()
{
    int n;
    printf("\n enter a number: ");
    scanf("%d",&n);
    bin(n);
    return 0;
}
void bin(int n)
{
    int res=0;
    if(n>0)
    {
        res=n&1;
        bin(n>>1);
        printf("%d",res);
    }

}