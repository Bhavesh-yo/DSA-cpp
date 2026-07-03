class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int temp=x;
        if(x<0){
            return 0;
        }
        while(x!=0){
        int digit=x%10;
        rev=rev*10+digit;
        x=x/10;
        }
    if (temp==rev){
        return true;
    }
    else{
    return false;
    }
    }
};