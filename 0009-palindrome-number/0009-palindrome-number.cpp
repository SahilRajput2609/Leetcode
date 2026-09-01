class Solution {
public:
    bool isPalindrome(int x) {
        int revn=0;
        int dup=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            int lastdigit=x%10;
            if(revn > INT_MAX / 10 || revn < INT_MIN / 10) {
                return false;
            }
            revn=(revn*10)+lastdigit;
            x=x/10;
        }
        if(revn==dup){
            return true;
        }
        else{
            return false;
        }
    }
};