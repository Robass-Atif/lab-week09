#include<iostream>
using namespace std;
main()
{
    int size;
    cout<< "enter no: ";
    cin>>size;
    int arr[size];
    int sum=0;
    for(int i=0;i<size;i++)
    {
        cout<<"enter resistance: ";
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout <<"total resistance: "<<sum;
    
}