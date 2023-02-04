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
     char letter;
     cout << "letter : ";
     cin>> letter;
     if(name[size-1]==letter)
     {
        cout<< "true";
     }
     else 
     {
        cout << "false";
     }
}