class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int ans;
        vector<vector<int>> arr;
        vector<int> temparr;
        for(int row=1;row<=numRows;row++){
            ans=1;
            temparr={};
            temparr.push_back(1);
            for(int col=1;col<row;col++){
                ans=ans*(row-col)/col;
                temparr.push_back(ans);
            }
            arr.push_back(temparr);
        }
        return arr;
    }
};