 int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {


        int count=0;

        int start=0;
        long long prod=1;
        for(int i=0;i<n;i++)
        {
                prod*=a[i];
                while(start<=i&&prod>=k)
                {
                  prod/=a[start];
                  start++;
                }
                count+=(i-start+1);
        }

        return count;
    }
