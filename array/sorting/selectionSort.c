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
    
    printf("\n\nPerforming Selection Selection Sort on your array\n");
    
    for(i=0; i<n; i++)
    {
        int smallestIndex = i;
        
        for(j=i+1; j<n; j++)
        {
            if(a[smallestIndex] > a[j])
            {
                smallestIndex = j; 
            }
        }
        
        temp = a[i];
        a[i] = a[smallestIndex];
        a[smallestIndex] = temp;
        
    }
    
    printf("\nArray after sorting: \n");
    
    for(i=0; i<n; i++)
    {
        printf("%d \t",a[i]);
    }
    
}
