#include <bits/stdc++.h>  
using namespace std;  


class Node {
        public:

    Node* next;
    int data;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
    private:
    Node * head ;
    public :
    LinkedList(){
        head=nullptr;
    }
    void insert(int data)
    {
        Node * new_node = new Node(data);
        if(head==nullptr)
        {
            head = new_node;
            return;
        }
        Node *head1=head;
        while(head1->next!=nullptr)
        {
            head1=head1->next;
        }
        head1->next = new_node;
        
    }
    void insertAtBegin(int data)
    {
        Node* new_node = new Node( data);
        new_node->next = head;
        head = new_node;
    }
    void deleteNode()
    {
        // no element in LL
        if(head ==nullptr)
        {
            return;
        }
        if(head->next ==nullptr)
        {
            delete head;
            head=nullptr;
            return;
        }
        Node* tmp=head;
        while(tmp->next->next!=nullptr)
        {
            tmp=tmp->next;
        }
       delete tmp->next;
       tmp->next = nullptr;
        
        
    }
    void reverse()
    {
        Node* a=head,*b=nullptr,*c=nullptr;
        while(a)
        {
            b = a->next;
            a->next = c;
            c =a;
            a = b;
            
        }
        head = c;
    }
    void reverserecursive(){
        
    }
    
    void print()
    {
        
        Node * tmp=head;
        while(tmp)
        {
            cout<<"element in ll"<<tmp->data<<"\n";
            tmp = tmp->next;
        }
        
    }
    void deleteAtbegin()
    {
        Node* tmp1 = head;
        if(head==nullptr)
        {
            return;
        }
        head = tmp1->next;
        delete tmp1;
    }
    void even(LinkedList &l2,LinkedList &l3)
{
    Node* tmp = head;
    cout<<"even call\n";
    while(tmp)
    {
        if(tmp->data%2==0)
        {
            l2.insert(tmp->data);
            // cout<<"even call\n";
        }
        else
        l3.insert(tmp->data);
        tmp = tmp->next;
    }
}
void merge(LinkedList& l3)
{
    Node* tmp = head;
    if(head==nullptr)
    head= l3.head;
    while(tmp->next)
    {
        
        
        tmp = tmp->next;
    }
    tmp->next=l3.head;
    l3.head = nullptr;
    
}
    
    
};

// void LinkedList::




int main(){
    LinkedList ll,l2,l3;
    
    ll.insert(14);
    ll.insert(3);
    ll.insert(8);
    ll.insert(78);
     ll.insert(5);
    ll.print();
    ll.even(l2,l3);
     cout<<"even ll is \n";
     l2.print();
     l2.merge(l3);
     cout<<"odd ll is \n";
     l3.print();
     cout<<"merged ll is \n";
     l2.print();
     l2.reverse();
     cout<<"\n\n\n\n\n\n reversed ll is \n\n\n";
     l2.print();
    return 0;
}
