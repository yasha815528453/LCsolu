class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        
        for(int i =0; i<s.size();++i){
            int left =i;
            int right =i;
            int next=i+1;
            int replace = i;
            while(left>=0&&right<s.size()&&s[left]==s[right]){
                count++;
                left--;
                right++;
            }
            while(replace>=0&&next<s.size()&&s[replace]==s[next]){
                count++;
                replace--;
                next++;
            }
        }
        return count;
    }
};
