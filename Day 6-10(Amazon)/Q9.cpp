int isValid(vector<vector<int>> mat){
        // code here
        
        int r[9][9], c[9][9], s[3][3][9];
        memset(r, 0, sizeof(r));
        memset(c, 0, sizeof(c));
        memset(s, 0, sizeof(s));
        int n;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (mat[i][j] > 0 && mat[i][j] <= 9) {
                    n= mat[i][j] - 1;
                    if (r[i][n]) 
                        return 0;
                    r[i][n] = 1;
                    if (c[j][n]) 
                        return 0;
                    c[j][n] = 1;
            
                    if (s[i / 3][j / 3][n]) 
                        return 0;
                    s[i / 3][j / 3][n] = 1;
                }
            }
        }
        return 1;
    }
