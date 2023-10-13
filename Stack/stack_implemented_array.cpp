// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Stacks {
    int top;
    int * arr;
    int n;
    
public :
   Stacks(int size)
   {
       top = -1;
       arr = new int[size];
       n = size;
   }
    void insert(int data)
    {
        if( top == n -1)
        {
            cout<<"is full "<<endl;
            return ;
        }
        arr[++top] = data;
    }
    
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == n -1;
    }
    int peek()
    {
        if(top  == -1)
        {
            cout<<"stack is empty"<<endl;
            
        }
        return arr[top];
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else 
        {
            return arr[top--];
        }
    }
};



    

int main() {
    std::cout << "Hello world!";
    Stacks st(5);
    st.insert(10);
    st.insert(100);
    st.insert(120);
    st.pop();
    cout<<"top element is "<<st.peek()<<endl;
    

    return 0;
}
