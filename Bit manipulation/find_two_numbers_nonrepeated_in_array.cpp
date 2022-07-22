#include<bits/stdc++.h>
using namespace std;
// find odd count number present in array
int main(){
    int a[] = {1,2,4,2,4,5,3,1}; // 0110  1010  1100
 int  n = 8;
  int xorr=0;
    for(int i=0;i<n;i++){
        xorr = xorr ^ a[i];
    }
    int pos;
    cout<<xorr<<endl;
    // find any(first set bit from left and split array on wheteher pos bit is set and unset bit)
    // 6  1100  
    for(int i=0;i<32;i++){
        if(xorr & (1<<i) > 0)
        {
            pos=i;
            break;
        }
    }
    cout<<"pos is "<<pos<<endl;
    int num1 =0,num2=0;
    for(int i=0;i<n;i++){
        if((a[i] & (1<<pos)) > 0)
        num1 = num1^a[i];
        else
        num2^=a[i];

    }
    cout<<"1st number is "<<num1<<"2nd number is "<<num2;

}
