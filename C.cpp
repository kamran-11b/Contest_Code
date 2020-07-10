#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n;
    cin>>n;
    ll ar[n+2];
    for(ll i=0; i<n; i++)
        cin>>ar[i];
    sort(ar,ar+n);
    for(ll i=0; i<n; i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    return 0;
}
