vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here

        vector<vector<string>> sol;

        map<vector<int>,vector<string>> mp;

        for(auto x:string_list)
        {
            vector<int> m(256,0);
            for(auto y:x)
            m[y]++;

            mp[m].push_back(x);
        }

        for(auto x:mp)
        sol.push_back(x.second);

        return sol;

    }
