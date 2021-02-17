#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n, i, f=0, f1=0;
        cin>>n;
        int a[n];
        a[0] = 2;
        a[1] = 3;
        for(i=2;i<n;i++){
            for(int c = a[i-1] + 1;;c++){
                int c1 = c;
                f=0;
                f1=0;
                while(c1>0){
                    f++;
                    if(c1%10==2||c1%10==3||c1%10==5||c1%10==7){
                        c1=c1/10;
                        f1++;
                        continue;

                    }else
                        break;

                }
                if(f1==f){
                    a[i]=c;
                    break;
                }
            }

        }
        cout<<a[n-1]<<endl;
    }
}
