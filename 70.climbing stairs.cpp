//climbing stairs


class Solution {
public:
    int climbStairs(int n) {
        if(n == 0)return 1;
        if(n == 1)return 1;
        int t,c;
        vector<int>     num;
        num.push_back(1);
        num.push_back(1);
        while(num.size()<n+1)
        {
            c = num.size();
            t = num[c-1]+num[c-2];
            num.push_back(t);
        }
        return num[num.size()-1];       
    }
};
