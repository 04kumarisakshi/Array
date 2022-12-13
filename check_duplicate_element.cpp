#include<bits/stdc++.h>
using namespace std;
  
int main() {
    int n;
    int flag =0;
    cout<<"Enter the number of element in a array: ";
    cin>>n;
     int arr[n];
    for (int i=0;i<n;i++) {
        cout<<"enter the element";
        cin>>arr[i];
    }
  sort(arr,arr+n);
    for (int i=0;i<n-1;i++) {
  if(arr[i]==arr[i+1])
    flag =1;
    }
    if (flag==1)
    {cout<<"array have duplicate element";}
    else{
        cout<<"array dont have any duplicate element";
    }
    
}

