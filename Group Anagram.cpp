class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string, vector<string>> mp;/* map me ham sorted word or original word    rakhenge-"act"  → ["act", "cat"]
"opst" → ["pots", "tops", "stop"]
"aht"  → ["hat"]*/

        for(string s : strs) { /*s me ek ek word rakhenge*/

            string key = s;//s ki copy bna rhe hai

            sort(key.begin(), key.end());//key ko alphabetically sort karenge jaise phle key = "cat",ab key = "act"

            mp[key].push_back(s);//key ke group me s ka data dal do
        }

        vector<vector<string>> ans;

        for(auto x : mp) {
             ans.push_back(x.second);

        }

        return ans;
    }
};
