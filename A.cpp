#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n+2],m=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            m+=ar[i];
        }
        if(m==0)
            cout<<"NO"<<endl;
        else
        {
            sort(ar,ar+n);
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                if(sum<0)
                    cout<<ar[i]<<" ";
                else
                    cout<<ar[n-1-i]<<" ";

            }
            cout<<endl;
        }
    }
    return 0;
}
