
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
   
   
  bool isAnagram(string a, string b){
        int A[26] = {0};
        int B[26] = {0};
        int len1=a.length();
        int len2=b.length();
        int flag = 0;
        if(len1 != len2)
            return false;
        for(int i=0;i<len1;i++){
            A[a[i]-'a']++;
            B[b[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(A[i]!=B[i]){
                flag = 1;
                break;
            }
        }
       
        if(flag == 1)
          return false;
          
        else
           return true;
       
        
    }

};



int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}