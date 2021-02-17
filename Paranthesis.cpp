#include<iostream>
#include<stack>
#include<string>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    std::string st;
    std::stack<char> s;
    cin>>st;
    for(int i = 0 ; i < st.size() ; i++){
        switch(st[i])
        {
        case '}':
            if(s.top() == '{')
                s.pop();
            break;
        case ')':
            if(s.top() == '(')
                s.pop();
            break;
        case ']':
            if(s.top() == '[')
                s.pop();
            break;
        default: s.push(st[i]);
        }
    }cout<<s.top();
    if(s.top() != '{'||s.top() != '('||s.top() != '['||s.top() != '}'||s.top() != ')'||s.top() != ']'||s.size()==0)
        cout<<"\nBalanced.";
    else
        cout<<"\nNot balanced.";
}
