#include <iostream>
using namespace std;
main()
{
int size1,size2;

cout << "enter first array: ";
cin>> size1;
cout << "enter secound array: ";
cin>> size2;
int arr1[size1],arr2[size2];
int size3=size2+2;
int arr3[size3];
for(int i=0;i<2;i++)
{
    cout << "enter first array1 num: ";
    cin>> arr1[i];
}
for(int i=0;i<size2;i++)
{
    cout<<"enter second array no: ";
    cin>>arr2[i];
}
arr3[0]=arr1[0];
for(int i=0;i<size3-1;i++)
{
    arr3[i+1]=arr2[i];
}
arr3[size3-1]=arr1[size1-1];
for(int i=0;i<size3;i++)
{
    cout << arr3[i]<<",";
}
}