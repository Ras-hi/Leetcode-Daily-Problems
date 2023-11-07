class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
         vector<double> current;
        int size = dist.size();
        for(int i = 0 ; i < size ; i++){
            double value = dist[i] * 1.0 / speed[i] * 1.0;
            current.push_back(value);
        }
        sort(current.begin(), current.end());
        int answer = 0;
        for(int i = 0 ; i < size ; i++){
            if(i != 0 and i >= current[i]) break;
            answer += 1;
        }
        return answer;
    }
};