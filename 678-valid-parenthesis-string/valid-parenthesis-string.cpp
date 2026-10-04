class Solution {
public:
    bool checkValidString(string s) {
    int n = s.size();
    int maxi=0, mini=0;
 for (int i=0;i<n;i++){
        if (s[i] == '('){
            maxi++;
            mini++;
        }
        else if (s[i]==')'){
         mini--;
         maxi--;
        }
        else {
            maxi++;
            mini--;
        }
    if (mini < 0) mini=0;
    if (maxi < 0) return false;
    }
    return mini==0;
    }
};