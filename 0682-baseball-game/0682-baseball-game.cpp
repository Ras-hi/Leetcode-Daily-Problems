class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>validpoints;
        for(const string& op: operations){
            if(op=="C"){
                if(!validpoints.empty()){//if the stack is not empty then ..
                    validpoints.pop();
                }
            }
            else if(op=="D"){
                if(!validpoints.empty()){
                    int prevScore=validpoints.top();
                    validpoints.push(2*prevScore);
                }
            }
            else if(op=="+"){
                if(validpoints.size()>=2){
                    int lastScore=validpoints.top();
                    validpoints.pop();
                    int seclastScore=validpoints.top();
                    validpoints.push(lastScore);
                    validpoints.push(lastScore+seclastScore);
                }
            }
            else{
                int score=stoi(op);
                validpoints.push(score);
            }
        }
        int tsum=0;
        while(!validpoints.empty()){
            tsum+=validpoints.top();
            validpoints.pop();
        }
        return tsum;
    }
};