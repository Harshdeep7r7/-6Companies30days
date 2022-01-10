 bool isvalid(int i,int j,int m,int n)
    {
        if(i<0||i>=m||j<0||j>=n)
            return false;
        return true;
    }

    pair<int,int> p[4]={{0,1},{0,-1},{1,0},{-1,0}};

    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        queue<pair<int,int>> q;
        int f=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            { if(grid[i][j]==2)
                    q.push({i,j});
                else if(grid[i][j]==1)
                    f++;
            }
        }
        int min=0;

        while(!q.empty())
        {

            int size=q.size();
            int count=0;

            while(size--)
            {
                pair<int,int> temp=q.top();
                q.pop();


                for(int i=0;i<4;i++)
                {
                    int x=p[i].first+temp.first;
                    int y=p[i].second+temp.second;

                    if(isvalid(x,y,m,n)&&grid[x][y]==1)
                    {   count++;
                        f--;
                        grid[x][y]=2;
                        q.push({x,y});
                    }
                }
            }
            if(count)
                min++;
        }
        return !f?min:-1;
    }
