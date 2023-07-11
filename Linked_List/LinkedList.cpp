// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node()
    {
        data = 0;
        next =0;
    }
    node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }
};

class ll {
    
    public:
    node* head;
    ll()
    {
        head = NULL;
    }
    void insert(int d)
    {
         node* new_node = new node(d);
        if(!head)
        {
           
        head = new_node;}
        else{
        node* tmp =head;
        while(tmp->next !=NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new_node;
        }
    }
    void print()
    {
        if(!head)
        cout<<"not an ll";
        node * tmp = head;
        while(tmp)
        {
            cout<<tmp->data<<endl;
            tmp = tmp->next;
        }
        
    }
};


int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    ll l;
    l.insert(2);
    l.insert(3);
    l.insert(5);
    l.insert(6);
    l.print();

    return 0;
}
