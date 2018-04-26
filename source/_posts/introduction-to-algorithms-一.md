---
title: introduction to algorithms(一)
date: 2018-04-21 16:50:31
tags: algorithms
categories: algorithms

---

**some words to be remembered : discrete Fourier transform 离散傅立叶变换**
### What are algorithms?

- an algorithms is any well-defined computational procedure that takes some value, or set of values, as input and produces some value, or set of values, as output.   

- an algorithms is a sequence of computational steps that transform the input into the output.  

### instance
an input data is called an instance of problem.  In general, an instance of a problem consist of the input(satisfying whatever constraints are imposed in the problem statement) needed to compute a solution to the problem.  

### which sorting algorithm to use probably depends on
1. the number of items to be sorted.
2. the extent to which the items are already somewhat sorted, 
3. possible restrictions on the item values. 
4. the architecture of the computer.
5. the kind of storage devices to be used.
6. main memory disks ...

### correct algorithm
**for every input instance, it halts with the correct output.**  
However, incorrect algorithms can sometimes be useful if we can control their error rate.   

### two characteristics that are common to many interesting algorithms problems 
1. They have many candicate solutions, the overwhelming majority of which do not solve the problem at hand. Finding one that does, or one that is "best" can present quite a challenge.
2. They have practical applications

### data structures
**A data structure is a way to store and organize data in order to facilitate access and modifications.**  No single data structure works well for all purposes, and so it is important to know the strengths and limitations of several of them. 

### efficiency
Our usual measure of efficiency is speed. That is : how long an algorithms takes to produce its result?   

- interesting NP-complete: 
  1. problems for which no efficient solutions is known. nobody knows whether or not efficient algorithms exist for NP-complete problems. 
  2. **remarkable property** : if an efficient algorithm exists for any one of them, then efficient algorithms exist for all of them. 
  3. several NP-complete problems are similar, but not identical, to problems for which we do know of efficient algorithms. 
  4. if you can show that the problem is NP-complete , you can instead spend your time developing an efficient algorithm that gives a good, but not the best possible, solution. 

### Parallelism
In order to elicit the best performance from multicore computers, we need to design algorithms with parallelism in mind.  multithreaded algorithms which take advantage of multiple cores. 

### comparison between insertion sort and merge sort
1. insertion sort takes time roughly equal to **c1的n次方**, merge sort takest time roughly equal to **c2nlogn** ,`c1<c2` and constant factors can have far less of an impact on the running time than the dependence on the input size n. 
2. although insertion sort usually runs faster than merge sort for small input sizes, once the input size n becomes large enough, merge sort's advantage of lgn compensate for difference in constant factors.

### conclusion
Having a solid base of algorithmic knowledge and technique is one characteristic that separates the truly skilled programmers from the novices. With modern computing technology, you can accomplish some tasks without knowing much about algorithms, but with a good backgrond in algorithms, you can do much, much more...
