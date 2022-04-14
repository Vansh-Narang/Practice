#include<iostream>
using namespace std;
int main()
{
  /*  int arr[5]={1,2,3,4,9};//intersection code
    int arr1[5]={1,5,6,7,9};//intersection code
    int arr3[10]={};
   int n=5;
    in t n1=5;
    int i=0,j=0,k=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i]==arr1[j])
            {
                cout<<arr1[i]<<endl<<endl<<endl;
            }
        }
    }*/
    int arr1[5]={1,2,3,4,9};
    int arr2[6]={11,0,13,14,15,16};
    int arr3[11]={};
    int n1=5;
    int n2=6;
   // int i=0,j=0,k=0;
     int i = 0, j = 0, k = 0;
 
    // Traverse both array
    while (i<n1 && j <n2)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
 
    // Store remaining elements of first array
    while (i < n1)
        arr3[k++] = arr1[i++];
 
    // Store remaining elements of second array
    while (j < n2)
        arr3[k++] = arr2[j++];
 /*  while(i<5 && j<6)
   {
       if(arr[i]<arr1[j])
       {
       arr3[k++]=arr[i++];
       cout<<"j";
   }
   else
     arr3[k++]=arr1[j++];
     cout<<"k"; 
   }*/
 /*  while(i<n)
   {
       arr3[k++]=arr[i++];
   }
   while(j<n1)
   {
       arr3[k++]=arr1[j++];
   }*/
   for(int k=0;k<10;k++)
   {
       cout<<arr3[k]<<endl;
   }
}