#include <iostream>
#include <vector>
using namespace std;


    int subarraySum(vector<int>& nums, int k) {
        int count = 0;

        // Iterate over each possible starting point of the subarray
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            
            // From the starting point, try all subarrays that start with `i`
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];

                // Check if the current subarray sum equals k
                if (sum == k) {
                    count++;
                    cout << "the i is: "<<i <<" the j is :"<<j<<endl;
                }
            }
            
        }
        return count;
    }


int main(){

    vector<int>nums = {3,4,7,-2,2,1,4,2};
   subarraySum(nums , 7);


}