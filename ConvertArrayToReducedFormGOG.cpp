#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i, j, n;
        cin>>n;
        int a[n], b[n];
        for(i = 0 ; i < n ; i++){
            cin>>a[i];
            b[i] = a[i];
        }
        sort(a,a+n);
        for(i = 0 ; i < n ; i++)
            for(j = 0 ; j < n ; j++)
                if(a[i] == b [j])
                    cout<<j<<" ";
        cout<<endl;
    }
}
