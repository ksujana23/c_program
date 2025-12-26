#include<stdio.h>
int main()
{
    int a[5], sum = 0;
    printf("Enter the values: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("sum of all the elements:%d ",sum);
}