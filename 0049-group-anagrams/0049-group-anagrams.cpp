class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       //store the value in map 
       map<string,vector<string>>mp;
       //iterate through strs
       for(int i=0;i<strs.size();i++){
        //extract each word
        string s=strs[i];
        // sort each word
        sort(s.begin(),s.end());
        mp[s].push_back(strs[i]);
       }
       //creating 2d vector for storing result of size map
       vector<vector<string>>result(mp.size());
       int index=0;
       for(auto pair:mp){
        result[index++]=pair.second;
       }
       return result;
    }
};