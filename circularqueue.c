#include <stdio.h>
#define max 2
int cqueue[max],front =  - 1,rear =  - 1;
void insertq(int item)
{
    if ((front == 0 && rear == max - 1) || (front == rear + 1))
    {
        printf("queue is full");
        return;
    }
    else if (rear ==  - 1)
    {
        rear++;
        front++;
    }
    else if (rear == max - 1 && front > 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    cqueue[rear] = item;
}
void deleteq()
{
    if (front ==  - 1)
    {
        printf("Queue is empty ");
    }
    else if (front == rear)
    {
        printf("\n %d deleted", cqueue[front]);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        printf("\n %d deleted", cqueue[front]);
        front++;
    }
}

void display()
{
    int i;
    printf("\n");
    if (front > rear)
    {
        for (i = front; i < max; i++)
        {
            printf("%d ", cqueue[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d ", cqueue[i]);
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", cqueue[i]);
    }
}

int main()
{
    int n, ch;

        printf("\n\n Circular Queue:\n1. Insert \n2. Delete\n3. Display\n0. Exit");
        do
        {
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                insertq(n);
                break;
            case 2:
                deleteq();
                break;
            case 3:
                display();
                break;
        }
    }while (ch != 0);
}