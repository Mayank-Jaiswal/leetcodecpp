class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int c = 0, el = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (c == 0)
            {
                el = nums[i];
            }
            if (el == nums[i])
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        return el;
    }
};