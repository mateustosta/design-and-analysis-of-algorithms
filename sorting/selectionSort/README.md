## Selection Sort
Selection Sort is a sorting by comparison algorithm. This algorithm is based on always swapping the smallest value of the array with the first position of the array (or the biggest, depending on the order required), after that, the second smallest value will be swapped with the element in the second position of the array and so on. , down to the last two elements. The time complexity of selection sort is O(n^2) for the worst-case, O(n^2) for the best case, and O(n^2) for the average case.  

<p align="center">
  <img width="100" src="https://i.imgur.com/VYHDuQg.gif" alt="Selection Sort - Example">
</p>

## Algorithm
arr[] = 64 25 12 22 11  

// Find the minimum element in arr[0...4]  
// and place it at beginning  
11 25 12 22 64  

// Find the minimum element in arr[1...4]  
// and place it at beginning of arr[1...4]  
11 12 25 22 64  

// Find the minimum element in arr[2...4]  
// and place it at beginning of arr[2...4]   
11 12 22 25 64  

// Find the minimum element in arr[3...4]  
// and place it at beginning of arr[3...4]  
11 12 22 25 64   

## Performance  
- Worst-case performance: О(n^2) comparisons, О(n) swaps  
- Best-case performance: О(n^2) comparisons, O(1) swaps  
- Average performance: О(n^2) comparisons, О(n) swaps  