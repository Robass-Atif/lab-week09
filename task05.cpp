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
    int number;
    cout<<"multiply no: ";
    cin>> number;
    for(int i=0;i<size;i++)
    {
        cout << number*arr[i]<<" ";

    }

}