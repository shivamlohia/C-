#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long b;
        cin>>n>>b;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(b==a[i])
                b=b*2;
        }
        cout<<b<<endl;
    }
}
