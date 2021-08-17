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
    cout<<"\nArray is:";
    for (int i=0; i<=size-1; i++)
    {
        cout<<Arr[i]<<",";

    }
    int odd_count=0,even_count=0;
    for(int i=0; i<= size-1;i++)
    {
        if (Arr[i]%2 ==0)
        {
            even_count=even_count+1;
        }
        else
        {
            odd_count= odd_count+1;
        }
    }
    cout<<endl<<endl;
    cout<<"Number of odd integer in this arr:"<<odd_count<<endl;
    cout<<"Number of even integer in this arr:"<<even_count<<endl;
    return 0;
}
