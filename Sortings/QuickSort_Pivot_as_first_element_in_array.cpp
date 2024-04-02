// Quick Sort Algorithm with Pivot as a First Element always
#include <iostream>
using namespace std;

int partition(int arr[] , int lo , int hi)
{
    int pivot = arr[lo];
    int j= hi;
    for(int k = hi ; k>= lo ; k--)
    {
        if(arr[k] > pivot)
        {
            swap(arr[k] , arr[j]);
            j--;
        }
    }
    swap(arr[lo] , arr[j]);
    return  j;
}


void quicksort(int arr[] , int lo , int hi)
{
    int pivot;
    if(lo < hi)
    {
        pivot = partition(arr,lo,hi);
        quicksort(arr,lo,pivot-1);
        quicksort(arr,pivot+1,hi);
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
