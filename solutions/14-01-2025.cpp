class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        
        for (int h = 0; h < 12; h++) {
            for (int m = 0; m < 60; m++) {
                int hour = bitset<4>(h).count();
                int minute = bitset<6>(m).count();

                if (hour + minute == num) {
                    res.push_back(to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m));
                }
            }
        }

        return res;
    }
};
