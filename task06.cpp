#include<iostream>
using namespace std;
main()
{
     int size;
    cout << "enter num: ";
    cin>> size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout << "enter no ";
        cin>>arr[i];
    }
    int smallest=arr[0];
    for(int i=1;i<size;i++)
    {
        if(smallest>arr[i])
        {
            smallest=arr[i];
        }
    }
    cout << "smallest "<< smallest;
}