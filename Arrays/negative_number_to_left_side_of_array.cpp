#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int l,int hi)
{
    while(l<=hi)
    {
        if(arr[l] < 0 and arr[hi] < 0)
        l++;
        else if(arr[l] > 0 and arr[hi] < 0)
        {
            int tmp = arr[l];
            arr[l] = arr[hi];
            arr[hi] = tmp;
        }
        else if(arr[l] > 0  and arr[hi] > 0)
        {
            hi-=1;
        }
        else
        {
            l+=1;
            hi-=1;
        }
        
    }
    
    
}

int main() {
	cout<<"GfG!";
	int arr[] = {-2,10,22,-12,-5,34,-3};
	int n = 7;
	solve(arr,0,6);
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<endl;
	}
	return 0;
}
