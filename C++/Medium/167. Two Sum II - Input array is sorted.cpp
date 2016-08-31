class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.empty()) return {};
        
        int start = 0;
        int end = numbers.size()-1;
        int sum;
        vector<int>     res;
        
        while(start < end)
        {
            sum = numbers[start] + numbers[end];
            if(sum == target)
            {
                res.push_back(start + 1);
                res.push_back(end + 1);
                break;
            }
            if(sum > target)
                end--;
            else
                start++;
        }
        
        return res;
    }
};
