class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
int ans=0;
        for(int num:nums){
           st.insert(num);
           
        }
        for(int num:nums){
            if(st.find(num-1)!=st.end()){
                continue;
            }
            int curr=num;
            int length=1;

            while(st.find(curr+1)!=st.end()){
                curr++;
                length++;
            }
            ans=max(ans,length);
        }
        return ans;
    }
};
