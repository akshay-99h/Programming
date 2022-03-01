#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void doubly_ll_insert(int data, int pos);
void doubly_ll_delete(int pos);
void doubly_ll_print();

int main()
{   
    int data, pos;
    printf("\n\t\tPROGRAM TO DEMONSTRATE DOUBLY LINKED LIST:\n");
    printf("\n\tMenu\n");
    printf("\n\t1. Insert an element\n");
    printf("\n\t2. Delete an element\n");
    printf("\n\t3. Print all experiments\n");
    printf("\n\t4. Exit\n");
    printf("\n\tEnter your choice: ");
    scanf("%d", &data);
    while(data != 4)
    {
        switch(data)
        {
            case 1:
                printf("\n\tEnter the data to be inserted: ");
                scanf("%d", &data);
                printf("\n\tEnter the position to be inserted: ");
                scanf("%d", &pos);
                doubly_ll_insert(data, pos);
                break;
            case 2:
                printf("\n\tEnter the position to be deleted: ");
                scanf("%d", &pos);
                doubly_ll_delete(pos);
                break;
            case 3:
                doubly_ll_print();
                break;
            case 4:
                exit(0);
            default:
                printf("\n\tInvalid choice\n");
                break;
        }
        printf("\n\tMenu\n");
        printf("\n\t1. Insert an element\n");
        printf("\n\t2. Delete an element\n");
        printf("\n\t3. Print all elements\n");
        printf("\n\t4. Exit\n");
        printf("\n\tEnter your choice: ");
        scanf("%d", &data);
    }
    system("exit");
    return 0;
}

void doubly_ll_insert(int data, int pos)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if(pos == 1)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        ptr = head;
        for(int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void doubly_ll_delete(int pos)
{
    struct node *ptr, *temp;
    if(pos == 1)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        ptr = head;
        for(int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }
        temp = ptr->next;
        ptr->next = temp->next;
        free(temp);
    }
}

void doubly_ll_print()
{
    struct node *ptr;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

