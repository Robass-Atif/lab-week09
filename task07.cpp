#include <iostream>
using namespace std;
main()
{
     string name;
     int size=0;
     cout<< "enter name: ";
     getline(cin,name);
     while(name[size]!='\0')
     {
        cout<<name[size]<<" "<<size<<endl;
     size++;
     }

}