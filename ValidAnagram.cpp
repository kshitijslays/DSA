#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        unordered_map<int, char> count;
        for (char ch : s)
        {
            count[ch]++;
        }
        for (char ch : t)
        {
            count[ch]--;
            if (count[ch] < 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string s = "kshitij";
    string t = "jitihsk";
    if (sol.isAnagram(s, t))
    {
        cout << "s and t are anagrams.";
    }
    else
    {
        cout << "s and t are not anagrams.";
    }
    return 0;
}
