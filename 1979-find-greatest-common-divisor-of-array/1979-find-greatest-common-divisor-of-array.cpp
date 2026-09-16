class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest=INT_MAX;
        int largest=INT_MIN;
        for(auto ele : nums){
            smallest=min(smallest, ele);
            largest=max(largest, ele);
        }
        return gcd(largest, smallest);
    }
};