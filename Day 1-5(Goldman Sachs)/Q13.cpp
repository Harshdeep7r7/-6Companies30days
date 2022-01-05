string answer(string &s,int &i)
    {
        string ans="";
        int n=0;
        while(i<s.length())
        {
            if(s[i]>='0' && s[i]<='9')
            {
                n=(n*10)+s[i]-'0';
            }
            else if(s[i]=='[')
            {
                string temp=answer(s,++i);
                while(n>0)
                {
                    ans+=temp;
                    n--;
                }
            }
            else if(s[i]==']')
            {
                return ans;
            }
            else
            {
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
    string decodedString(string s)
    {
        int i=0;
        return answer(s,i);
    }
