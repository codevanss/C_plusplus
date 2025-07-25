#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX], top = -1;

void push(int val) {
    if (top == MAX - 1)
        cout << "Stack Overflow" << endl;
    else
        stack[++top] = val;
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow" << endl;
    else
        cout << "Popped element: " << stack[top--] << endl;
}

void display() {
    if (top == -1)
        cout << "Stack is empty" << endl;
    else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
            cout << stack[i] << " ";
        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}
