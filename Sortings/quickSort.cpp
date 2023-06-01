// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int partition(int low,int hi,int arr[])
{
    // int arr[] = { 10, 7, 8, 9, 1, 5 };
    
    int pivot = arr[hi];
    int i = low-1;
    for(int j = low;j<=hi-1;j++)
    {
        if(arr[j] < pivot )
        {
            i++;
            swap(arr[j],arr[i]);
            
        }
    }
    swap(arr[hi],arr[i+1]);
    return i+1;
}


void quicksort(int arr[],int low,int hi){
    int pi;
    if(low<hi)
    {
        pi = partition(low,hi,arr);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,hi);
    }
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
int arr[] = { 10, 7, 8, 9, 1, 5 };
int N= 6;
quicksort(arr,0,N-1);
cout << "Sorted array: " << endl;
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
return 0;
}
