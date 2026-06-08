class Solution {
public:
    bool isAnagram(string s, string t) {


        map<char,int> m1,m2;
        for(auto i :s){
            if(m1.find(i)==m1.end()){
                m1[i]=1;
            }
            else{
                m1[i]++;
            }
        }
        for(auto i:t){
            if(m2.find(i)==m2.end()){
                m2[i]=1;
            }
            else{
                m2[i]++;
            }
        }

        

        if(m1==m2)return true;
        else return false;    


        
    }
};
