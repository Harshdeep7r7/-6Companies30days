string printMinNumberForPattern(string S){
        // code here
        int n=S.length();
        int ans=1;
        int p=10;


        for(int i=0;i<n;i++)
        {
             if(S[i]=='I')
             {
                 ans=ans*10+(i+2);
                 p=10;
             }
             else
             {
                 int r=ans%p;
                 ans=(ans/p)*10+(i+2);
                 ans=ans*p+r;
                 p*=10;
             }
        }

        return to_string(ans);
    }
