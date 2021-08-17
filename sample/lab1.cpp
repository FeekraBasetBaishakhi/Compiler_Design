#include <iostream>

using namespace std;

int main()
{
    int size;
    cout <<"Enter the size of the array:";
    cin>>size;

    int Arr[size];
    cout<<"\n Please enter the element of an Array:";
    for(int i=0; i<= size-1; i++)
    {
        cin>>Arr[i];
    }
    cout<<"\nArray in normal order:";
    for (int i=0; i<=size-1; i++)
    {
        cout<<Arr[i]<<",";

    }
    cout<<"\nArray in reverse:";
    for (int i= size-1; i>=0; i--)
    {
        cout<< Arr[i] <<",";
    }
    cout<<endl;
    return 0;
}

