#include<iostream>
#include<string>

using namespace std;

int main()
{
    int j = 0;
    string str,s;
    getline(cin,str);
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i]=='T'||str[i]=='$'||str[i]=='G'){
            s[j]=str[i];
            j++;
        }
    }
    if((s[0]=='$'&&s[1]=='T')||(s[j-1]=='$'&&s[j-2]=='T'))
    {
        cout<<"ALARM";
        return 0;
    }
    for(int i = 1; i < j ; i++)
    {
        if(s[i]=='$')
        {
            if(s[i-1]=='T'||s[i+1]=='T'){
                cout<<"ALARM";
                return 0;
            }
        }
    }cout<<"quiet";
}
