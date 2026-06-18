vector<int> NSER(vector<int> &arr){
    stack<int> st;
    vector<int> v;
    int n=arr.size();

    for(int i=n-1;i>=0;i--){
        while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();

        if(st.size()==0) v.push_back(n);
        else v.push_back(st.top());

        st.push(i);
    }
    reverse(v.begin(),v.end());
    return v;
    
}

vector<int>NSEL(vector<int> &arr){
    stack<int> st;
    vector<int> v;
    int n=arr.size();

    for(int i=0;i<n;i++){
        while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();

        if(st.size()==0) v.push_back(-1);
        else v.push_back(st.top());

        st.push(i);
    }
    
    return v;
}


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    vector<int> r = NSER(heights) ;
    vector<int> l = NSEL(heights) ;

    int res=INT_MIN;

    for(int i = 0; i < heights.size(); i++){
        int width=r[i]-l[i]-1;

            res=max(res,width*heights[i]);   
        }

    return res;



        
    }
};
