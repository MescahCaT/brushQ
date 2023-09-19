#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void skip(vector<int>& v, size_t& pos, char c)
    {
        if (c == '+')
        {
            pos++;
            while (pos < v.size() && v[pos] == v[pos - 1])
            {
                pos++;
            }
        }
        else
        {
            pos--;
            while (pos > 0 && v[pos] == v[pos + 1])
            {
                pos--;
            }
        }

    }

    vector<vector<int>> threeSum(vector<int>& nums)
    {
        if (nums.size() < 3)
        {
            return vector<vector<int>>();
        }
        vector<vector<int>> ret;
        sort(nums.begin(), nums.end());
        size_t buf = 0;
        while (buf < nums.size() - 2)
        {
            size_t left = buf + 1, right = nums.size() - 1;
            int target = -nums[buf];
            while (left < right)
            {
                int sum = nums[left] + nums[right];
                if (sum == target)
                {
                    ret.push_back({ nums[buf], nums[left],nums[right] });
                    skip(nums, left, '+');
                    skip(nums, right, '-');
                }
                else if (sum < target) skip(nums, left,'+');
                else skip(nums, right,'-');
            }
            skip(nums, buf,'+');
        }
        return ret;
    }
};

int main()
{
    vector<int> v = { -2,0,1,1,2 };
    vector<vector<int>> ret = Solution().threeSum(v);
    for (vector<vector<int>>::iterator it = ret.begin(); it < ret.end(); it++)
    {
        for (size_t i = 0; i < (*it).size(); i++)
        {
            cout << (*it)[i] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}