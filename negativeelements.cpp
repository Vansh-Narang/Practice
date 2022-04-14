#include <iostream>
using namespace std;
int main()
{
    /*   int arr[6]={-1,2,-2,5,-3,7};
       int size=6;
       int arr1[size];
       int i=0;
       while(arr[i]<=size)
       {
           if(arr[i]<=0)
           {
               arr1[i++]=arr[i++];
           }
           else
           {
               arr1[size--]=arr[i++];
           }

       }
       for(int i=0;i<6;i++)
       {
           cout<<arr1[i];
       }
   }*/
    int arr[6] = {-1, 2, -2, 5, -3, 7};
    int i = -1;
    for (int j = 0; j < 6; j++)
    {
        if (arr[j] < 0)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }
}
