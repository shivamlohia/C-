#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, j, i;
        cin>>n;
        int a[n][n];
        for(i = n-1 ; i >= 0 ; i--)
            for(j = 0 ; j < n ; j ++)
                cin>>a[j][i];
        for(i = 0 ; i < n ; i++)
            for(j = 0 ; j < n ; j++)
                cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
