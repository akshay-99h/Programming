#include<stdio.h>
#include <stdlib.h>

int a[100], top = -1;

struct node{  
    int val;  
    struct node *next;  
};

struct node *head; 

void pusharr(int data, int n){
    if(isemptyarr()) top = 0;
    else if(top >= n-1) printf("Stack is full\n");
    else top++;

    a[top] = data;
}


void poparr(){
    if(isemptyarr()) printf("Stack is empty\n");
    else{
        printf("Popped element is: %d\n", a[top]);
        top--;
    }
    
}


void printstackarr(){
    if(isemptyarr()) printf("Stack is empty.\n");
    int i = 0;
    for(i = 0; i <= top; i++) printf("%d ", a[i]);
}


int isemptyarr(){
    if(top == -1) return 1;
    else return 0;
}

void pushll(){  
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
  
void popll()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL) printf("Underflow. Stack is empty\n"); 
    else  
    {  
        item = head->val;  
        ptr = head;

        head = head->next; 
        printf("The Popped Item is %d\n",ptr->val);        
    }  
}  

void printstackll()  
{  
    int i;  
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
            printf("\t%d\n",ptr->val); 
            printf("\t^\n"); 
            ptr = ptr->next;  
        }  
    }  
}


void stackarr(){
    int choice1, n, data;

    printf("\n Enter the size of STACK[MAX=100]: ");
    scanf("%d", &n);
    printf("\n--------------------------------");
    printf("\n| STACK OPERATIONS USING ARRAY |");
    printf("\n--------------------------------");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    while(choice1!=4){
        printf("\n Enter the Choice(1/2/3/4): ");
        scanf("%d", &choice1);
        switch(choice1){
            case 1: printf("Enter data to be pushed: ");
                    scanf("%d", &data);
                    pusharr(data, n);
                    break;
            
            case 2: poparr();
                    break;

            case 3: printstackarr();
                    break;
            
            case 4: printf("\n BACK TO MENU.\n\n");
                    break;

            default: printf(" Please Enter a Valid Choice(1/2/3/4)\n");    
        }
    }
}


void stackll(){
    int choice2=0; 
    printf("\n------------------------------------------");     
    printf("\n|~STACK OPERATIONS USING LINKED LIST~|");  
    printf("\n------------------------------------------");  
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    while(choice2 != 4)  {    
        printf("\nEnter your choice(1/2/3/4): ");        
        scanf("%d", &choice2);  
        switch(choice2){  
            case 1: pushll();  
                    break;    
            case 2: popll();  
                    break;  
            case 3: printstackll();  
                    break;  
            case 4: printf("BACK TO MENU\n\n");  
                    break;   
            default: printf("Please Enter a Valid Choice(1/2/3/4)\n ");   
        } 
 
    } 
}







int main(){

    int choice;

    while(choice != 3){

        printf("MENU\n");
        printf("1.Stack using array\n");
        printf("2.Stack using linked list\n");
        printf("3.Exit\n");
        printf("Enter choice: ");

        scanf("%d", &choice);

        switch(choice){

            case 1: stackarr();
                    break;

            case 2: stackll();
                    break;

            case 3: printf("\n EXIT POINT.");
                    break;

            default: printf("PLease enter a valid choice 1/2/3");
        }
    }
    return 0;
}