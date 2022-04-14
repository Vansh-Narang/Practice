#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,7};
    for(int i=0;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {

        if(arr[i]+arr[j]==12)
        {
            cout<<i<<j<<endl;
        }
    }
}
}