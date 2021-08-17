#include <iostream>

using namespace std;
//function that returns true if str
//is a valid identifier
bool isValid(string str,int n)
{
    //if first character invalid
    if(!((str[0]>='a' && str[0]<= 'z')
       || (str[0]>='A' && str[0]<='Z')
       || str[0]=='_'))
        return false;
    //traverse the string for the rest of the character
    for(int i=1; i<str.length(); i++)
    {
        if(!((str[i]>='a' && str[i]<= 'z')
       || (str[i]>='A' && str[i]<='Z')
       || (str[i]>='0' && str[i]<='9')
       || str[i]=='_'))
       return false;
    }
    //string is a valid identifier
    return true;
}
int main()
{
    string str ="_aiub123";
    int n =str.length();

    if (isValid (str,n))
        cout<< "Valid";
    else
        cout<<"Invalid";
    return 0;
}
