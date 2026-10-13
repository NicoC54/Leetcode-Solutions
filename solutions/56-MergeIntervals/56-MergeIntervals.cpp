// Last updated: 13/10/2026 16:56:07
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        using Pair = std::pair<int,int>;

        std::priority_queue<Pair,std::vector<Pair>,std::greater<Pair>> pq;
        std::vector<int> interval;
        std::vector<std::vector<int>> corrected_intervals;
        

        if (intervals.empty()){
            return {};
        }

        for (std::vector<int> interval : intervals){
            int start = interval[0];
            int end = interval[1];
            pq.push({start,end});
            }

        while (!pq.empty()){

            auto [start_value_begin,end_value_begin] = pq.top();
            pq.pop();


            if (!pq.empty()){
                auto [start_value_end, end_value_end]= pq.top();
                pq.pop();

                if (start_value_end <= end_value_begin){
                    if (end_value_begin > end_value_end){
                        pq.push({start_value_begin, end_value_begin});
                    }
                    else{
                        pq.push({start_value_begin, end_value_end});
                    }
                    
                }

                else{
                    corrected_intervals.push_back({start_value_begin,end_value_begin});
                    pq.push({start_value_end,end_value_end});
                }

            }
            else{
                corrected_intervals.push_back({start_value_begin,end_value_begin});
            }
        }


        return corrected_intervals;
    }
};