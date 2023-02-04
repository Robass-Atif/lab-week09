#include <iostream>
using namespace std;
main()
{
    int count=0;
     string name;
     int size=0;
     cout<< "enter name: ";
     getline(cin,name);
     while(name[size]!='\0')
     {
        
     size++;
     count++;
     }
     if(count%2==0)
     {
    cout<< "true";
     }
     else
     {
        cout << "false";
     }

}