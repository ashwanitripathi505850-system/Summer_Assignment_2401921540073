class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string s="";
        int n=strs.size();
        
        sort(strs.begin(),strs.end());
        string fst=strs[0],lst=strs[n-1];

        for(int i=0;i<min(fst.size(),lst.size());i++){
            if(fst[i]!=lst[i]){
                return s;
            }
            s+=fst[i];
        }

        return s;
    }
};
