#include<iostream>

using namespace std;

int main(){
    int r, c, i, j, temp;
    cin>>r>>c;
    int arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>arr[i][j];
    for(i=0;i<r;i++){
        temp=a[i][0];
        a[i][0]=a[i][c-1];
        a[i][c-1]=temp;
    }
}
