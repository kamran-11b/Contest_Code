#include<bits/stdc++.h>
using namespace std;

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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size(),x=0;
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1] || (i>1 && s[i]==s[i-2]))
            {
                s[i]='#';
                x++;
            }
        }
        cout<<x<<endl;
    }
    clk = clock() - clk;
    cerr << "Time Elapsed: " << fixed << setprecision(8) << ((long double)clk)/CLOCKS_PER_SEC << "\n";
    return 0;
}
