#include<bits/stdc++.h>
using namespace std;

#define ios             ios_base::sync_with_stdio(0);
#define YES             cout<<"YES"<<endl
#define NO              cout<<"NO"<<endl
#define sin(s)	        getline(cin,s)
#define ll              long long
#define ull             unsigned long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    clock_t clk = clock();
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m=0;
        cin>>n;
        string s[n+2];
        for(ll i=0; i<n; i++)
        {
            cin>>s[i];
        }
        for(ll i=0; i<n-1; i++)
        {
            for(ll j=0; j<n-1; j++)
            {
                if(s[i][j]=='1' && (s[i+1][j]!='1' && s[i][j+1]!='1'))
                    m=1;
            }
        }
        if(m==1)
            NO;
        else
            YES;

    }
    clk = clock() - clk;
    cerr << "Time Elapsed: " << fixed << setprecision(8) << ((long double)clk)/CLOCKS_PER_SEC << "\n";
    return 0;
}
