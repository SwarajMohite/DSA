#include <stdio.h>

int main()
{
    int i, num, a[10], n, pos, flag = 0;
    
    printf("\nEnter total numbers of elements in your array : ");
    scanf("%d",&n);
    
    printf("\nEnter array elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter element to be Search in an Array: ");
    scanf("%d",&num);
    
    for(i=0; i<n; i++)
    {
        if(a[i] == num)
        {
            flag = 1;
            pos = i+1;
        
            printf("\n\nThe number %d present in array at position %d\n\n", num, pos);
        }
    }
    
    if(flag == 0){
        printf("The number %d dosent present in array",num);
    }
}
