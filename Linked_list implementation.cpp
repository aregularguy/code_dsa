#include<bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node * next;
};
struct node * head=NULL;
 void display(){
   struct node * ptr=head;
while(ptr){
     cout<<ptr->data<<"  ";
    ptr = ptr->next;
  }
 }
  void insert(int data){
  node * new_node = (struct node*)malloc(sizeof(node));
  new_node->data = data;
    new_node->next =head;
    head = new_node;
}
struct node* reverse(){
    struct node * a=head,*b,*c=NULL;
    while(a){
        b = a->next;
        a->next = c;
        c=a;
        a=b;
        
    }
    head = c;
}
int main(){
  int a[] = {1,2,3,4,5};
  for(int i=0;i<5;i++)
  {  insert(i);    
  } 
       display();
     reverse();
  cout<<"After Reversal"<<endl;
       display();
  return 0;
}
