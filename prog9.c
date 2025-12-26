#include<stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int fac = 1;
    for(int i=n;i>=1;i--)
    {
        fac = fac * i;
    }
    printf("the factorial is %d\n",fac);
}