#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s,r;
        cin>>s>>r;
        int n=s.length();
        int hash[n]= {0};
        for(int i=0; i<n; i++)
        {
            hash[i]+=(s[i]!=r[i]);
        }
        vector<int> v;
        int count=0;
        bool beg=0,one=1;
        for(int i=0; i<n; i++)
        {
            if(hash[i]==1)
            {
                if(!one)
                {
                    v.push_back(count);
                    count=0;
                }
                count++;
                one=1;
                beg=1;
            }
            if(beg)
            {
                if(hash[i]==0)
                {
                    if(one)
                    {
                        v.push_back(count);
                        count=0;
                    }
                    count++;
                    one=0;
                }
            }
        }
        if(one)
            v.push_back(count);
        ll k=0,l=0;
        for(int i=0; i<v.size()-2; i+=2)
        {
            l+=v[i];
            k++;
        }
        k=k*l;

        cout<<k<<"\n";
    }
    return 0;
}
