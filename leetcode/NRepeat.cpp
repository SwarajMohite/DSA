class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> seen;

        for(int num:nums)
        {
            if (seen.count(num)) return num;
            seen.insert(num);
        }
        return -1;
    }
};

// can use set also ( but it is ordered ) require more time and space 
