#include<stdio.h>
#include<stdlib.h>

#define MAX 50

int main();
void arr_insert();
void arr_delete();
void arr_display();
int queue_array[MAX];
int arr_rear = - 1;
int arr_front = - 1;

struct Node
{
   int data;
   struct Node *next;
}*ll_front = NULL,*ll_rear = NULL;

void ll_insert(int);
void ll_delete();
void ll_display();

void linked_list()
{
   int choice, value;  
    printf("\n\tQUEUE USING LINKED LIST");   
    printf("\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Back\n");
   while(1)
   {
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
	case 1: printf("Enter the value to be inserted: ");
		     scanf("%d", &value);
		     ll_insert(value);
		     break;
	case 2: ll_delete(); 
             break;
	case 3: ll_display(); 
             break;
	case 4: main();
         break;
	default: printf("\nWrong selection!!! Please try again!!!\n");
    }
   }
}

void ll_insert(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(ll_front == NULL)
      ll_front = ll_rear = newNode;
   else{
      ll_rear -> next = newNode;
      ll_rear = newNode;
   }
   printf("Insertion is Success!!!\n");
}

void ll_delete()
{
   if(ll_front == NULL)
      printf("Queue is Empty!!!\n");
   else{
      struct Node *temp = ll_front;
      ll_front = ll_front -> next;
      printf("Deleted element: %d\n", temp->data);
      free(temp);
   }
}

void ll_display()
{
   if(ll_front == NULL)
      printf("Queue is Empty!!!\n");
   else
   {
      struct Node *temp = ll_front;
      printf("Queue is: ");
      while(temp->next != NULL)
    {
	 printf("%d  >  ",temp->data);
	 temp = temp -> next;
    }
      printf("%d--->NULL\n",temp->data);
   }
}


int array()
{
    int choice;  
    printf("\n\tQUEUE USING ARRAY");
    printf("\n 1.Enqueue\n");
    printf(" 2. Dequeue \n");
    printf(" 3. Display \n");
    printf(" 4. Back \n");
    while (1)
    {
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            arr_insert();
            break;
            case 2:
            arr_delete();
            break;
            case 3:
            arr_display();
            break;
            case 4:
            main();
            break;
            default:
            printf("Wrong choice!! \n");
        }
    }
}
 
void arr_insert()
{
    int add_item;
    if (arr_rear == MAX - 1)
    printf("Queue Overflow! \n");
    else
    {
        if (arr_front == - 1)
        arr_front = 0;
        printf("Enter the element to be inserted:  ");
        scanf("%d", &add_item);
        arr_rear = arr_rear + 1;
        queue_array[arr_rear] = add_item;
    }
}
 
void arr_delete()
{
    if (arr_front == - 1 || arr_front > arr_rear)
    {
        printf("Queue Underflow! \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is: %d\n", queue_array[arr_front]);
        arr_front = arr_front + 1;
    }
}
 
void arr_display()
{
    int i;
    if (arr_front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is: ");
        for (i = arr_front; i <= arr_rear; i++)
            printf("\t%d ", queue_array[i]);
        printf("\n");
    }
}

int	main()
{
    int choice;
    printf("\n\tPROGRAM TO IMPLEMENT QUEUE USING ARRAY AND LINKED LIST");
    printf("\n 1. Queue using array \n");
    printf(" 2. Queue using linked list \n");
    printf(" 3. Exit \n");
    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            array();
            break;
            case 2:
            linked_list();
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("Wrong choice!! \n");
        }
    }
    system("pause");
    return 0;
}
