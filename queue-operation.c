
#include<stdio.h> 
#include<conio.h>
#define max 10
int queue[max], rear = -1, front = -1;
void enqueue();
void dequeue();
void traverse();

int main()
{
    int choice;
    do {
        printf("\n ---------------queue operation-----------------\n");
        printf("1.Enqueue operation \n 2.Dequeue operation \n 3. traverse operation \n 4.exit \n");
        printf("--------------------------------------------\n enter your choice: \n ");
        scanf("%d", &choice);
    
        switch(choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break; 
            case 3: traverse(); break;
            default: printf(" invalid operation \n");
        }
    } while (choice != 4);

    return 0;
}   

void enqueue() {
    int x;
    if (rear == max - 1) {
        printf(" queue is overflow ");
    } else {
        rear++;
        printf("enter the number to be enqueued : \n ");
        scanf("%d", &x);
        queue[rear] = x;
        if (front == -1) {
            front = 0; // Adjust front pointer if it's the first element
        }
    }
}

void dequeue() {
    int n;

    if (rear == -1 && front == -1) {
        printf("queue is empty \n");
    } else {
        n = queue[front];
        printf("dequeued element is %d \n", n);
        if (front == rear) {
            rear = front = -1; // Reset front and rear pointers if queue becomes empty
        } else {
            front++;
        }
    }
}

void traverse() {
    if (rear == -1 && front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Elements in the queue are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}