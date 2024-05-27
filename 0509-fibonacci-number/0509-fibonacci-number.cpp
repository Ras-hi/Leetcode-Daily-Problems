class Solution {
public:
    int fib(int n) {
//         int zero = 0;
//        int first = 1;


//        if( n == 0){
//            return 0;
//        }
//        if(n == 1){
//            return 1;
//        }

//        int num;
//        int count = 2;
//        for(count ; count <= n ; count++){

//            num = zero + first ;
//            zero = first;
//            first = num;

//        }
//         return num;
        int f1=0;
        int f2=1;
        if(n==0) return 0;
        if(n==1) return 1;
        int f3 ;
        for(int i=2;i<=n;i++){
            f3 =f1+f2;
            f1=f2;
            f2=f3;
        }
        return f3;
    }
};