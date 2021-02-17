#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, i;
        cin>>n>>m;
        int ar[n];
        for(i=0;i<n;i++)
            ar[i] = 0;
        for(int j=0;j<m;j++){
            int a, b, k;
            cin>>a>>b>>k;
            for(i=a;i<=b;i++)
                ar[i]+=k;
        }
        int hi=ar[0];
        for(i=1;i<n;i++)
            if(ar[i]>hi)
                hi = ar[i];
        cout<<hi<<endl;
    }
}
