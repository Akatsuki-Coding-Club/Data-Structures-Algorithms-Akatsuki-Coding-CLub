 #include<bits/stdc++.h>
 using namespace std;;
class Solution
{
    public:    
    int findSum(string str)
    {
        int sum=0;
        for(int i=0;i<str.length();i++)
        { int cur=0;
        int num=0;
            while(isdigit(str[i+cur]))
            {
                num=num*10+(str[cur+i]-'0');
                cur++;
            }
            sum=sum+num;
            i+=cur;
        }
        return sum;
        
    }
};

    int main()
    {
        Solution solution;
        string str;
        cout<<"Enter a string"<<endl;
        cin>>str;
        int sum=solution.findSum(str);
        cout<<"The sum of integers in the inputted string is: "<<str<<endl;
        return 0;

    }