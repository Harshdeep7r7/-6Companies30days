 int minSubArrayLen(int target, vector<int>& nums) {


        int min_len=INT_MAX;
        int start=0;
        int sum=0;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];

            if(sum>=target)
            {
                while(start<=i&&sum>=target)
                {
                    sum-=nums[start];
                    start++;
                }
                min_len=min(min_len,i-start+2);
            }
        }
        return min_len==INT_MAX?0:min_len;

    }
