class Solrevution{
public:
     bool ValidPalindrome(string s){
       string clean=" ";
       for(char ch:s){
          if(isalnum(ch)){
             clean+=tolower(ch);
          }
       }
      string rev = clean;
      reverse(rev.begin(),rev.end());

      return rev==clean;
     }
};
