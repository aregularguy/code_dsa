#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node * left,*right;
    int data;
    Node(int val){
        data  = val;
        left = NULL;
        right = NULL;
    }
};
void print(Node * root){
    if(!root)
    return ;
    
    print(root->left);
    cout<<root->data<<" \n";
    print(root->right);
    return;

}
int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left=new  Node(5);
    root->right->right = new Node(6);
    print(root);
   return 0;
}
