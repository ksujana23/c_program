#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter the values:\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter negative values: ");
    for (int i=0;i<5;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}