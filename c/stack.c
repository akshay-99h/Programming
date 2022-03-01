#include <stdio.h>
#include <stdlib.h>

int a[100], top = -1;

struct node{  
    int val;  
    struct node *next;  
};

struct node *head; 

int is_arr_empty(){
    if(top == -1) return 1;
    else return 0;
}

void push_arr(int data, int n){
    if(is_arr_empty()) top = 0;
    else if(top >= n-1) printf("Stack is full\n");
    else top++;

    a[top] = data;
}


void pop_arr(){
    if(is_arr_empty()) printf("Stack is empty\n");
    else{
        printf("Popped element is: %d\n", a[top]);
        top--;
    }
    
}

void print_stack_arr(){
    if(is_arr_empty()) printf("Stack is empty.\n");
    int i = 0;
    for(i = 0; i <= top; i++) printf("%d ", a[i]);
}

void push_linked_list(){  
    int val;
    struct node *ptr;  
    ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL) printf("Unable to Push the Element.\n");
    else{  
        printf("Enter the Value: ");  
        scanf("%d", &val);  
        if(head == NULL){         
            ptr -> val = val;  
            ptr -> next = NULL;  
            head = ptr;  
        }   
        else{  
            ptr -> val = val;  
            ptr -> next = head;  
            head = ptr;  
        }  
        printf("Item Pushed.\n");
    }  
}  
  
void pop_linked_list()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL) printf("Underflow. Stack is empty!\n"); 
    else  
    {  
        item = head->val;  
        ptr = head;

        head = head->next; 
        printf("The popped Item is %d\n",ptr->val);        
    }  
}  

void print_stack_linked_list()  
{  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("STACK is Empty.\n");  
    }  
    else  
    {  
        printf("Printing Stack elements: \n");  
        while(ptr!=NULL)  
        {  
            printf("\t%d > \n",ptr->val); 
            ptr = ptr->next;  
        }  
    }  
}


void array_stack(){
    int choice1=0, n, data;
    printf("\n Enter the size of STACK[MAX=100]: ");
    scanf("%d", &n);
    printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.Return\n");
    while(choice1!=4){
        printf("\n Enter your choice: ");
        scanf("%d", &choice1);
        switch(choice1){
            case 1: printf("Enter data to be pushed: ");
                    scanf("%d", &data);
                    push_arr(data, n);
                    break;
            
            case 2: pop_arr();
                    break;

            case 3: print_stack_arr();
                    break;
            
            case 4: printf("\n BACK TO MENU.\n\n");
                    break;

            default: printf(" Please Enter a Valid Choice(1/2/3/4)\n");    
        }
    }
}



void linked_list_stack(){
    int choice=0;
    printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.Return\n");
    while(choice!= 4)  {    
        printf("\nEnter your choice: ");        
        scanf("%d", &choice);  
        switch(choice){  
            case 1: push_linked_list();  
                    break;    
            case 2: pop_linked_list();  
                    break;  
            case 3: print_stack_linked_list();  
                    break;  
            case 4: printf(" BACK TO MENU\n\n");  
                    break;   
            default: printf("Please Enter a Valid Choice!\n ");   
        } 
    } 
}

int main () {
    system("clear");
   printf("\n Program to show Stack implementation using Arrays and Linked lists.\n\n");
   do
   {
       printf(" 1. Use arrays.\n 2. Use stacks.\n 3. Exit\n\n Select your choice: ");
       switch (getchar())
       {
           case '1':
               printf("\n\n You have selected Stack using arrays.\n\n");
               array_stack();
               break;
           case '2':
                printf("\n\n You have selected Stack using linked list.\n\n");
                linked_list_stack();
               break;
            case '3':
                printf("\n\n Exiting the program!\n\n");
                exit(0);
           default:
               printf("\n\n Invalid choice.\n\n");
               break;
       }
   } while(1);
   return 0;
}