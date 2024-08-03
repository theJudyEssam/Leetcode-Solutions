class Solution {
public:

    string encode(vector<string>& strs) {
        string res ="";
        for(auto i: strs){
            res+=i + "|";
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string>res;
        string curr = "";
        //neet code love you
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '|' && res.empty()){
                res.push_back(curr);
                curr = "";
            }
            else if(s[i] == '|' && !res.empty()){
                curr = curr.substr(1, curr.length()-1);
                res.push_back(curr);
                curr = "";
            }
            
            curr+=s[i];
            
        }


        return res;

    }
};