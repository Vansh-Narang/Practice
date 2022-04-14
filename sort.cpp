#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int arr[6]={1,23,2,3,31,0};
  /*  for (i = 1; i < 6; i++)
    {
        for (j= 0; j<6-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }*/
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(arr[j]<arr[i])//ascending order
           // if(arr[j]>arr[i])//descending order
            {
                swap(arr[j],arr[i]);
            }
        }
    }
    cout << "printing"<<"    "<<endl;
    for(int i=0;i<6;i++)
    {
    cout<<arr[i]<<"  ";
    }
    return 0;
}