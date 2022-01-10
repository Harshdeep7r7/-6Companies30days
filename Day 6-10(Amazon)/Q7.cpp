string FirstNonRepeating(string A){
		    // Code here

		    int n=A.length();
		    int freq[26]={0};

		    queue<int> q;
		    string sol="";
		    for(int i=0;i<n;i++)
		    {
		         freq[A[i]-'a']++;

		         if(freq[A[i]-'a']==1)
		         q.push(A[i]);

		         while(!q.empty()&&freq[q.front()-'a']!=1)
		         q.pop();


		        if(q.empty())
		        sol.push_back('#');
		        else
		        sol.push_back(q.front());
		    }

		    return sol;
		}
