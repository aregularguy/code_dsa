// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Tree {
    public:
    int data;
    Tree * left , *right;
    Tree(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};
 vector<vector<int>>  ans;
void levelorder(Tree * t)
{
    queue<Tree*> q;
    q.push(t);
    while(!q.empty())
    {
        int s = q.size();
        vector<int> res;
        for(int i=0;i<s;i++)
        {
            res.push_back(q.front()->data);
                    auto x = q.front();
        if(x->left)
        q.push(x->left);
       if(x->right)
       q.push(x->right);
            q.pop();
        }
        ans.push_back(res);
        
    }
}
void printtree()
{
    int x = ans.size();
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro"<<endl;
    Tree* t = new Tree(3);
    t->left = new Tree(9);
    t->right = new Tree(20);
    t->right->left = new Tree(15);
    t->right->right = new Tree(7);
    levelorder(t);
    printtree();
    
    return 0;
}
