#include<iostream>
using namespace std;
main()
{
    int size;
    int total;
    cout <<"total no: ";
    cin>> total;
    cout<<"enter size: ";
    cin>> size;
    int arr[size];
    int sum=0;
    for (int i=0;i<size;i++)
    {
        cout << "enter amount: ";
        cin>> arr[i];
        sum=sum+(arr[i]/100);
    }
    if((sum==total)||(sum>total))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}