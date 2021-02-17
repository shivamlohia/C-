#include<iostream>
#include<string>

using namespace std;

int main()
{
    string st, str;
    char t;
    cin>>st;
    int i, j, n = st.size(), a[st.size()], c = 0, k=0,temp;
    for(i = 0 ; i < n ; i++)
    {
        c=1;
        if(st[i]=='0')
            continue;
        for(j = i+1 ; j < n ; j++){
            if(st[i] == st[j])
            {
                st[j] = '0';
                c++;
            }
        }a[k] = c;
        str[k] = st[i];
        k++;
    }
    for(i = 0 ; i < k-1 ; i++)
        for(j = 0 ; j < k-i-1 ; j++)
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                t = str[j];
                str[j] = str[j+1];
                str[j+1] = t;
            }
    for(i =0;i<k-1;i++)
    {
        for(j = 0 ; j < k-i-1 ; j++)
            if(a[j]==a[i+1]&&str[j]>str[j+1]){
                t = str[i];
                str[i] = str[i+1];
                str[i+1] = t;
        }
    }
    for(i=k-1;i>=0;i--)
        cout<<str[i]<<" "<<a[i]<<endl;
}
