#include <iostream>
#define MAX_SIZE 5
using namespace std;

class Queue {
private:
    int q[MAX_SIZE], rear, frnt;
public:
    Queue(){
        rear = 0;
        frnt = 0;
    }

    bool isFull() {
        if (rear == MAX_SIZE) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (frnt == rear) {
            return true;
        }
        return false;
    }

    void enQueue(int elem) {
        if(isFull()) {
            cout << "Queue is Full!" << endl;
        } else {
            cout << "Rear = " << rear << endl;
            q[rear] = elem;
            cout << "Inserted " << elem << endl;
            rear++;
        }
    }

    void shiftElements() {
        int ptr = frnt;
        for (int i=frnt+1; i<=rear; i++) {
            q[ptr] = q[i];
            ptr++;
        }
        rear--;
    }

    void deQueue(){
        int value;
        if (isEmpty()) {
            cout << "Queue is Underflow!" << endl;
        }
        else {
            value = q[frnt];
            cout << "Deleted Element = " << value << endl;
            shiftElements();
        }
    }

    void displayQueue() {
        int i;
        if (isEmpty()) {
            cout << "Queue is Empty!" <<endl;
        }
        else {
            for (i=frnt; i<rear;i++) {
                cout << q[i] << "\t";
            }
        }
    }

    void displayRearandFront() {
        cout << "Rear = " << rear << "Front = " << frnt << endl;
    }
};

int main() {
    Queue myq;
    myq.deQueue();

    cout << "Queue Created! " << endl;

    myq.enQueue(10);
    myq.enQueue(20);
    myq.enQueue(30);
    myq.enQueue(40);
    myq.enQueue(50);
    myq.enQueue(60);

    myq.deQueue();
    cout << endl;
    myq.displayQueue();
    cout << endl;
    myq.enQueue(90);
    cout << endl;
    myq.enQueue(45);

    myq.displayQueue();

    myq.deQueue();
    myq.deQueue();
    myq.deQueue();
    myq.deQueue();
    myq.deQueue();

    myq.deQueue();

    myq.displayQueue();
}
