class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, maxLen = 1;

        for(int mid=0;mid<n;mid++){
            int lft=mid,rgt=mid;
            while(lft>=0&&rgt<n&&s[lft]==s[rgt]){
                if(rgt-lft+1>maxLen){
                    start=lft;
                    maxLen=rgt-lft+1;
                }
                lft--;
                rgt++;
            }   
            lft=mid;
            rgt=mid+1;
            while(lft>=0&&rgt<n&&s[lft]==s[rgt]){
                if(rgt-lft+1>maxLen){
                    start=lft;
                    maxLen=rgt-lft+1;
                }
                lft--;
                rgt++;
            }
        }

        return s.substr(start,maxLen);
    }
};
