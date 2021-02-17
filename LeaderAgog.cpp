#include<iostream>

using namespace std;
int checkT(int t){
    if(t<1)
        return 0;
    int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++){
            int c=0;
            if(i==(n-1)){
                cout<<a[i]<<endl;
                break;
            }
            for(int j=i+1;j<n;j++){
                if(a[i]>=a[j])
                    c++;
            }
            if(c==n-i-1)
                cout<<a[i]<<" ";
       }
       t--;
       checkT(t);
}
int main(){
    int t;
    cin>>t;
    checkT(t);

}
