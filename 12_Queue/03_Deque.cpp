#include <iostream>
using namespace std;


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// This is a circular deque not a circular deque
// So I will care about circular nature
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


class Deque {

    public:
        int *arr;
        int size;
        int front;
        int rear;

    Deque(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void pushFront(int val) {

        // Overflow
        if ((front == 0 && rear == size-1) || rear == front-1) { // rear front ke ek piche h
            cout << "Queue Overflow" << endl;
            return;
        }

        // Empty
        if (front == -1) {
            front++;
            rear++;
            arr[front] = val;
        }
        else if (front == 0 && rear != size-1) {
            front = size-1;
            arr[front] = val;
        }
        // Normal
        else {
            front--;
            arr[front] = val;
        }

    }

    void pushBack(int val) {

        if ((front == 0 && rear == size-1) || rear == front-1) { // rear front ke ek piche h
            cout << "Queue Overflow" << endl;
            return;
        }
        // Ye case add krna hi bhool jate h
        if (front == -1 && rear == -1) {
            front++; // When adding the first elmt
            rear++;
            arr[rear] = val;
            return;
        }
        if (rear == size-1 && front != 0) {
            rear = 0;
            arr[rear] = val;
            return;
        }
        rear++;
        arr[rear] = val;

    }

    void popFront() {

        if (front == -1) {
            cout << "Queue Underflow" << endl;
            return;
        }
        // Ye case add krna hi bhool jate h
        if (front == rear) {
            // In case only 1 element is there
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size-1) {
            arr[front] = -1;
            front = 0;
        }
        else {
            arr[front] = -1;
            front++;
        }

    }

    void popBack() {

        // Undeflow
        if (front == -1) {
            cout << "Underflow" << endl;
            return;
        }

        // Single Element
        if (front == rear) {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else if (rear == 0) {
            arr[rear] = -1;
            rear = size-1;
        }
        // Normal
        else {
            arr[rear] = -1;
            rear--;
        }

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

    Deque q(5);

    q.print();



    return 0;

}