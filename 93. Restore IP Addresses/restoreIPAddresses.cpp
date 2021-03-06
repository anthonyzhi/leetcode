class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        generate(s, 0, "", res);
        return res;
    }
    void generate(string s, int n, string out, vector<string>& res) {
        if (n == 4){
            if (s.empty()) 
                res.push_back(out);
        }
        else { 
            for (int k = 1; k < 4; ++k) {
                if (s.size() < k) 
                    break;
                int val = atoi(s.substr(0, k).c_str());
                if (val > 255 || k != to_string(val).size()) 
                    continue;
                generate(s.substr(k), n + 1, out + s.substr(0, k) + (n == 3 ? "" : "."), res);
            }
        }
    }
};
