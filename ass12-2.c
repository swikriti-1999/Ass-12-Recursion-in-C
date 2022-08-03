#include<stdio.h>
void printrevN(int n);
int main()
{
    int n;
    printf("\n enter a number: ");
    scanf("%d",&n);
    printrevN(n);
return 0;
}
void printrevN(int n)
{
    if(n>0)
    printf("%d ",n); 
    printrevN(n-1);
}