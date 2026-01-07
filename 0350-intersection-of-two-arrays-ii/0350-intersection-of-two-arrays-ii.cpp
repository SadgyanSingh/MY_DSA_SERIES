class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> result;
        
        // Count frequency of elements in nums1
        for (int num : nums1) {
            freq[num]++;
        }
        
        // Check nums2 elements against the map
        for (int num : nums2) {
            if (freq[num] > 0) {
                result.push_back(num);
                freq[num]--;  // Decrease count
            }
        }
        
        return result;
    }
};