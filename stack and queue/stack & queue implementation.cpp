#include <iostream>
using namespace std;

const int MAX_SIZE = 10; // maximum size of the stack

int top = -1; // initialize top index to -1

// implement stack using an array
void push(int arrData[], int nilai) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack is full." << endl;
    } else {
        top++;
        arrData[top] = nilai;
    }
}

int pop(int arrData[]) {
    int nilai = 0; // initialize nilai to 0
    if (top < 0) {
        cout << "Stack is empty." << endl;
    } else {
        nilai = arrData[top];
        top--;
    }
    return nilai;
}

// implement queue using an array
int front = -1; // initialize front and rear indices to -1
int rear = -1;

void enqueue(int arrData[], int nilai) {
    // check if the queue is empty or not
    if (front < 0) {
        front = 0;
        rear = 0;
    } else {
        // check if the rear index exceeds the array size
        if ((rear == MAX_SIZE - 1) || (front - rear == 1)) {
            cout << "Queue is full!" << endl;
            return;
        } else {
            // increase the rear index
            rear++;
            if (rear == MAX_SIZE - 1)
                rear = 0;
            arrData[rear] = nilai;
        }
    }
}

int dequeue(int arrData[]) {
    int nilai = 0; // initialize nilai to 0
    if (front < 0) {
        cout << "Queue is empty!" << endl;
    } else {
        nilai = arrData[front];

        front++;
        if (front > MAX_SIZE - 1)
            front = 0;
    }
    return nilai;
}

int main() {
    int arr[MAX_SIZE];

    push(arr, 5);
    push(arr, 4);
    push(arr, 3);

    cout << pop(arr) << endl; // output: 5
    cout << pop(arr) << endl; // output: 4
    cout << pop(arr) << endl; // output: 3
    cout << pop(arr) << endl; // output: Stack is empty.

    enqueue(arr, 3);
    enqueue(arr, 2);
    enqueue(arr, 1);

    cout << dequeue(arr) << endl; // output: 3
    cout << dequeue(arr) << endl; // output: 2
    cout << dequeue(arr) << endl; // output: 1
    cout << dequeue(arr) << endl; // output: Queue is empty.

    return 0;
}

