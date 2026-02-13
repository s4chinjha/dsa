//BS 18 17/01

// Problem -> Given an array
// of integers , 'arr[i]' represents
// the no. of pages in the 'i-th' book

// There are 'm' no. of students  and task is to allocate 
// all the books to the stu

//Conditions to allocate books
//1. Each Student gets at least one book
//2. Each book to 1 student only, no division of book
//3. Book allocation should be in contiguous manner

// Allocation should be in a way that maximun no.
// of pages assigned to a stu is min.

// Lowest possible answer is the max(arr)
// Highest is where we can go is to summation of all elements
// when we have  1 student

//Linear Search for the "Brute Force"

//1. a for loop from max(arr) to summation of all ele
//2. A function from 0 to n to calculate no. of students for a certain max no. of pages

//Binary Search 

