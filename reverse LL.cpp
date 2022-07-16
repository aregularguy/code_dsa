#include<bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node * next;
};
struct node * head1=NULL,*head2=NULL;
 void display(struct node* &head){
   struct node * ptr=head;
while(ptr){
     cout<<ptr->data<<"  ";
    ptr = ptr->next;
  }
 }
  void insert(int data,struct node* &head){
  node * new_node = (struct node*)malloc(sizeof(node));
  new_node->data = data;
    new_node->next =head;
    head = new_node;
}
void reverse(struct node* &head){
    struct node * a=head,*b,*c=NULL;
    while(a){
        b = a->next;
        a->next = c;
        c=a;
        a=b;
        
    }
    head = c;
    // return head;
}
int main(){
  int a[] = {1,2,3,4,5};
  for(int i=1;i<5;i++)
  {  insert(i,head1);    
  } 
  for(int i=6;i<10;i++)
  {  insert(i,head2);    
  } 
       display(head1);
       cout<<"2nd linked list\n ";
  display(head2);
     reverse(head1);
  reverse(head2);
  cout<<"After Reversal"<<endl;
       display(head1);
       cout<<"After Reversal"<<endl;
  display(head2);
  return 0;
}
