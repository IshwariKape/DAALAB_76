#include<iostream>
using namespace std;

int main()
{
    int n,arr[5],i,count=0;
    cout<<"enter size";
    cin>>n;
    cout<<"enter array";
    for(i=0;i<n;i++)
    {
         cin>>arr[i]; 
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count=n-i;
            break;
        }
    }
    cout<<count;
    
}