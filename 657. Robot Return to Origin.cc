class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;

        int length = moves.length();

        for (int i = 0; i < length; ++i){
            if (moves[i] == 'U'){
                ++y;
            } else if (moves[i] == 'D') {
                --y;
            } else if (moves[i] == 'L') {
                --x;
            } else if (moves[i] == 'R') {
                ++x;
            }   
        }

        return x == 0 && y == 0;
    }
};