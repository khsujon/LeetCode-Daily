//Day-1(01/12/2024)
//1346. Check If N and Its Double Exist
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(i!=j&&arr[i]==2*arr[j]){
                    return true;
                }
            }
        }

        return false;
    }
};