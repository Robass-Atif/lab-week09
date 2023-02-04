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

     int vowels=0;
     for(int i=0;i<size;i++)
     {
        if((name[i]=='a')||(name[i]=='e')||(name[i]=='i')||(name[i]=='o')||(name[i]=='u') )
        {
            vowels++;
        }
     }
     cout<<vowels;
}