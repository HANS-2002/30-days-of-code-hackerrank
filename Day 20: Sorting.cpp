#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,numSwaps = 0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    for (int i = 0; i < n; i++) 
    {
        int numberOfSwaps = 0;
        
        for (int j = 0; j < n - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int k = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k;
                numberOfSwaps++;
                numSwaps++;
            }
        }
 
        if (numberOfSwaps == 0) {
            break;
        }

        
    }

    cout<<"Array is sorted in "<<numSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<arr[0]<<endl;
    cout<<"Last Element: "<<arr[n-1];
    return 0;
}
