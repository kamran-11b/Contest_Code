#include<bits/stdc++.h>
using namespace std;


/*
   input:  i like this code
   output: i ekil siht edoc
*/
string str_reverse_word(string s)
{
    int b=0;
    for(int i=0; i<=s.size(); i++)
    {
        if(s[i]=='\0' || s[i]==' ')
        {
            reverse(s.begin()+b,s.begin()+i);
            b=i+1;
        }
    }
    return s;
}

/*
   input:  i like this code
   output: code this like i
*/

string reverse_sentence(string s)
{
    reverse(s.begin(),s.end());
    int b=0;
    for(int i=0; i<=s.size(); i++)
    {
        if(s[i]=='\0' || s[i]==' ')
        {
            reverse(s.begin()+b,s.begin()+i);
            b=i+1;
        }
    }
    return s;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<str_reverse_word(s)<<endl;
    cout<<reverse_sentence(s)<<endl;
}
