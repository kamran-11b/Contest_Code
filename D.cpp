#include<bits/stdc++.h>
using namespace std;

int fun( char *s, char *sub)
{
    if(s=='\0')
        return 0;
    else if(s==sub)
        fun(s+1,sub+1);
    else
    {
        printf("%s",s);
        fun(s+1,sub);
    }

}

int main()
{
    int i=0,n=0;
    while(i!=n){
        if(i==3)
            continue;
        printf("%d ",i);
        i++;
    }
}
