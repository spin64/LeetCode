class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int highest = 0;
        int length = accounts.size();
        for (int i = 0; i < length; i++){
            int sum = 0;
            int length2 = accounts[i].size();
            for (int j = 0; j < length2; j++){
                sum += accounts[i][j];
            }
            if (sum > highest){
                highest = sum;
            }
        }

        return highest;
    }
};