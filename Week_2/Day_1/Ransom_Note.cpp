class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        map<char,int> m1;
        map<char,int> m2;

        for(int i=0;i<n;i++){
            m1[ransomNote[i]]++;
        }
        for(int i=0;i<m;i++){
            m2[magazine[i]]++;
        }

        for(auto it:m1){
            if(it.second>m2[it.first]){
                return false;
            }
        }
        return true;

    }
};
