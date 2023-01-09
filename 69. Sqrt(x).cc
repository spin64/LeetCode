class Solution {
public:
    int mySqrt(int x) { 
        long i = 0;

        while (true){
            if (i == 46341){
                return 46341;
            }

            if (i*i <= x && x < (i+1)*(i+1)){
                return i;
            }
            ++i;
            
        }
    }
};