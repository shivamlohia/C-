#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, i,j;
        cin>>n>>k;
        int a[n], b[k];
        for(i =0;i<n;i++)
            a[i]=0;
        for(i = 0;i<k;i++){
            cin>>b[i];
            for(j=b[i]-1;j<n;j++)
                a[j]++;
        }
        for(i =0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
