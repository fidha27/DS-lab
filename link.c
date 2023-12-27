#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node *head = NULL;
int count = 0;

void insert_at_begin(int x)
{
    struct Node *newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    count++;
    if(head == NULL)
    {
        head = newnode;
        head->data = x;
        head->link = NULL;
        return;
    }
    newnode->data = x;
    newnode->link = head;
    head = newnode;
}
void insertpos(int x,int pos)
  {
      struct node *newnode=malloc(sizeof(struct node));
      newnode->data=x;
      newnode->link=NULL;
      
      if(head==NULL)
      {
          head=newnode;
          return;
      }
      struct node *ptr=head;
      int i;
      for(i=0;i<pos;i++)
      {
          ptr=ptr->link;
      }
      newnode->link=ptr->link;
      ptr->link=newnode;
  }
void print_list()
{
    struct Node *temp;
    temp = head;
    printf("Number of Nodes in the List: %d\n", count);
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main()
{
    int choice, num;
    do
    {
        printf("\n\nMenu:\n1. Insert Node at the Beginning\n2. Print the List\n3. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the integer value to insert at the beginning: ");
                scanf("%d", &num);
                insert_at_begin(num);
                break;
            case 2:
                print_list();
                break;
            case 3:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    }while(choice != 3);
    return 0;
}
