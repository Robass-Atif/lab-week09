#include<iostream>
using namespace std;
main()
{
    string name;
    cout << "enter statement: ";
    getline(cin,name);
     for(int idx=0;name[idx]!='\0';idx++)
    {
        if((name[idx]=='a')||(name[idx]=='i')||(name[idx]=='o')||(name[idx]=='u')||(name[idx]=='e'))
        {
            continue;
        }
        cout <<name[idx];
        
    }
}