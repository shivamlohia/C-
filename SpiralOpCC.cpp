#include<iostream>

using namespace std;

int main()
{
    int n, i, j,k;
    cin>>n;
    int a[n][n];
    for(i = 0 ; i < n ; i++)
        for(j = 0 ; j < n ; j++)
            cin>>a[i][j];
    for(i = 0 ; i <= n/2 ; i++)
    {
        for(j = i ; j < n-i ; j++)
            cout<<a[i][j]<<" ";
        j--;
        //cout<<j<<endl;
        for(k = i+1 ; k < n-i ; k++)
            cout<<a[k][j]<<" ";
        k--;
        //cout<<k<<endl;
        for(--j ; j>=i ; j--)
            cout<<a[k][j]<<" ";
        j++;
        //cout<<j<<endl;
        for(--k ;k > i ; k--)
            cout<<a[k][j]<<" ";

    }
}
