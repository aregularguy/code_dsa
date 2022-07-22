// https://codeforces.com/problemset/problem/1451/B
#include<bits/stdc++.h>
using namespace std;

int main(){
    string v = "aeiou";
    string s;
    cin>>s;
    int flg=0;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(v.find(s[i]) == string::npos and v.find(s[i +1]) ==string::npos and s[i]!='n' )
      {  cout<<"NO"<<endl;
      flg=1;
        break;}
    }
    if(flg==0)
    cout<<"YES"<<endl;
}
