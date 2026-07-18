class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int s=strs.size();
      for(int i=0;i<strs[0].length();i++){
        for(int j=1;j<s;j++){
            if(strs[j].length()<=i || strs[j][i]!=strs[0][i]){
                return ans;
            }
        }
         ans+=strs[0][i];
      }
     
return ans;
    }
};