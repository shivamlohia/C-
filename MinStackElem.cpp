#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> st;
    int minEle, temp;
    for(int i = 0 ; i < 5 ; i++)
    {
        cin>>temp;
        if(st.size() == 0){
            st.push(temp);
            minEle = temp;
        }else{
            if(temp>=minEle)
                st.push(temp);
            else if(temp < minEle){
                st.push(2*temp - minEle);
                minEle = temp;
            }
        }
        cout<<"MinEle in stack: "<<minEle<<endl;
    }for(int i = 0 ; i < 5 ; i++)
    {
            if(st.top()>=minEle)
                st.pop();
            else if(st.top()<minEle)
            {
                minEle = 2 * minEle - st.top();
                st.pop();
            }
            cout<<"Popped: "<<i+1<<" times. MinEle in stack: "<<minEle<<endl;
    }
}
