## Array

array is a **collection of elements** which can be accessed via index. It store data in a contiguous form of memory.

## Array as An Abstract Data Type

Abstract type is just like another data type as int, float, char with some **user-define method** and **operation**.
we can customize these method and operation as we want.

## creating our Array as ADT

Suppose we want to build an array as an abstract data type with our customized set of values and customized set of operations in a heap.
Let’s name this customized array as customArray.Let our set of values which will represent our customized array include these parameters:

- total_size
- used_size
- base_address

And the operations include operators namely,

- max()
- get(i)
- set(i,num)
- add(another_array)

So, now when we are done creating a blueprint of the customized array. We can very easily code their implementation, but before that, let’s first learn what these values and operations, we have defined, do:

## Understanding the ADT above:

1. total_size: This stores the total reserved size of the array in the memory location.
1. used_size: This stores the size of the memory location used.
1. base_address: This is a pointer that stores the address of the first element of the array.

### references:

[code with harry](https://codewithharry.com/videos/data-structures-and-algorithms-in-hindi-7/)
