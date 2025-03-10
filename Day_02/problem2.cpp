// 2570. Merge Two 2D Arrays by Summing Values

class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2)
    {
        vector<vector<int>> ans;
        int x1 = 0, x2 = 0;
        while (x1 < nums1.size() && x2 < nums2.size())
        {
            if (nums1[x1][0] == nums2[x2][0])
            {
                nums1[x1][1] += nums2[x2][1];
                ans.emplace_back(nums1[x1]);
                x1++;
                x2++;
            }
            else if (nums1[x1][0] > nums2[x2][0])
            {
                ans.emplace_back(nums2[x2]);
                x2++;
            }
            else
            {
                ans.emplace_back(nums1[x1]);
                x1++;
            }
        }
        while (x1 < nums1.size())
        {
            ans.emplace_back(nums1[x1]);
            x1++;
        }
        while (x2 < nums2.size())
        {
            ans.emplace_back(nums2[x2]);
            x2++;
        }
        return ans;
    }
};