bool vowel(char c)
   {
       if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
       return true;
       else
       return false;
   }
    string reverseVowels(string s) {
        int l=s.size();
        int i=0,j=l-1;
        while(i<j)
        {
            if(vowel(s[i])&& vowel(s[j]))
            {
                char t=s[i];
                s[i]=s[j];
                s[j]=t;
                i++;
                j--;
            }
            else if(vowel(s[i]))
            {
                j--;
            }
            else
            i++;
        }
        return s;
    }