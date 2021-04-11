#include <iostream>
using namespace std;

int stk[100];
int top = -1;
int n = 100;

void push(int val) {
    if (top >= 100) {
        cout << "Stack is Full!" << endl;
    } else {
        top++;
        stk[top] = val;
        cout << val << " Inserted into stack successfully" << endl;
    }
}

void pop() {
    if (top < 0) {
        cout << "Stack is underflow!" << endl;
    } else {
        cout << stk[top] << " Popped element " << endl;
        stk[top] = 0;
        top--;
    }
}

void display() {
    if (top < 0) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "index ----- Element" << endl;
        for(int i=top; i>=0; i--) {
            cout << i << "             " << stk[i] << endl;
        }
    }
}


int main() {
    int ch, val;
    
    do {
        cout << "Choose your Option" <<endl;
        cout <<"1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the value " << endl;
            cin >> val;
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            break;
        }

    }while(ch != 4);
    
}