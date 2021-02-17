#include<iostream>

using namespace std;
int tot = 0;
int max_sum(int a[], int n)
{
    int i, j, temp = 0, temp1 = 0;
    for(j = 0 ; j < n ; j++){
        temp+=a[j]*j;
    }
    if(tot<temp)
        tot = temp;
    else if(tot == temp)
        return tot;
    a[n] = temp1;
    for(i = 1 ; i < n ; i++)
        a[i] = a[i-1];
    a[0] = temp1;
    max_sum(a,n);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0 ; i < n ; i++)
            cin>>a[i];
        cout<<max_sum(a,n)<<endl;
    }
}
