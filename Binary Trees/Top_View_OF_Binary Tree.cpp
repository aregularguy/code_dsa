#include<bits/stdc++.h>
using namespace std;

class Tree{
    public:
    int data;
    Tree * left;
    Tree * right;
    Tree(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void print(Tree * root){
    if(!root)
    return ;
    
    print(root->left);
    cout<<root->data<<" \n";
    print(root->right);
    return;

}
  vector<int> topView(Tree *root)
    {
        //Your code here
        vector<int> v;
       map<int,int> mp;
        if(!root)
        return v;
        queue<pair<Tree*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            Tree* x = q.front().first;
            int index = q.front().second;
            q.pop();
            if(mp[index] == 0)
            mp[index] = x->data;
            if(x->left)
             q.push({x->left,index -1});
             if(x->right)
             q.push({x->right,index+1});
        }
        for(auto x: mp){
            v.push_back(x.second);
        }
        return v;
    }
int main(){
    Tree * root = new Tree(2);
    root->left = new Tree(7);
    root->left->left = new Tree(8);
    root->left->right = new Tree(10);
    root->right = new Tree(9);
    root->right->left = new Tree(18);
    root->right->right = new Tree(45);
    print(root);
    vector<int> v = topView(root);
    cout<<"Top View Of BT ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
