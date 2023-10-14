class Solution {
    public boolean isPalindrome(int x) {
       
        int mod,res=0,
        int temp=x;
    
        while(x>0){
            mod = x%10;
            res = res*10+mod;
            x=x/10;
        }
        
        if(temp ==res){
            return true;
        }
        else{
           return false;
        }
        
    }
}
