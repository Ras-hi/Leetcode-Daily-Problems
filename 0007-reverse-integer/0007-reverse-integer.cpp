class Solution {
public:
    int reverse(int x) {
        int flag=0;
        if(x<0){
            x=abs(x);
            flag=1;
        }
        int reverse=0;
        while(x>0){
            if (reverse > (INT_MAX - x % 10) / 10) {
            return 0; // Overflow occurred
            }
            reverse= reverse*10+x%10;
            x=x/10;
        }
        if(flag==1){
            return -(reverse);
        }
        else{
            return reverse;
        }
    }
};