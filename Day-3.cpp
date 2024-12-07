//Day-3(03/12/2024)
//2109. Adding Spaces to a String
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int j=0;
        for(int i=0;i<s.size();i++){
          
            if(j<spaces.size()&&i==spaces[j]){
                ans+=" ";
                j++;
            }
              ans+=s[i];
        }
        return ans;
    }
    
};