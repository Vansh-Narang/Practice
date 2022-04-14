#include <iostream>
#include <vector>
using namespace std;
int main()
{
int arr[6]={1,2,1,1,1,1};
        // Stores the frequency of an element
        int freq = 1;
        
       // Traverse the array arr[]
        for (int i = 1; i < 6; i++)
        {
           
            // If the current element is equal
            // to the previous element
            if (arr[i] == arr[i - 1])
            {
               
                // Increment the freq by 1
                freq++;
            }
           
        // Otherwise,
            else {
                cout<<"Frequency of "<<arr[i - 1]<< " is: " << freq<<endl;
                // Update freq
                freq = 1;
            }
        }
        
        // Print the frequency of the last element
       cout<<"Frequency of "<<arr[6 - 1]<< " is: " << freq<<endl;
       }