string paran(int i,int j,vector<vector<int>> &brac)
    {
        if(i==j)
         {
             string s="";
             return s+char('A'+i);
         }

         int k=brac[i][j];

         return '('+paran(i,k-1,brac)+paran(k,j,brac)+')';
    }
    string matrixChainOrder(int p[], int n){
        // code here

        int dp[n-1][n-1]={0};
        vector<vector<int>> brac(n-1,vector<int>(n-1));

        for(int L=2;L<=n-1;L++)
        {
            for(int i=0;i<=n-L-1;i++)
            {
                int j=i+L-1;
                dp[i][j]=INT_MAX;
                int q;
                for(int k=i+1;k<=j;k++)
                {
                      if(dp[i][j]>dp[i][k-1]+dp[k][j]+p[i]*p[k]*p[j+1])
                      {   q=k;
                          dp[i][j]=dp[i][k-1]+dp[k][j]+p[i]*p[k]*p[j+1];
                      }
                }
                brac[i][j]=q;
            }
        }


        return paran(0,n-2,brac);
    }
