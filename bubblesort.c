#include <stdio.h>

int sort(int a[],int n)
{
    int i,j,temp;
    
    for( i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }

    }
    printf("The sorted array in ascending order is:\n");
    for( i=0;i<n;i++)
    printf("%d \t",a[i]);
return 0;
}

int main()
{
    int arr[]={1,4,5,76,89,33,55,00,21,56};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    return 0;
}