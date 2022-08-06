#include <bits/stdc++.h>
using namespace std;

// {4,3,2} k = 3;   [4,3,2]   [4,2 ] {3}
void solve(vector<int>& ds,int arr[],int idx,int n,int sum){
   
   if(idx == n)
   {
       if(ds.size()!=0 and sum%3  == 0){
           for(int i=0;i<ds.size();i++){
               cout<<ds[i]<<" ";
           }
         cout<<endl;
       }
       
       return;
   }

   ds.push_back(arr[idx]);
   sum+=arr[idx];
    solve(ds,arr,idx+1,n,sum);
    ds.pop_back();
    sum-=arr[idx];
    solve(ds,arr,idx+1,n,sum);
}


int main(){
    int arr[] = {4,3,2};
    vector<int> ds;
    int sum = 0;
    solve(ds,arr,0,3,sum);
}
