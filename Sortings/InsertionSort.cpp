// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void solve1(int arr[],int lo,int n)
{
    int i,j,key;
   for( i=1;i<n;i++)
   {
       key = arr[i];
       j = i-1;
       while(j>=0 and arr[j]> key)
       {
           arr[j+1] = arr[j];
           j = j-1;
           
       }
       arr[j+1] = key;
       
   }
    cout<<"array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    int arr[] = {64,25,12,22,11};
    solve1(arr,0,5);

    return 0;
}
