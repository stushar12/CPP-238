void booleanMatrix(vector<vector<int> > &mat)
    {
       int m=mat.size();
        int n=mat[0].size();
        
        bool row = false, col = false;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    if(i==0)
                        row=true;
                    
                    if(j==0)
                        col=true;
                    
                    mat[i][0]=1;
                    mat[0][j]=1;
                }
            }
        }
        
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(mat[i][0]==1 or mat[0][j]==1)
                {
                    mat[i][j]=1;
                }
            }
        }
        
        
        
        if(col)
        {
            for(int i=0;i<m;i++)
            {
                mat[i][0]=1;
            }
        }
        
        if(row)
        {
            for(int i=0;i<n;i++)
            {
                mat[0][i]=1;
            }
        }
            
        
    }
