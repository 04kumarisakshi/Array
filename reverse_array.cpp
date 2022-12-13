#include<iostream>
using namespace std;
void reverse_array(int arr[],int start ,int end)
 {
    while(start<end)
    {
         int temp = arr[start];
         arr[start]= arr[end];
         arr[end]= temp;
         start++;
         end--;

    
    }
 }
    void printArray(int arr[], int size)
      {
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
    }
         int main()
      { int n;
       int i,k;
    cout<<"Enter the number of element of array";
    cin>>n;
     int arr[n];
      cout<<"Enter the element of array:";
     for(int i=0;i<n;i++)
     cin>>arr[i];
   cout<<"the array is ";
         
           printArray(arr, n);
           cout << "Reversed array is" << endl;
           reverse_array(arr,0,n-1);
            printArray(arr, n);
    return 0;

   }
