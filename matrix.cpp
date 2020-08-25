#include<iostream>
using namespace std;
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,m,n,p,q;
    cout<<"Enter the number of rows and columns of matrix A\n";
    cin>>m>>n;
    cout<<"Enter the number of rows and columns of matrix B\n";
    cin>>p>>q;
    if((m==p)&&(n==q))
    {
        cout<<"Matrix can be added\n";
    }
    else{
        cout<<"Matrix cannot be added\n";
    }
    cout<<"Enter matrix A\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cin>>A[i][j];
    }
    cout<<"Enter the matrix B\n";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            cin>>B[i][j];

    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            C[i][j]=A[i][j]+B[i][j];
    }
    cout<<"sum of matrix\n";
    for(i=0;i<m;i++)
    { cout<<"\n";
          for(j=0;j<n;j++)
            cout<<" "<<C[i][j];
    }
    return 0;

}
