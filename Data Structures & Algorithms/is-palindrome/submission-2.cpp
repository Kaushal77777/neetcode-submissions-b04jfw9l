class Solution {
public:
    bool isPalindrome(string s) {
        string sim="",rev="";
        transform(s.begin(), s.end(), s.begin(),
              ::tolower);
        for(char c:s){
            if((c>=97 && c<=122) || (c>=48 && c<=57)){
                sim+=c;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)){
                rev+=s[i];
            }
        }
    
        
        cout << sim << endl << rev << endl;
        if(sim == rev){
            return true;
        }
        return false;
    }
};
