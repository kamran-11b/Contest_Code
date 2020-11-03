#include<bits/stdc++.h>
using namespace std;

string reverse_string(string s)
{
    int len = s.size();
    for(int i=0; i<len/2; i++)
    {
        char c= s[i];
        s[i] = s[len-i-1];
        s[len-i-1]=c;
    }
    return s;
}

int main()
{
    string s;
    cin>>s;
    cout<<reverse_string(s)<<endl;
}
