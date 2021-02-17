#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;
bool comp(string a,string b)
{
    return a<b;
}
vector<string> sorted(vector<string> a)
{
    sort(a.begin(),a.end(),comp);
    return a;
}
int main()
{
    string st;
    int i, a, t = 4, c=0;
    cin>>st>>a;
    cin.ignore();
    string st1;
    getline(cin,st1);
    vector<string> names;
    istringstream iss(st1);
    while(t--)
    {
        string temp;
        iss>>temp;
        names.push_back(temp);
    }names.push_back(st);
    names = sorted(names);
    for(i = 0 ; i < 5 ; i++){
        if(names[i]!=st)
            c++;
        else
            break;
    }
    int time = (c+1)*20;
    cout<<endl<<time;
}
