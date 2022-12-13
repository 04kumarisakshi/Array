/*
1)Find the maximum and minimum element in an array
2)Given an array arr[] and an integer K where K is smaller than size of array,
 the task is to find the Kth smallest element in the given array. 
It is given that all array elements are distinct.
*/
#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int i ,j;
    for (i = 0; i < n - 1; i++)
    for(j=0;j<n-i-1;j++)
    if(arr[j]>arr[j+1])
    swap (arr[j+1],arr[j]);
}
void print_array(int arr[],int size)
 {
    int i;
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";

 }
 int main()
 {  int n;
 int i,k;
    cout<<"Enter the number of element of array";
    cin>>n;
     int arr[n];
      cout<<"Enter the element of array:";
     for(int i=0;i<n;i++)
     cin>>arr[i];
   cout<<"the array is ";
   print_array(arr,n);
   cout<<endl;
   bubble_sort(arr,n);
   cout<<"sorted array:";
   print_array(arr,n);
    cout<<endl;
   //cout<<"Smallest number:"<<arr[0]<<endl;
    // cout<<"largest Number"<<arr[n-1]<<endl;
     cout <<"Enter the k";
     cin>>k;
     cout<<"Smallest number:"<<arr[k-1]<<endl;
     cout<<"largest Number"<<arr[n-k]<<endl;


 } 
 
