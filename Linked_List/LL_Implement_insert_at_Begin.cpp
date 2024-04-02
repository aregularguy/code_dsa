// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node(int d)
    {
         this->data = d;
        this->next = nullptr;
       
    }
};

class ll{
    public:
    node*  head;
    ll()
    {
        head = nullptr;
    }
    void insert(int d)
    {
        node* new_node = new node(d);
        if(!head)
         head = new_node;
         else
         {
        //      node* tmp = head;
        //      while(tmp->next)
        //   {
        //       tmp = tmp -> next;
               
        //   }
        //   tmp -> next = new_node;
        new_node->next = head;
        head = new_node;
         }
    }
    void print()
    {
        if(!head)
        cout<<"no element in a LL"<<endl;
        else{
            node* tmp = head;
        cout<<"LL data "<<endl;
        while(tmp)
        {
            cout<<tmp->data<<" ";
            tmp = tmp->next;
        } 
        }
       
    }
};


int main() {
    // Write C++ code here
   ll l1;
   l1.insert(2);
   l1.insert(3);
   l1.insert(10);
   l1.print();
}
