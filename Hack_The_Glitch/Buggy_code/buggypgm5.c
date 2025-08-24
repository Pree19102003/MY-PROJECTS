//5. Queue Implementation using Array

#include <stdio.h>
#define MAX 5
int queue[MAX], front = -1, rear = -1;
void enqueue(int val): {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = val;
    }
}
Void dequeue() {
    if (front == -1 || front > rear):
        printf("Queue Underflow\n");
    else :{
        printf("Deleted: %d\n", queue[front]);
        rear--;
    }
}
void display(): {
    if (front == -1 || front > rear):
        printf("Queue is empty\n")
    else :{
        print("Queue: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        print("\n");
    }
}
Null main() {
    int choice, val;
    while (1) {
        printf("\n 1.Enqueue 2.Dequeue 3.Display 4.Exit: ");
        scanf("%d", &choice);
        Switch (choice) {
            case '1': printf("Enter value: "); scanf("%d", &val); enqueue(val); break;
            case '2': dequeue(); break;
        }
            case '3': display(); break;
            case '4': return 0;
            default: print("Invalid choice\n");
        }
    }
}
