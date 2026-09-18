class Solution {
public:
    int totalNumbers(vector<int>& d) {
        set<int> s;

        for (int i = 0; i < d.size(); i++) {
            for (int j = 0; j < d.size(); j++) {
                for (int k = 0; k < d.size(); k++) {

                    if (i == j || i == k || j == k)
                        continue;

                    if (d[i] == 0)
                        continue;

                    if (d[k] % 2 != 0)
                        continue;

                    int num = d[i] * 100 + d[j] * 10 + d[k];

                    s.insert(num);
                }
            }
        }

        return s.size();
    }
};