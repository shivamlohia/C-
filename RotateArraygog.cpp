#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int t;
    cin>>t;
    int n[t], c[100], k=0;
    for(int f=0;f<t;f++){
        int i,d;
        cin>>n[f];
        cin>>d;
        int a[n[f]],b[n[f]];
        for(i=0;i<n[f];i++){
            cin>>a[i];
            if(i-d>=0)
                b[i-d]=a[i];
            else
                b[n[f]-d+i]=a[i];
        }
        for(i=0;i<n[f];i++,k++)
            c[k]=b[i];
    }
    k=0;
    for(int f=0;f<t;f++){
        for(int i=0;i<n[f];i++,k++)
            cout<<c[k]<<" ";
        cout<<endl;
    }
}
