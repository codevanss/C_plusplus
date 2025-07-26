#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1)
        cout << "Queue Overflow" << endl;
    else {
        if (front == -1) front = 0;
        queue[++rear] = val;
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        cout << "Queue Underflow" << endl;
    else
        cout << "Dequeued element: " << queue[front++] << endl;
}

void display() {
    if (front == -1 || front > rear)
        cout << "Queue is empty" << endl;
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
