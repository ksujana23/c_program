#include<stdio.h>
int add(int,int);
int main()
{
    int a,b;
    printf("Enter the values: ");
    scanf("%d%d",&a,&b);
    int res = add(a,b);
    printf("sum of the values:%d\n",res);
}
int add(int a, int b)
{
    int c = a + b;
    return c;
}
