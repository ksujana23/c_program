#include<stdio.h>
int main()
{
    int arr[100];
    int size;
    printf("Enter the element at pos %d: ");
    scanf("%d",&size);
}
int main()
{
    int = 0;
    int j = size - 1;

    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i = 0;i < size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}