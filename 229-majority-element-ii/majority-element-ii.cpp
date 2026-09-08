class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector <int> elements;
        int el1,el2,count1=0,count2=0;
        for(int i : nums){
            if(count1==0 && i!=el2){
                el1=i;
                count1+=1;
            }
            else if(count2==0 && i!=el1){
                el2=i;
                count2+=1;
            }
            else if(el1==i){
                count1++;
            }
            else if(el2==i){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(int i :nums){
            if(i==el1){
                count1++;
            }
        }
        for(int i :nums){
            if(i==el2){
                count2++;
            }
        }
        if(count1>nums.size()/3){
            elements.push_back(el1);
        }
        if(count2>nums.size()/3){
            elements.push_back(el2);
        }
        return elements;
    }
};