# Text-only document extract

Source document: Task 5.docx

Images and layout omitted. Claims below are source text, not independently verified results.







DSA examples TASK 





Insertion Sort:

      Insertion Sort is a simple and efficient sorting algorithm. It works by iterating through an array one element at a time, inserting each element into its proper position within the previously sorted portion of the array.



Pseudo Code:

     InsertionSort (arr, n)

          for i = 1 to n-1

            key = arr[i]

                j = i - 1

   while  j > = 0  &&  arr[j] > key

           arr[j+1] = arr[j]

                 j = j - 1

            arr[j+1] = key

 

Working:

Start with the second element of the array index 1 as the key element.

Compare the key with elements in the sorted part of the array to its left.

Shift elements greater than the key one position to the right.

Insert the key into its correct position.

Repeat the process for all elements in the array.



Time Complexity:

Best Case (already sorted array): O(n)

Worst Case (reverse sorted array): O(n2)

Average Case: O(n2)



Example:

      arr = [8, 4, 1, 5]



step

key

comparisons

array

1

4

8 > 4

[4, 8, 1, 5]

2

1

8 > 1, 4 > 1

[1, 4, 8, 5]

3

5

8 > 5

[1, 4, 5, 8]



Sorted Array: [1, 4, 5, 8]

   



Selection Sort:

     Selection Sort is a simple comparison-based sorting algorithm. It divides the array into the sorted and the unsorted portion. In each step, it finds the smallest or largest element from the unsorted portion and swaps it with the first unsorted element, expanding the sorted portion.





Pseudo Code:

   SelectionSort(arr, n)

       for i = 0 to n-2

         minIndex = i

      for j = i+1 to n-1

if arr[j] < arr[minIndex]

          minIndex = j

 if minIndex ≠ i

swap arr[i] with arr[minIndex]



Working:

Start at the first element (index 0).

Find the smallest element in the unsorted portion of the array.

Swap this smallest element with the first unsorted element.

Move the boundary of the sorted portion to the right and repeat the process for the next unsorted element.

Repeat until entire array is sorted.



Time Complexity:

Best Case: O(n2)

Worst Case: O(n2)

Average Case: O(n2)









Example:

         arr = [29, 10, 14, 37, 13]



step

unsorted

min

sorted

1

[29, 10, 14, 37, 13]

10

[10, 29, 14, 37, 13]

2

[29, 14, 37, 13]

13

[10, 13, 14, 37, 29]

3

[14, 37, 29]

14

[10, 13, 14, 37, 29]

4

[37, 29]

29

[10, 13, 14, 29, 37]



Sorted Array: [10, 13, 14, 29, 37]





Which one is more efficient?

When comparing Selection Sort and Insertion Sort, both are simple algorithms with their own strengths and weaknesses, but they behave quite differently depending on the nature of the data being sorted. In general, Insertion Sort is more efficient than Selection Sort for most real world situations, especially when working with small or nearly sorted datasets. Selection Sort, on the other hand, might perform similarly in terms of comparisons but is usually less efficient because of its redundant swaps.
