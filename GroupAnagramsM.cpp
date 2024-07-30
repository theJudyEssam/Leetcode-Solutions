class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> anagrams;

        for(int i = 0; i < strs.size();i++){

            string temp = strs[i];
            sort(temp.begin(), temp.end());
            anagrams[temp].push_back(strs[i]);

        }

        vector<vector<string>>res;
        for(auto i: anagrams){
            res.push_back(i.second);
        }
        

        return res;

    }
};


