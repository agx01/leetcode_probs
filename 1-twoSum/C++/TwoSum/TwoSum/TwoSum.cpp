// TwoSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>

using std::vector;
using std::map;
using std::cout;
using std::endl;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //cout << "We in function\n";
        map <int, int> h;
        
        for(int i = 0; i<nums.size(); i++)
            if (h.find(target - nums[i]) == h.end()) {
                h[nums[i]] = i;
            }
            else {
                vector<int> result{
                    h[target - nums[i]],
                    i
                };
                return result;
            }

        return nums;
    }
};

int main()
{
    int arr[] = {
        2, 
        7, 
        11, 
        15 };
    vector <int> vecOfArr(arr, arr + sizeof(arr) / sizeof(int));

    int target = 9;
    Solution sol;
    
    vector <int> vecResult = sol.twoSum(vecOfArr, target);
    for (int x : vecResult)
        cout << x << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
