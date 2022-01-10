vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here

        deque<int> q;

        for(int i=0;i<k;i++)
        {
            while(!q.empty()&&arr[i]>=arr[q.back()])
            q.pop_back();

            q.push_back(i);
        }

        vector<int> sol;
        sol.push_back(arr[q.front()]);

        for(int i=k;i<n;i++)
        {
            if(q.front()==i-k)
            q.pop_front();

            while(!q.empty()&&arr[i]>=arr[q.back()])
            q.pop_back();

            q.push_back(i);

            sol.push_back(arr[q.front()]);
        }

        return sol;

    }
