#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int i=0;
        while(m>=i){
            m = m - i;
            if(i==n)
                i=0;
            i++;
        }
        cout<<m<<endl;
    }
}
