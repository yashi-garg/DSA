class Solution {
public:
    string finalString(string s) {
        int l=s.size();
        int i=0;
       while(i<l)
        {
            if(s[i]=='i')
            {
                reverse(s.begin(),s.begin()+i);
                s.erase(i,1);
                l=s.size();
            }
            else
            i++;
        }
        return s;
    }
};