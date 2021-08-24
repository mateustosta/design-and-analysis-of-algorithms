## Insertion Sort
Insertion Sort is a sorting by comparison algorithm. This algorithm works similar to the way humans sort playing cards in their hands. Although very simple, this algorithm is not a good choice for large datasets. The time complexity of this algorithm is O(n^2) for the worst case, O(n) for the best case and O(n^2) for the average case. This algorithm is more efficient than most other algorithms that have quadratic time complexity like Selection Sort and Bubble Sort.  

<p align="center">
  <img width="300" src="https://i.imgur.com/j0Xgclr.gif" alt="Insertion Sort - Example">
</p>

## Algorithm
- 1 - If it is the first element, it is already sorted.
- 2 - Pick next element
- 3 - Compare with all elements in the sorted sub-list
- 4 - Shift all the elements in the sorted sub-list that is greater than the value to be sorted
- 5 - Insert the value
- 6 - Repeat until list is sorted

## Performance  
- Worst-case performance: О(n^2) comparisons and swaps  
- Best-case performance: O(n) comparisons, O(1) swaps  
- Average performance: О(n^2) comparisons and swaps  