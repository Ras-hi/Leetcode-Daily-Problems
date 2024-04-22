class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> found;
        
        for(auto &de :deadends){
            found.insert(de);
        }
        
        if(found.count("0000") || found.count(target)){
            return -1;
        }
        
        deque<pair<string,int>> q;
        q.push_back({"0000",0});
        found.insert("0000");
        
        while(!q.empty()){
            auto [lock,steps] = q.front();
            q.pop_front();
            
            if(lock == target){
                return steps;
            }
            
            for(int i = 0; i < 4; ++i){
                string temp1 = lock;
                string temp2 = lock;
                temp1[i] = ((temp1[i] - '0') + 1)%10 + '0';
                temp2[i] = ((temp2[i] - '0') + 9)%10 + '0';
                
                if(!found.count(temp1)){
                    found.insert(temp1);
                    q.push_back({temp1,steps + 1});
                }
                
                if(!found.count(temp2)){
                    found.insert(temp2);
                    q.push_back({temp2,steps + 1});
                }
            }
        }
        
        return -1;
    }
};