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
     cout<<root->data<<" \n";
    print(root->left);
   
    print(root->right);
    return;

}
int height(Node * root){
    if(!root)
    return 0;
    // int l = height(root->left);
    // int r = height(root->right);
    return 1 + max(height(root->left), height(root->right));
}
int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
     root->left->left=new  Node(5);
    root->right->right = new Node(6);
    root->left->right = new Node(9);
   
     root->left->right->left = new Node(7);

    cout<<"Height of Tree Is "<<height(root);
   return 0;
}
