#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i, j, a[3][3], r;
        for(i = 0 ; i < 3 ; i++)
            for(j = 0 ; j < 3 ; j++)
                cin>>a[i][j];
        if()
        double k0, k1, k2;
        k0 = (a[0][0]-a[0][2])/a[0][1];
        k1 = (a[1][0]-a[1][2])/a[1][1];
        k2 = (a[2][0]-a[2][2])/a[2][1];
        if(k0==k1 && k1==k2)
            r = 2;
        else
            r = 3;
    }
}
