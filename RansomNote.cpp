#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    bool canConstruct(string ransomNote, string magazine){
        unordered_map<int, char>freq;

        for(char ch:ransomNote){
            freq[ch]++;
        }

        for(char ch:magazine){
            if(freq[ch]>0){
                freq[ch]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution sol;
    string ransomNote="aab";
    string magazine="baa";
    if(sol.canConstruct(ransomNote, magazine)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;

}