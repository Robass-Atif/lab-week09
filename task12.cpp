#include <iostream>
#include<string>
using namespace std;
main()
{
    string  name;
    cout << "enter name ";
    cin>>name;
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    int length=name.length();
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<alphabet.length();j++)
        {
            if(name[i]==alphabet[j])
            {
                cout << alphabet[j+1]<<" ";
            }
        }
    }


}