#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f,i,j;
    cout<<"Enter the number of matrix A:";
    cin>>a;
    cout<<"Enter the number of matrix A:";
    cin>>b;
    cout<<"Enter the number of matrix R:";
    cin>>c;
    cout<<"Enter the number of matrix B:";
    cin>>d;
    cout<<"Enter the number of matrix C:";
    cin>>e;
    cout<<"Enter the number of matrix C:";
    cin>>f;

    int A[a][b],B[c][d],C[e][f];
    cout<<"\n Please enter the value of matrix A:";
    for (i=0;i<a;i++)
    {
        for(j=0;j<b; j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"\n Please enter the value of matrix B:";
    for (i=0;i<c;i++)
    {
        for(j=0;j<d; j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"\n Please enter the value of matrix A:";
    for (i=0;i<e;i++)
    {
        for(j=0;j<f; j++)
        {
            cin>>A[i][j];
        }
    }
