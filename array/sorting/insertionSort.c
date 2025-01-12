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
    
    printf("\n\nPerforming Selection Insertion Sort on your array\n");
    
    
    for(i=1; i<n; i++)
    {
        int current = a[i];
        int prev = i-1;
        
        while( a[prev] > current && prev >= 0 )
        {
            a[prev + 1] = a[prev];
            prev--;
        }
        a[prev + 1] = current;
    }
    
    printf("\nArray after sorting: \n");
    
    for(i=0; i<n; i++)
    {
        printf("%d \t",a[i]);
    }
    
}
