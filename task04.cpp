#include <iostream>
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
    int num;
    cout << "finding no: ";
    cin >>num;
    bool found=false;
    for(int i=0;i<size;i++)
    {
        if(num==arr[i])
        {
            found=true;
        }
    }
    if(found==true)
    {
        cout<< "already exist.";

    }
    else
    {
        cout << "not exist.";
    }
 }