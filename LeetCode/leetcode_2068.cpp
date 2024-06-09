//leetcode 2068
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int> map;
        //unordered_map<char,int> map1;
        int n=word1.length();
        for(int i=0;i<n;i++)
        {
            map[word1[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            map[word2[i]]--;
        }
        for(char c='a';c<='z';c++)
        {
          if(map[c]>=-3 && map[c]<=3)
          continue;
          else
          return false; 
        }
        return true;
    }
};