#include<iostream>
#include<vector>

using namespace std;

int main(){
    int temp;
    for(int i=1;i<a.size();i+=2){
        if(a[i]<a[i-1]){
            temp = a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
        }
    }
}
