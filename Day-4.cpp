//Day-4(04/12/2024)
//2825. Make String a Subsequence Using Cyclic Increments
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j=0;

        for(int i=0;i<str1.size();i++){
           if(j<str2.size() && (str1[i] == str2[j] || str1[i] + 1 == str2[j] || (str1[i] == 'z' && str2[j] == 'a'))){
               
            j++;
           }
        }
        //cout<<j<<endl;
        if(j==str2.size()){
            return true;
           }
        return false;
    }
};