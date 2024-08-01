class Solution {
public:
    int countSeniors(vector<string>& d) {
        vector<string> s;
        for(int i=0;i<d.size();i++){
            s.push_back(d[i].substr(11, 2));
        }
        int cnt=0;
        for(int i=0;i<s.size();i++){
            int num = stoi(s[i]);
            if(num>60){
                cnt++;
            }
        }
        return cnt;
    }
};