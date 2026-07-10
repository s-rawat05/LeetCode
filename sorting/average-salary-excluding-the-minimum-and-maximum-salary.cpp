class Solution {
public:
    double average(vector<int>& salary) {
        int minSalary = INT_MAX;
        int maxSalary = INT_MIN;
        int sum = 0;

        for (int s : salary) {
            sum += s;
            minSalary = min(minSalary, s);
            maxSalary = max(maxSalary, s);
        }

        return (double)(sum - minSalary - maxSalary) / (salary.size() - 2);
    }
};