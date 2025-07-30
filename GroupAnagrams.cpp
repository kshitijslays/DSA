#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> anagramMap;

        for (string str : strs)
        {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anagramMap[sortedStr].push_back(str);
        }

        vector<vector<string>> result;
        for (auto entry : anagramMap)
        {
            result.push_back(entry.second);
        }
        return result;
    }
};

int main()
{
    Solution sol;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> output = sol.groupAnagrams(strs);

    for (auto group : output)
    {
        cout << "[";
        for (auto word : group)
        {
            cout << word << " ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}