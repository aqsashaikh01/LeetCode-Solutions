class Solution {
public:
    int balancedStringSplit(string s) {
        int bal=0,count=0;
        for(int i=0;i<s.length();i++)
        {
            bal += s[i] == 'L' ? 1 : -1;
            if(bal==0)
                count++;
        }
        return count;      
    }
};