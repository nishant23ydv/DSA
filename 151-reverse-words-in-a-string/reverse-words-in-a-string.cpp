class Solution {
public:
    string reverseWords(string s) {
        string val = "";
        vector<string> ans;
        int n = s.size();
        for (int i=0;i<n;i++){
            if (s[i]==' '){
                if (val.size()>0) ans.push_back(val);
                val="";
            }
            else {
                val+=s[i];
            }
        }
        if (val.size() > 0) {
            ans.push_back(val);
        }
        reverse(ans.begin(), ans.end());

        string result = "";
        for (int i = 0; i < ans.size(); i++) {
            if (i > 0)
                result += " ";

            result += ans[i];
        }

        return result;
    }
};