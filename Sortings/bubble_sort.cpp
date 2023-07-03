// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swap(int& a,int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
    return;
}
void BubbleSort(int arr[],int lo,int n)
{
   bool swapped=false;
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(arr[j] > arr[j+1])
           {
               swap(arr[j],arr[j+1]);
               swapped =true;
           }
       }
       if(swapped == false)
       break;
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
    BubbleSort(arr,0,5);

    return 0;
}
