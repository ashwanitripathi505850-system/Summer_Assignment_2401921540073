class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int lft=0,rgt=matrix[0].size()-1;
        int top=0,botm=matrix.size()-1;

        while(lft<=rgt&&top<=botm){
            for(int i=lft;i<=rgt;i++)v.push_back(matrix[top][i]);
            top++;

            for(int j=top;j<=botm;j++)v.push_back(matrix[j][rgt]);
            rgt--;

            if(top<=botm) {
                for(int i=rgt;i>=lft;i--)v.push_back(matrix[botm][i]);
                botm--;
            }

            if(lft<=rgt) {
                for(int j=botm;j>=top;j--)v.push_back(matrix[j][lft]);
                lft++;
            }
        }
        return v;
    }
};
