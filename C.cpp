#include <iostream>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#include <cmath>

using namespace std;

#define lint long long
#define unl unsigned long long


int Dsum(int n)
{
    int a,b=0;
    while(n!=0)
    {
        a=n%10;
        b+=a;
        n=n/10;
    }
    return b;
}
vector<int> pos[27];

void solve(){
    string s; cin >> s;
    int n = s.size();
    for(int i = 0; i < 26; i++)
        pos[i].clear();
    for(int i = 0; i < n; i++){
        pos[(int)s[i] - 'a'].push_back(i);
    }
    int l, ns, ans = 0;
    for(int i = 0; i < 26; i++){
        if(pos[i].size() < 2)
            continue;
        l = pos[i][0];
        ns = pos[i].size();
        for(int j = 1; j < ns; j++){
            if(pos[i][j] - l > 2){
                l = pos[i][j];
            }
            else{
                ans++;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}
