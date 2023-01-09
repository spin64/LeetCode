class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total = 0;
        int length = timeSeries.size();
        int start = timeSeries[0];
        int end = start + duration - 1;

        for (int i = 1; i < length; ++i){
            if (timeSeries[i] > end){
                total += duration;
            } else {
                total += (timeSeries[i] - start);
            }

            start = timeSeries[i];
            end = start + duration - 1;
            
        }
        total += duration;
        return total;
    }
};