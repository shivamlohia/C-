#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i, temp;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        if(n==2){
            cout<<(a[0]+a[1])/2<<endl;
        }
        for(i=0;i<n-2;i++){
            if(a[i+1]-(a[i]+a[i+1])/2==a[i+2]-a[i+1]){
                cout<<(a[i]+a[i+1])/2<<endl;
                break;
            }
            else if(i==n-3)
                cout<<(a[n-1]+a[n-2])/2<<endl;
        }
    }
}
