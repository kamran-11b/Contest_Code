#include <bits/stdc++.h>
using namespace std;

#define Pi               2*acos(0.0)
#define ms(a,b)          memset(a, b, sizeof(a))
#define EPS              10E-10
#define MOD              1000000007
#define CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define sf(a)            scanf("%d",&a)
#define sfl(a)           scanf("%lld",&a)
#define sff(a,b)         scanf("%d %d",&a,&b)
#define sffl(a,b)        scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define PRINT_CASE       printf("Case %d: ",z)
#define CASE_PRINT       cout<<"Case "<<z<<": "
#define all(a)           a.begin(),a.end()
#define intlim           2147483648
#define infinity         (1<<28)
#define ull              unsigned long long
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))



int func(string s)
{
    if(s=="zero") {
        return 0;
    } else if(s=="one") {
        return 1;
    } else if(s=="two") {
        return 2;
    } else if(s=="three") {
        return 3;
    } else if(s=="four") {
        return 4;
    } else if(s=="five") {
        return 5;
    } else if(s=="six") {
        return 6;
    } else if(s=="seven") {
        return 7;
    } else if(s=="eight") {
        return 8;
    } else if(s=="nine") {
        return 9;
    } else if(s=="ten") {
        return 10;
    } else if(s=="eleven") {
        return 11;
    } else if(s=="twelve") {
        return 12;
    } else if(s=="thirteen") {
        return 13;
    } else if(s=="fourteen") {
        return 14;
    } else if(s=="fifteen") {
        return 15;
    } else if(s=="sixteen") {
        return 16;
    } else if(s=="seventeen") {
        return 17;
    } else if(s=="eighteen") {
        return 18;
    } else if(s=="nineteen") {
        return 19;
    } else if(s=="twenty") {
        return 20;
    } else if(s=="thirty") {
        return 30;
    } else if(s=="forty") {
        return 40;
    } else if(s=="fifty") {
        return 50;
    } else if(s=="sixty") {
        return 60;
    } else if(s=="seventy") {
        return 70;
    } else if(s=="eighty") {
        return 80;
    } else if(s=="ninety") {
        return 90;
    }
}
int func2(string s)
{
    if(s=="twenty") {
        return 2;
    } else if(s=="thirty") {
        return 3;
    } else if(s=="forty") {
        return 4;
    } else if(s=="fifty") {
        return 5;
    } else if(s=="sixty") {
        return 6;
    } else if(s=="seventy") {
        return 7;
    } else if(s=="eighty") {
        return 8;
    } else if(s=="ninety") {
        return 9;
    }
}
int main()
{

    int t;
    cin>>t;
    cin.ignore();
    while(t--) {
        string a,b,c="";
        getline(cin,a);
        stringstream ss(a);
        int x=0;
        while(ss>>b) {
            if(b=="thousand" || b=="hundred") {
                c.pop_back();
                int p=func(c);
                if(b=="thousand") {
                    x+=p*1000;
                } else {
                    x+=p*100;
                }
                c.clear();
            } else {
                c+=b+',';
            }
        }
        int cnt=0,j,i;
        for(i=0; i<c.size(); i++) {
            if(c[i]==',') {
                cnt++;
            }
        }
        if(cnt==1) {
            c.pop_back();
            x+=func(c);
        } else if(cnt==2) {
            string s1,s2;
            for(i=0; i<c.size(); i++) {
                if(c[i]==',') {
                    break;
                }
                s1+=c[i];
            }
            for(j=i+1; j<c.size()-1; j++) {
                s2+=c[j];
            }
            x+=func2(s1)*10+func(s2);
        }

        string binary=bitset<32>(x).to_string(),bin="";
        int flag=0;
        for(i=0; i<binary.size(); i++) {
            if(binary[i]=='1') {
                flag=1;
            }
            if(flag!=0) {
                bin+=binary[i];
            }
        }
        string bin2=bin;
        reverse(bin.begin(),bin.end());
        if(bin==bin2) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}
