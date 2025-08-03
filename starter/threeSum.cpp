#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //sort array
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int value = nums.size();

        for(int i =0; i<value -2; i++){
            if(nums[i]> 0) break;
            if(i>0 && nums[i] == nums[i - 1]) continue;

            int left = i +1;
            int right = value -1;
            int target = -nums[i];

            while(left< right){
                int presentSum = nums[left] + nums[right];

                if(presentSum == target){
                    result.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    while(left< right && nums[left] == nums[left -1]){
                        left ++;
                    }
                     while(left< right && nums[right] == nums[right +1]){
                      right --;
                    }
                }
                else if(presentSum < target){
                    left ++;
                }else{
                    right --;
                }
            }
        }
        return result;
    }
};