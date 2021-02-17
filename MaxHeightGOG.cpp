#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, temp = 0;
        cin>>n;
        int a[2*n], c=0;
        for(int i=0;i<2*n;i++)
            cin>>a[i];
        for(int i = 0;i<2*n-1;i+=2){
            temp = a[i]*12 + a[i+1];
            if(temp>c)
                c = temp;
        }
        cout<<c<<endl;
    }
}
