/*
  Question:-
     Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

  Example 1:
    Input: nums = [1,2,3,4,5,6,7], k = 3
    Output: [5,6,7,1,2,3,4]
    Explanation:
     rotate 1 steps to the right: [7,1,2,3,4,5,6]
     rotate 2 steps to the right: [6,7,1,2,3,4,5]
     rotate 3 steps to the right: [5,6,7,1,2,3,4]
     
     Approach:-
       --Firstly, reverse the array from 0 to n(array_size)-k
       --Secondly, reverse the array from n(array_size)-k to last element of an array
       --Thirdly, reverse the whole array
       
       **You can modify the above logic to rotate the array to left by k steps but the process is same.**
     
     TC:O(2n)
     SC:O(1)
     
*/

 void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k),nums.begin()+nums.size());
        reverse(nums.begin(),nums.begin()+nums.size());
    }
