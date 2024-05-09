class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long int a = 0;
        long long int i = 0;

        for (i = 0; i < k; i++) {
            if ((happiness[i] - i) >= 0) {
                a += (happiness[i] - i);
            } else {
                happiness[i] = 0;
            }

            // t += 1;
        }
        return a;
    }
};