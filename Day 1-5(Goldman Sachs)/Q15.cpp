 bool canPair(vector<int> nums, int k) {
        // Code here.

        int n=nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            mp[nums[i]%k]++;
        }

        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]%k]!=0)
            {
                mp[nums[i]%k]--;
                int r=k-nums[i]%k;
                if(mp[r%k]==0)
                return false;
                else
                mp[r%k]--;
            }
        }
        return true;
    }
