string colName (long long int n)
    {
        // your code here
        string ans="";
        while(n)
        {
            int r=n%26;
            n/=26;
            if(!r)
            { ans='Z'+ans;
               n--;
            }
            else
            ans=char('A'+r-1)+ans;
        }

        return ans;
    }
