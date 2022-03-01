#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void insert_at_beg();   
void insert_at_end();  
void insert_at_pos();  
void delete_from_beg();  
void delete_from_end();  
void delete_from_pos();  
void display();  
void search();  

int main()
{  
    int choice =0;  
    while(choice != 9)   
    {  
        printf("\n\t\tProgram to Implement Circular Linked List\n");  
        printf("\n\t Menu\n");
        printf("\n 1. Insert element in begining\n 2. Insert element at last\n 3. Insert element at position\n 4. Delete element from Beginning\n 5. Delete element from last\n 6. Delete element from position\n 7. Search\n 8. Show\n 9. Exit\n");  
        printf("\nEnter your choice: ");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
                insert_at_beg();      
                break;  
            case 2:  
                insert_at_end();         
                break;  
            case 3:  
                insert_at_pos();       
                break;  
            case 4:
                delete_from_beg();      
                break;  
            case 5:  
                delete_from_end();   
                break;  
            case 6:
                delete_from_pos();     
                break;  
            case 7:
                search(); 
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
                break;
            default:  
                printf("Please enter valid choice.\n");  
        }  
    }
    return 0;
}  
void insert_at_beg()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else   
    {  
        printf("\nEnter the element to be inserted: ");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        printf("\n Node inserted!\n");  
    }  
              
}  
void insert_at_end()  
{  
    struct node *ptr,*temp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter the element to be inserted: ");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
          
        printf("\nnode inserted\n");  
    }  
  
}  
  
void delete_from_beg()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\n Node deleted\n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\n Node deleted\n");  
  
    }  
}  

void insert_at_pos()  
{  
    struct node *ptr,*temp;   
    int item,pos;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter the element to be inserted: ");  
        scanf("%d",&item);  
        printf("\nEnter the position: ");  
        scanf("%d",&pos); pos+=1;
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head && pos--)  
            {  
                temp = temp -> next;  
            }  
            ptr -> next = temp -> next;  
            temp -> next = ptr;  
        }  
        printf("\nNode inserted\n");  
    }  
}
void delete_from_pos()  
{  
    struct node *ptr,*temp;   
    int pos;  
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\n Node deleted\n");  
    }  
    else  
    {  
        printf("\nEnter the position: ");  
        scanf("%d",&pos); pos+=1;
        temp = head;  
        while(temp -> next != head && pos--)  
        {  
            temp = temp -> next;  
        }  
        ptr = temp -> next;  
        temp -> next = ptr -> next;  
        free(ptr);  
        printf("\n Node deleted\n");  
    }  
}

void delete_from_end()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("\nUNDERFLOW");  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\n Node deleted\n");  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("\n Node deleted\n");  
  
    }  
}  
  
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag=1;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter the item that you want to search: ");   
        scanf("%d",&item);  
        if(head ->data == item)  
        {  
        printf(" Item found at location %d",i+1);  
        flag=0;  
        }  
        else   
        {  
        while (ptr->next != head)  
        {  
            if(ptr->data == item)  
            {  
                printf(" Item found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        }  
        if(flag != 0)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
  
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\n Nothing there to print!\n");  
    }     
    else  
    {  
        printf("\n The values are: ");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d ", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d ", ptr -> data);  
    }  
              
}