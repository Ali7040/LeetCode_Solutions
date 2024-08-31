class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        unordered_map <char,int> RToInt{
        {'I',1},{'V',5},{'X',10},
        {'L',50},{'C',100},{'D',500},
        {'M',1000}};

    for(int i=0;i<s.size();i++){
        if(RToInt[s[i]]<RToInt[s[i+1]]){
            //for cases such as IV,CM, XL, etc...
            res -=RToInt[s[i]];
        }
        else{
            res+=RToInt[s[i]];
        }
    }
        return res;
    }
};