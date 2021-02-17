#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

class Stack
{
    int top;
    vector<int> st;

public:
    Stack(int n)
    {
        top = -1;
        for(int i = 0 ; i < n ; i++)
            st[i] = -999;
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(top==st.size()-1)
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if(isFull())
            cout<<"Stack overflow.\n";
        else{
            top++;
            st[top] = val;
        }
    }
    int pop()
    {
        if(isEmpty())
            cout<<"Stack underflow.\n";
        else
        {
            int p = st[top];
            st[top] = -999;
            top--;
            return p;
        }
        return -999;
    }
    int peek()
    {
        return st[top];
    }
    int count()
    {
        return top+1;
    }
};
int result(char opr , int a , int b)
{
    switch(opr)
    {
    case '*'://cout<<a<<opr<<b<<endl;
        return a*b;
    case '/'://cout<<a<<opr<<b<<endl;
        return a/b;
    case '+'://cout<<a<<opr<<b<<endl;
        return a+b;
    case '-'://cout<<a<<opr<<b<<endl;
        return b-a;
    }
}
int main()
{
    int test;
    cin>>test;
    cin.get();
    for(int l = 0 ; l < test ; l++)
    {
        string s;
        getline(cin,s);
        //Stack st(s.size());
        stack<int> st;
        //cout<<st.pop();
        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int res = result(s[i] , a , b);
                st.push(res);
            }else
            {
                st.push(s[i] - '0');
            }
        }
        cout<<st.top();
    }
}
