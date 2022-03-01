# Practical 3

## Insertion and Deletion in all the cases in a linked list

<hr>

### by Akshay Prabhat Mishra

<br>

### Sourcecode

```c
#include<stdio.h>  
#include<stdlib.h>  

struct node   
{  
    int data;  
    struct node *next;   
};  

struct node *head;  
  
void insertInTheBeg();
void insertInTheEnd();
void insertAtAPosition();
void traverse();
void deleteFromBeg();
void deleteFromEnd();
void deleteFromAPosition();   

int main ()
{  
    int ch =0;
    int choice =0;  
    while(choice!=4) 
    {
        printf("\n\n PROGRAM TO PERFORM INSERTION AND DELETION ON SINGLY LINKED LISTS");
        printf("\n 1. Insert an element in the linked list");
        printf("\n 2. Traverse the link list");
        printf("\n 3. Delete an element from the linked list");
        printf("\n 4. Exit the program\n\n");
        printf(" Enter your choice: ");
        scanf("%d",&choice);
 
        switch(choice)
        while(ch)
        {
            case 1: 
            
            printf("\n Insertion:");
            printf("\n 1. Insert at beginning\n 2. Insert at end\n 3. Insert at specified position\n 4. Exit");
            printf("\n\n Enter your choice: ");
            scanf("%d",&ch);

            switch(ch)
            {
                case 1: insertInTheBeg();
                       break;
                case 2: insertInTheEnd();
                       break;
                case 3: insertAtAPosition();
                       break;
                case 4: exit(0);
                default: printf("\n Error! Select from the choices given(1-4)! ");
            }
            break;

            case 2: traverse();
                   break;

            case 3:
            printf("\n Deletion");
            printf("\n 1. Delete from beginning\n 2. Delete fron end\n 3. Delete from specified position\n 4. Exit");
            printf("\n\nSelect you choice:");
            scanf("%d",&ch);

            switch(ch)
            {
                case 1: deleteFromBeg();
                        break;
                case 2: deleteFromEnd();
                        break;
                case 3: deleteFromAPosition();
                        break;
                case 4: exit(0);
                default: printf("Wrong Choice! Kindly select from (1-4) only!");
            }
            break;

            case 4: exit(0);
            default: printf("WRONG CHOICE!!");
        }  
    }  
}  

void insertInTheBeg()  
{  
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter data:\n");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted.");  
    }  
      
}  

void insertInTheEnd()  
{  
    struct node *ptr,*temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter data:\n");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("\nNode inserted.");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted.");  
          
        }  
    }  
}  

void insertAtAPosition()  
{  
    int i,pos,item;   
    struct node *ptr, *temp;  
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter data:");  
        scanf("%d",&item);  
        ptr->data = item;  
        printf("\nEnter the position of the node which you want to insert: ");  
        scanf("\n%d",&pos);  
        temp=head;  
        for(i=1;i<pos-1;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\nThere are less elements!!\n");  
                return ;  
            }  
          
        }  
        ptr ->next = temp ->next;   
        temp ->next = ptr;   
        printf("\nNode inserted.");  
    }  
}  

void deleteFromBeg()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty!!\n");  
    }  
    else   
    {  
        
        ptr = head;  
        printf("\nDeleted element is %d\n",ptr->data); 
        head = head->next;  
        free(ptr);  
        
    }  
}  

void deleteFromEnd()  
{  
    struct node *ptr,*ptr1;  
    if(head == NULL)  
    {  
        printf("\nList is empty!!");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nDeleted element is %d\n",head->data);  
    }  
          
    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        } 
        printf("\nDeleted element is %d\n",ptr->data); 
        ptr1->next = NULL;  
        free(ptr);  
          
    }     
}  

void deleteFromAPosition()  
{  
    struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc-1;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nthere are less elemnts !!");  
            return;  
        }  
    }  
    printf("\nDeleted element is  %d ",ptr->data); 
    ptr1 ->next = ptr ->next;  
    free(ptr);  
   
    
}  
  
void traverse()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nThe linked list is:\n");   
        while (ptr!=NULL)  
        {  
            printf("%d->",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}

```

### Output

```bash

 PROGRAM TO PERFORM INSERTION AND DELETION ON SINGLY LINKED LISTS
 1. Insert an element in the linked list
 2. Traverse the link list
 3. Delete an element from the linked list
 4. Exit the program

 Enter your choice: 1

 Insertion:
 1. Insert at beginning
 2. Insert at end
 3. Insert at specified position
 4. Exit

 Enter your choice: 1

Enter data:
24

Node inserted.

 PROGRAM TO PERFORM INSERTION AND DELETION ON SINGLY LINKED LISTS
 1. Insert an element in the linked list
 2. Traverse the link list
 3. Delete an element from the linked list
 4. Exit the program

 Enter your choice: 1

 Insertion:
 1. Insert at beginning
 2. Insert at end
 3. Insert at specified position
 4. Exit

 Enter your choice: 2

Enter data:
55

Node inserted.

 PROGRAM TO PERFORM INSERTION AND DELETION ON SINGLY LINKED LISTS
 1. Insert an element in the linked list
 2. Traverse the link list
 3. Delete an element from the linked list
 4. Exit the program

 Enter your choice: 1

 Insertion:
 1. Insert at beginning
 2. Insert at end
 3. Insert at specified position
 4. Exit

 Enter your choice: 3

Enter data:67

Enter the position of the node which you want to insert: 2

Node inserted.

 PROGRAM TO PERFORM INSERTION AND DELETION ON SINGLY LINKED LISTS
 1. Insert an element in the linked list
 2. Traverse the link list
 3. Delete an element from the linked list
 4. Exit the program

 Enter your choice: 2

The linked list is:
24->67->55->

 PROGRAM TO PERFORM INSERTION AND DELETION ON SINGLY LINKED LISTS
 1. Insert an element in the linked list
 2. Traverse the link list
 3. Delete an element from the linked list
 4. Exit the program

 Enter your choice: 3

 Deletion
 1. Delete from beginning
 2. Delete fron end
 3. Delete from specified position
 4. Exit

Select you choice:3

 Enter the location of the node after which you want to perform deletion 
2

Deleted element is  67 

 PROGRAM TO PERFORM INSERTION AND DELETION ON SINGLY LINKED LISTS
 1. Insert an element in the linked list
 2. Traverse the link list
 3. Delete an element from the linked list
 4. Exit the program

 Enter your choice: 3

 Deletion
 1. Delete from beginning
 2. Delete fron end
 3. Delete from specified position
 4. Exit

Select you choice:1

Deleted element is 24


 PROGRAM TO PERFORM INSERTION AND DELETION ON SINGLY LINKED LISTS
 1. Insert an element in the linked list
 2. Traverse the link list
 3. Delete an element from the linked list
 4. Exit the program

 Enter your choice: 2

The linked list is:
55->

 PROGRAM TO PERFORM INSERTION AND DELETION ON SINGLY LINKED LISTS
 1. Insert an element in the linked list
 2. Traverse the link list
 3. Delete an element from the linked list
 4. Exit the program

 Enter your choice: 4
```
