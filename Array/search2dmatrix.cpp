class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size(), n = matrix[0].size();
        int row = 0, col = n - 1;

        while (row < m && col > -1)
        {
            int cur = matrix[row][col];
            if (cur == target)
                return true;
            if (target > cur)
                row++;
            else
                col--;
        }
        return false;
    }
};