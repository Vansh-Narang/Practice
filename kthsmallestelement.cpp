#include<iostream>
using namespace std;
int smallestelement(int arr[])
{
    cout<<"ENTER THE NTH SMALLEST ELEMENT U WANT TO FIND"<<endl;
    int k;
    cin>>k;
    for(int i=0;i<1;i++)
    {
        cout<<arr[k-1];//subtract due to index problem
    }
}
int main()
{
    int arr[6]={1,2,23,3,4,6};
    int i;
    int j;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])
            swap(arr[i],arr[j]);

        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    smallestelement(arr);
}