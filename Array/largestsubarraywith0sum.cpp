class Solution
{
public:
    int maxLen(vector<int> &nums, int n)
    {
        // Your code here
        unordered_map<int, int> map;
        int sum = 0;
        int len = 0;
        map[0] = -1;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];

            if (map.find(sum) != map.end())
            {
                len = max(len, i - (int)map[sum]);
            }
            else
            {
                map[sum] = i;
            }
        }
        return len;
    }
};