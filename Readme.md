# I Need to solve A Problem in Daily that is my destiny

- **Problem Solver**:Solves real-world or abstract problems using logical thinking and creativity.
- **Compettive Programmer**: Focused on solving algorithmic and mathematical problems efficiently in a competitive setting.

## Some Important Topics

### Time Complexity
Time complexity is a measure of how much time it takes to run an algorithm
<img src="https://miro.medium.com/v2/resize:fit:1400/1*5ZLci3SuR0zM_QlZOADv8Q.jpeg"/>

### Arrays
Array is a linear data structure and it is a collection of items stored at contiguous memory locations.
- Add or remove element at the end: O(1) amortized
- Add or remove element from arbitrary index: O(n)
- Access or modify element at arbitrary index: O(1)
- Check if element exists: O(n)
- Two pointers: O(n⋅k), where kk is the work done at each iteration, includes sliding window
- Building a prefix sum: O(n)
- Finding the sum of a subarray given a prefix sum: O(1)

### Strings

- Add or remove character: O(n)O(n)
- Access element at arbitrary index: O(1)O(1)
- Concatenation between two strings: O(n+m)O(n+m), where mm is the length of the other string
- Create substring: O(m)O(m), where mm is the length of the substring
- Two pointers: O(n⋅k)O(n⋅k), where kk is the work done at each iteration, includes sliding window

### Linked Lists
Array is a linear data structure and it is a collection of items stored at non-contiguous memory locations.

  - Add or remove element given pointer before add/removal location: O(1)O(1)
  - Add or remove element given pointer at add/removal location: O(1)O(1) if doubly linked
  - Add or remove element at arbitrary position without pointer: O(n)O(n)
  - Access element at arbitrary position without pointer: O(n)O(n)
  - Check if element exists: O(n)O(n)
  - Reverse between position i and j: O(j−i)O(j−i)
  - Detect a cycle: O(n)O(n) using fast-slow pointers or hash map

### Hash table/dictionary/Map
Hashing is a technique used in data structures that efficiently stores and retrieves data in a way that allows for quick access

  - Add or remove key-value pair: O(1)/STL(C++) log(n)
  - Check if key exists: O(1)/STL(C++) log(n)
  - Check if value exists: O(n)/STL(C++) log(n)
  - Access or modify value associated with key: O(1)/STL(C++) log(n)
  - Iterate over all keys, values, or both: O(n)

    Note: the O(1)O(1) operations are constant relative to n. In reality, the hashing algorithm might be expensive. For example, if your keys are strings, then it will cost O(m)O(m) where mm is the length of the string. The operations only take constant time relative to the size of the hash map.


### Stack
A Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

- empty() – Returns whether the stack is empty – Time Complexity : O(1) 
- size() – Returns the size of the stack – Time Complexity : O(1) 
- top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
- push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
- pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1)

### Queue
A Queue Data Structure is a fundamental concept in computer science used for storing and managing data in a specific order. It follows the principle of "First in, First out" (FIFO).
in C++:
    - Enqueue element: O(1)
    - Dequeue element: O(1)
    - Peek (see element at front of queue): O(1)
    - Access or modify element at arbitrary index: O(n)
    - Check if element exists: O(n)
    
### Binary search tree

A Binary Search Tree (or BST) is a data structure used in computer science for organizing and storing data in a sorted manner. Each node in a Binary Search Tree has at most two children, a left child and a right child, with the left child containing values less than the parent node and the right child containing values greater than the parent node.

|Operation	|Best Case	|Average Case	|Worst Case|
|-|-|-|-|
|Insert|	O(log n)	|O(log n)	|O(n)|
|Search|	O(1)	|O(log n)	|O(n)|
|Update|	O(log n)	|O(log n)	|O(n)|
|Delete|	O(log n)	|O(log n)	|O(n)|

### Heap/Priority Queue
A Heap is a complete binary tree data structure that satisfies the heap property: for every node, the value of its children is greater than or equal to its own value. Heaps are usually used to implement priority queues, where the smallest (or largest) element is always at the root of the tree.

STL Functions for Heap Operations
    - make_heap(): Converts given range to a heap O(N).
    - push_heap(): Arrange the heap after insertion at the end O(logN).
    - pop_heap(): Moves the max element at the end for deletion O(logN).
    - sort_heap(): Sort the elements of the max_heap to ascending order O(NlogN).
    - is_heap(): Checks if the given range is max_heap O(N).
    - is_heap_until(): Returns the largest sub-range that is max_heap O(N).

### Sorting algorithms
In STL The sort() function is implemented using the Intro Sort Algorithm. It is the combination of three standard sorting algorithms: insertion sort, quick sort and heap sort. It is chooses the best algorithm that fits the given case.
<img src="https://assets.leetcode.com/static_assets/media/original_images/DSA/Chapter_11/sorting.png"/>
