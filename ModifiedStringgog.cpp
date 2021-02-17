#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

int main(){
    std::string a;
    std::getline(cin, a);
    int c=0;
    for(int i = 2;i<a.size();i++){
        if(a[i]==a[i-1] && a[i]==a[i-2]){
            c++;
            i++;
        }
    }
    cout<<c;
}



