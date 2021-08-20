## Insertion Sort
Insertion Sort is a simple sorting algorithm. It is much less efficient on large lists than more advanced algorithms suck as quicksort and heapsort. However, insertion sort provides several advantages:
- Simple
- Efficient for small data sets
- And others

Insertion sort works similar to the way people sort playing cards in your hands. The array is virtually split into a sorted and an usorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

<p align="center">
  <img src="/sorting/insertionSort/assets/insertionsort.png" >
</p>

## Algorithm
- 1 - If it is the first element, it is already sorted.
- 2 - Pick next element
- 3 - Compare with all elements in the sorted sub-list
- 4 - Shift all the elements in the sorted sub-list that is greater than the value to be sorted
- 5 - Insert the value
- 6 - Repeat until list is sorted
