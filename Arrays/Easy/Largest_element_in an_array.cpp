/*
  Question:-
       Given an array arr[]. The task is to find the largest element and return it.
       
        Examples:
         Input: arr[] = [1, 8, 7, 56, 90]
         Output: 90
         Explanation: The largest element of the given array is 90.
         
    Approach:-
    --Traverse the entire array and update the 'largest' variable
    
    TC:O(n)
    SC:O(1)
    
     Code:-
    */
    
     int largest(int arr[],int n) {
        int largest = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>largest)
              largest=arr[i];
        }
        return largest;
    }
    
    
