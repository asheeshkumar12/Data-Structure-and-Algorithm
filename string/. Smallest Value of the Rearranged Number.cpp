class Solution {
public:
    
    long long converStrToNum(string s) // string to comnvert into number
    {
        long long fq=0;
        for(int i=0;i<s.length();i++)
        {
            fq*=10;
            fq+=(s[i]-'0');
         }
        return fq;
    }
    long long smallestNumber(long long num) {
        if(num<0)
        {
            num=-1*num;
            string s;
            while(num>0)
            {
                int rem=num%10;
                num/=10;
                s+=(rem+'0');  // integer to string;
            }
            sort(s.begin(),s.end()); // sort string
            reverse(s.begin(),s.end());  //reverse string
                return -1*converStrToNum(s);     //make positive because the nun is negative
       }
        string st;
        while(num>0)
        {
            int rem=num%10;
            num/=10;
            st+=(rem+'0');                                   // int to str
       }
        sort(st.begin(),st.end());
        if(st[0]!='0')                      //if first char of string is 0
          return converStrToNum(st);
        int j=0;
        while(st[j]=='0')  //end at not 0 char indexes
        {
           j++;    
        }
        swap(st[j],st[0]);    // swap string
        return converStrToNum(st);
    }
};
