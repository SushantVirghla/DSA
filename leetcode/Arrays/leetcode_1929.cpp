#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    //Input Array
    vector<int> nums = {1,2,1};
    int n = nums.size();

    //Result Array
    vector<int> nums2(2*n);

    //Copy array 1 into resultant array
    for(int i=0;i<n;i++){
        nums2[i] = nums[i];
        nums2[i+n] = nums[i];
    }
    for(int i=0;i<2*n;i++){
        cout<<nums2[i]<<" ";
    } 
    return 0;
}