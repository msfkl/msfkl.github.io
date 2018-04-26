---
title: introduction to algorithms(二)
date: 2018-04-21 16:50:31
tags: algorithms
categories: algorithms

---

### sorting problem

Input: A sequence of n numbers<a1, a2, ..., an>.  
Output: A permutation (reordering) < b1, b2, ..., bn>  

**Although conceptually we are sorting a sequence, the input comes to us in the form of an array with n elements.**

### insertion_sort
```
1.    for j = 2 to A.length
2.      key = A[j]
3.      //Insert A[j] into the sorted sequence A[1..j=1]
4.      i = j - 1
5.      while j > 0 and A[j] > key
6.      	A[i+1] = a[i]
7.      	i = i - 1
8.      	a[i+1] = key
```

At the start of each iteration of the `for` loop of lines 1-8, the subarray A[1...j-1] consists of the elements originally in A[1..j-1], but in sorted **order**.
We use `loop invariants` to help us understand why an algorithm is correct.   

1. Intialization: It is true prior to the first iteration of the loop.  //先于  

2. Maintenance: If it is true before an iteration of the loop, it remains true before the next iteration.  

3. Termination: When the loop terminates, the invariant gives us a useful property that helps show that the algorithm is correct.  

### how to understand loop invariants correctly?


