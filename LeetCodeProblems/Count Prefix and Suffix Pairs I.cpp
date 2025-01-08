// problem link
// https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/description/


// Source Code

class Solution {
public:
    bool isPreAndSuff(string str1, string str2)
    {
        int n1 = str1.length();
        int n2 = str2.length();

        if((n2) >= n1){
            int i, j, k;

            for(i = 0;i < n1;i++){
                if(str1[i] != str2[i]){
                    break;
                }
            }

            k = 0;
            for(j = n2-n1;j < n2;j++){
                if(str1[k] != str2[j]){
                    break;
                }
                k++;
            }

            if(i == n1 && j == n2){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int res = 0;

        for(int i = 0;i < n;i++){
            for(int j = i+1;j < n;j++){
                if(isPreAndSuff(words[i], words[j])){
                    res++;
                    cout << words[i] << " " << words[j] << endl;
                }
            }
        }

        return res;
    }
};