#include <iostream>
using namespace std;


class Queue {

    public:
        int *arr;
        int size;
        int front;
        int rear;

    Queue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val) {
        if (rear == size-1) {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (front == -1 && rear == -1) front++; // When adding the first elmt
        rear++;
        arr[rear] = val;
    }

    void pop() {
        if (front == -1) {
            cout << "Queue Underflow" << endl;
            return;
        }
        arr[front] = -1;
        if (front == rear) {
            // In case only 1 element is there
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
    }

    bool isEmpty() {
        if (front == -1) return true;
        return false;
    }

    int getSize() {
        // Edge Case Bhool skte
        if (front == -1) return 0; // Taki empty ke case me 1 na aa jaye
        return rear-front+1;
    }

    int getFront() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void print() {
        cout << "Printing curr queue : ";
        for (int i=0;i<size;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main() {

    Queue q(5);

    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();

    q.pop();
    q.print();

    q.push(60);
    q.print();

    cout << "Front Elmt : " << q.getFront() << endl;

    cout << "Size of queue : " << q.getSize() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();

    cout << "Size of queue : " << q.getSize() << endl;

    return 0;

}