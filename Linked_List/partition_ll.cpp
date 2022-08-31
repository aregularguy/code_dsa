#include <iostream>
using namespace std;
 
class node{
    public:
    node* next;
    int data;
   
};

void push(node* *head_ref,int val)
{
    node* new_node = new node();
    new_node->data = val;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

void print(node* head)
{
    while(head)
    {
        cout<<head->data<<"  ";
        head = head -> next;

    }
}

void partition(node* head,int B)
{
     if(!head)
            return ;
  node* a = new node();
  node* b = new node();
  node* ah = a;
  node* bh = b;
  while(head)
  {
      if(head->data >= B)
      {
          b->next = head;
          b = b->next;
      }
      else{
           a->next = head;           a = a->next;
      }
      head = head ->next;
  }
  a->next = bh;
  b->next = NULL;
  print(ah->next);
}

int main()
{
    node* head = NULL;
    push(&head,5);
    push(&head,7);
    push(&head,9);
    push(&head,2);
    push(&head,4);
    push(&head,3);
     cout<<"\n"<<"LL before parition is"<<endl;
      print(head);

       cout<<"\n"<<"LL after parition is"<<endl;
    partition(head,3);

  


}
