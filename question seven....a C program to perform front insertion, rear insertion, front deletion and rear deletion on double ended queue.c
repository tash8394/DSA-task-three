#include <stdio.h>
#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

// Front insertion
void insertFront(int value)
{
    if ((front == 0 && rear == SIZE - 1) ||
        (front == rear + 1))
    {
        printf("Deque is full\n");
        return;
    }

    if (front == -1)
    {
        front = rear = 0;
    }
    else if (front == 0)
    {
        front = SIZE - 1;
    }
    else
    {
        front--;
    }

    deque[front] = value;
}

// Rear insertion
void insertRear(int value)
{
    if ((front == 0 && rear == SIZE - 1) ||
        (front == rear + 1))
    {
        printf("Deque is full\n");
        return;
    }

    if (front == -1)
    {
        front = rear = 0;
    }
    else if (rear == SIZE - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }

    deque[rear] = value;
}

// Front deletion
void deleteFront()
{
    if (front == -1)
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted: %d\n", deque[front]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == SIZE - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

// Rear deletion
void deleteRear()
{
    if (front == -1)
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted: %d\n", deque[rear]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else if (rear == 0)
    {
        rear = SIZE - 1;
    }
    else
    {
        rear--;
    }
}

int main()
{
    insertRear(10);
    insertRear(20);
    insertFront(5);

    deleteFront();
    deleteRear();

    return 0;
}
