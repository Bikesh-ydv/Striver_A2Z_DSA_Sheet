/*
 Question:-
  Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

  Note: The second largest element should not be equal to the largest element.

  Examples:
  Input: arr[] = [12, 35, 1, 10, 34, 1]
  Output: 34
  Explanation: The largest element of the array is 35 and the second largest element is 34.
  
  Approach
  --if the current element is greater than curr then update curr and prev
  --else if current element is less than curr and also greater than prev then update prev to current element
  
  Time complexity : O(n)
  Space complexity: O(1)
*/

int getSecondLargest(int arr[],int n) {
        int curr=arr[0];
        int prev = -1;
        for(int i=1;i<n;i++){
            if(arr[i]>curr){
                prev=curr;
                curr = arr[i];
            }
            else if(arr[i]<curr && arr[i]>prev){
                prev=arr[i];
            }
        }
       
        return prev;
    }

