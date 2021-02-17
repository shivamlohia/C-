#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        string str;
        cin>> str;
        stack<char> sc;
        stack<int> si;
        for(int i = 0 ; i < str.size() ; i++)
        {
           if(str[i] == '(')
           {
               sc.push(str[i]);
               si.push(sc.size());
               cout<<sc.size()<<" ";
           }
           else if(str[i] == ')')
           {
               cout<<si.top()<<" ";
               si.pop();
           }
        }cout<<endl;
    }
}
