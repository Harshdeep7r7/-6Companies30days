#include<bits/stdc++.h>
using namespace std;

string amendSentence (string s) {
        string ans;
        int n=s.size(),start=0,end=1;
        while(end<=n){
            if((isupper(s[end]))||end==n){
                string st=s.substr(start,end-start);
                st[0]=tolower(st[0]);
                ans+=st;
                ans.push_back(' ');
                start=end;
            }
            end++;
        }
        ans.pop_back();
        return ans;
    }


int main()
{
    string s;
    cin>>s;
    cout<<amendSentence(s);
    return 0;
}