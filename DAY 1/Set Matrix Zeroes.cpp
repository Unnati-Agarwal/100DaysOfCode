class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>>vp;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                    vp.push_back({i,j});
                    
            }
        }
        for(int i=0;i<vp.size();i++)
        {
            int x=vp[i][0];
            for(int j=0;j<c;j++)
                matrix[x][j]=0;
            int y=vp[i][1];
            for(int j=0;j<r;j++)
                matrix[j][y]=0;
        }
    }
};
