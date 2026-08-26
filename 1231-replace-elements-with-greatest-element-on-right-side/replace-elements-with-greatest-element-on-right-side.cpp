class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int largestNow=arr[arr.size()-1],nextLarge=0;
        for(int i=arr.size()-1;i>=0;i--){
            largestNow=nextLarge;
            if(arr[i]>largestNow){
                nextLarge=arr[i];
            }
            arr[i]=largestNow;
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};