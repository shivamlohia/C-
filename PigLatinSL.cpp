#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main()
{
    int i, c = 1;
    string st;
    getline(cin, st);
    istringstream iss(st);
    for(i = 0 ; i < st.size() ; i++ )
        if(st[i]==' ')
            c++;
    vector<string> words;
    int t = c;
    while(c--){
        string sub;
        iss>>sub;
        words.push_back(sub);
        for(i = 1 ; i < sub.size() ; i++)
            cout<<sub[i];
        if(c!=0)
            cout<<sub[0]<<"ay ";
        else
            cout<<sub[0]<<"ay.";
    }for(i = 0 ; i<t ; i++)
        cout<<words[i]<<endl;
}
