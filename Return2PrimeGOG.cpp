#include<iostream>

using namespace std;

bool isPrime(int num)
{
    for(int i = 3 ; i < num ; i+=2)
        if(num%i == 0)
            return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 3 ; i < n ; i++)
            if(isPrime(i))
                if (isPrime(n-i)){
                    cout<<i<<" "<<n-i<<endl;
                    break;
                }
    }
}
