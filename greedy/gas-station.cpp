class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;   // Total gas - cost for all stations
        int tank = 0;    // Current gas in tank
        int start = 0;   // Candidate starting station

        for (int i = 0; i < gas.size(); i++) {
            int diff = gas[i] - cost[i];

            total += diff;
            tank += diff;

            // Cannot reach the next station
            if (tank < 0) {
                start = i + 1; // Try next station as start
                tank = 0;      // Reset tank
            }
        }

        return (total >= 0) ? start : -1;
    }
};