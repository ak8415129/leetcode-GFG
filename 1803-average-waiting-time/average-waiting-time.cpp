class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double total_waiting_time = 0;
        int current_time = 0;

        for (int i=0; i<customers.size(); i++) {
            int arrival = customers[i][0];
            int service = customers[i][1];
            if (current_time < arrival) {
                current_time = arrival;
            }
            int waiting_time = current_time - arrival + service;
            total_waiting_time += waiting_time;
            current_time += service;
        }

        return total_waiting_time / customers.size();
    }
};