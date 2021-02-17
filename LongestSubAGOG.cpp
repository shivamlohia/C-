#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i;
        cin>>n;
        int a[n], c=0, temp=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>=0){
                c++;
                //cout<<c<<endl;
            }
            if(a[i]<0||i==n-1){
                cout<<a[i]<<endl;
                if(temp<=c)
                    temp=c;
                c=0;
            }
        }
        cout<<temp<<endl;
    }
}
