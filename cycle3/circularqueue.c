#include <stdio.h>
#define size 5

int f = -1;
int r = -1;
int q[size];

void enque(int item)
{
    if ((r + 1) % size == f)
        printf("Queue is overflow\n");
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        q[r] = item;
    }
    else
    {
        r = (r + 1) % size;
        q[r] = item;
    }
}

void deque()
{
    if (f == -1 && r == -1)
        printf("Queue is empty\n");
    else if (f == r)
    {
        printf("The dequeued element is %d\n", q[f]);
        f = r = -1;
    }
    else
    {
        printf("The dequeued element is %d\n", q[f]);
        f = (f + 1) % size;
    }
}

void display()
{
    int i = f;
    if (f == -1 && r == -1)
        printf("Empty\n");
    else
    {
        do
        {
            printf("%d\n", q[i]);
            i = (i + 1) % size;
        } while (i != (r + 1) % size);
        printf("Queue elements displayed\n");
    }
}

int main()
{
    int ch, x;
    while (1)
    {
        printf("Enter\n 1=enqueue\n 2=dequeue\n 3=Display\n 0=Exit\n:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the number to be queued: ");
            scanf("%d", &x);
            enque(x);
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 0:
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }
}
