#include<bits/stdc++.h>

using namespace std;

void merge(int a[], int beg,int mid,int end){
    int i,j,k;
    int n1 = mid - beg +1;
    int n2 = end-mid;
    int leftarray[n1],rightarray[n2];
    for(int i=0;i<n1;i++){
        leftarray[i] = a[beg + i];
    }
    for(int j=0;j<n2;j++){
        rightarray[j] = a[mid +j +1];
    }
   i=0,j=0;
   k = beg;
    while(i<n1 and j<n2){
        if(leftarray[i] <= rightarray[j]){
            a[k++] = leftarray[i];
            i++;
        }
        else{
            a[k++] = rightarray[j];
            j++;
        }
    }
    while(i<n1){
        a[k++] = leftarray[i];
        i++;
    }
    while(j<n2){
        a[k++] = rightarray[j];
        j++;
    }


}


void mergeSort(int a[], int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);  
    }  
}  
  
/* Function to print the array */  
void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  
  
int main()  
{  
    int a[] = { 11, 30, 24, 7, 31, 16, 39, 41 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - \n";  
    printArray(a, n);  
    mergeSort(a, 0, n - 1);  
    cout<<"\nAfter sorting array elements are - \n";  
    printArray(a, n);  
    return 0;  
}  
