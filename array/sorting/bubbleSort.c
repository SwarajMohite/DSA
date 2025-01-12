#include <stdio.h>

int main()
{
    int i, j, temp, a[10], n;
    
    printf("\nEnter total numbers of elements in your array : ");
    scanf("%d",&n);
    
    printf("\nEnter array elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nArray before sorting: \n");
    
    for(i=0; i<n; i++)
    {
        printf("%d \t",a[i]);
    }
    
    printf("\n\nPerforming Selection bubble Sort on your array\n");
    
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    printf("\nArray after sorting: \n");
    
    for(i=0; i<n; i++)
    {
        printf("%d \t",a[i]);
    }
    
}
