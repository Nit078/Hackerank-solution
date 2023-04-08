class Solution {
public:
    bool isPalindrome(int x) {
        
        int num=x;
        int ans=0;
        if(x<0){
            return false;
        }
         
        while(num!=0){
            int rem = num%10;
             num=num/10;
             if(ans >= INT_MAX/10  || ans <= INT_MIN/10){
                return 0;
            }
        ans =  ans*10 + rem;
           

            
        }
        if(ans==x){
            return true;
        }
        else{
            return false;
        }
    }
};
