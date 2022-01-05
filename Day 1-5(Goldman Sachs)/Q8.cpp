int m=1e9+7;

		int CountWays(string str){
		    // Code here

		    int n=str.length();
		    int dp[n+1]={0};
		    dp[n]=1;

		     for(int i=n-1;i>=0;i--)
		     {
		         if(str[i]=='0')
		         dp[i]=0;

		         else
		         {
		             if(i+1==n||str[i+1]!='0')
		             dp[i]=(dp[i]+dp[i+1])%m;

		             if((i+1<n)&&(str[i]=='1'||((str[i]=='2')&&str[i+1]<='6')))
		             dp[i]=(dp[i]+dp[i+2])%m;
		         }
		     }

		     return dp[0];

		}
