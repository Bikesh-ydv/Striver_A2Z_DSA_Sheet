 /*
  Questions:-
     Given an array arr, rotate the array by one position in clockwise direction.
     
     Examples:
         Input: arr[] = [1, 2, 3, 4, 5]
         Output: [5, 1, 2, 3, 4]
         Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
         
         Approach:-
         --Traverse array from end to start and shifts each element by one.
           Remember array[0] = array[n-1](in clockwise rotation)
           
      TC:O(n)
	  SC:O(1)  
	  
	  */
	  
	   void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        int temp=arr[n-1];
       for(int i=n-1;i>0;i--){
           arr[i]=arr[i-1];
       }
        arr[0]=temp;
    }
	  
	     
