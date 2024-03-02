#include<iostream>
using namespace std;

class Queue {
public:
    int size;
    int *arr;
    int rear;
    int front;

    Queue(int size) {
        this->size = size;
        arr = new int[size];
        this->rear = 0;
        this->front = 0;
    }

    void push(int data) {
        if (rear == size) {
            cout << "Queue is full. Cannot push " << data << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    void pop() {
        if (front == rear) {
            cout << "Queue is empty. Cannot pop." << endl;
        } else {
            arr[front] = -1;
            front++;
        }
    }

    int getfront() {
        if (front == rear) {
            cout << "Queue is empty." << endl;
            return -1; 
        } else {
            return arr[front];
        }
    }

    bool isempty() {
        if (front == rear) {
            cout << "Queue is empty." << endl;
            return true;
        } else {
            return false;
        }
    }

    int getsize() {
        return rear - front;
    }
};

int main() {
    Queue myQueue(5);

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << "Front element: " << myQueue.getfront() << endl;

    myQueue.pop();

    cout << "Front element after pop: " << myQueue.getfront() << endl;

    if (myQueue.isempty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    cout << "Size of queue is " << myQueue.getsize() << endl;

    return 0;
}
