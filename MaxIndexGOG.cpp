#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i, j, n, maxind=0;
        cin>>n;
        int a[n];
        for(i = 0 ; i < n ; i++)
            cin>>a[i];
        for(i = 0 ; i < n ; i ++)
            for(j = n-1 ; j > i ; j--)
                if(a[i]<=a[j]&&maxind<j-i)
                    maxind = j-i;
        cout<<maxind<<endl;
    }
}
