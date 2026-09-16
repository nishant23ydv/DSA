class Solution {
public:
    int maxVowels(string s, int k) {
        int maxVowels=0,cnt=0;
        int i=0,j=k-1;
        for(int i=0; i<k; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')maxVowels++;
        }
        cnt=maxVowels;
        while(j<s.length()-1){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')cnt--;
            if(s[j+1]=='a'||s[j+1]=='e'||s[j+1]=='i'||s[j+1]=='o'||s[j+1]=='u')cnt++;
            maxVowels=max(cnt,maxVowels);
            i++;
            j++;
        }

        return maxVowels;
    }
};