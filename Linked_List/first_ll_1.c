#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node

int main()
{
    int option;
    do {
        printf("\n\t******Main Menu******\n");
        printf("\t1. Create Linked List \n");
        printf("\t2. View Linked List \n");
        printf("\t0. Exit\n");
        printf("\nEnter Opetion : ");
        scanf("%d",&option);
        
        switch(option)
        {
            case 0 : 
               printf("Good Bye ! \n");
               break;
               
            case 1 :
               start = create_ll(start);
               printf("\nCreated Linked List\n");
               break;
               
            case 2 :
               start = display(start);
               printf("\nDisplayed Linked List\n");
               break;
               
            default :
               printf("\nYou Entered Invalid Option\n\n");
               break;
        }
    }while(option != 0);
    
    getch();
    return 0;
}

struct node *create_ll(struct node *start)
{
    struct node *new, *ptr;
    int num;
    printf("You can Enter -1 as data to Exit : \n");
    printf("\nEnter data : ");
    scanf("%d",&num);
    
    while(num != -1)
    {
        new = (struct node*)malloc(sizeof(struct node));
        new -> data = num;
        
        if(start == NULL)
        {
            new -> next = NULL;
            start = new;
        }
        else
        {
            ptr = start;
            while((ptr -> next) != NULL)
              ptr = ptr -> next;
              
            ptr -> next = new;
            new -> next = NULL;
        }
        
        printf("\n Enter the data : ");
        scanf("%d", &num);
    }
    
    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    
    if(start == NULL)
    {
        printf("Nothing to show now! \n");
        break;
    }
    
    while(ptr -> next != NULL)
    {
        printf("\t%d",ptr -> data);
        ptr = ptr -> next;
    }
    
    return start;
}
