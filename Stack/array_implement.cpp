#include <iostream>
using namespace std;

class st {
public:
    int d;
    int* arr;
    int top = -1;
    
    st(int d) {
        top++;
        arr = new int[1];
        arr[top] = d;
    }
    
    ~st() {
        delete[] arr;
    }
    
    // Function to pop the top element from the stack
    void pop() {
        if (top == -1) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }

        top--; // Decrement the top index to remove the top element
    }
    
    void print() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    std::cout << "Hello world!" << endl;
    int x;
    cout << "Insert element to insert" << endl;
    cin >> x;

    st obj(x);
    obj.print();

    obj.pop();
    obj.print();

    return 0;
}
