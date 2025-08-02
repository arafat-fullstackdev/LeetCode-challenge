#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> &arr, int target){
    int value = arr.size();

    for(int i =1; i<value; i++){
        for(int j = i +1; j<value; j++){
            if(arr[i] + arr[j] == target){
                // return cout<<"The value is true"<<endl;
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, -3, -2,5,7,8};
    int target = 2;
    cout<< twoSum(arr,target)<<endl;
    
    return 0;
}