//leetcode 917
class Solution {
public:
bool isletter(char c)
{
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
    return true;
    else
    return false;
}
    string reverseOnlyLetters(string s) {
        int l=s.size();
        int i=0,j=l-1;
        while(i<j)
        {
            if(isletter(s[i])&& isletter(s[j]))
            {
                char t=s[i];
                s[i]=s[j];
                s[j]=t;
                i++;
                j--;
            }
            else if(isletter(s[i]))
            {
                j--;
            }
            else
            i++;
        }
        return s;
    }
};