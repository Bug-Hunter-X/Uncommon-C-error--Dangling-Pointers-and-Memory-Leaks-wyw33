# Uncommon C Error: Dangling Pointers and Memory Leaks

This repository demonstrates a common yet subtle error in C programming: dangling pointers and memory leaks.  Dangling pointers occur when a pointer variable points to memory that has been freed or deallocated. Accessing a dangling pointer leads to undefined behavior. Memory leaks happen when dynamically allocated memory is not freed, leading to gradual memory exhaustion.

The `bug.c` file contains code that exhibits these issues. The `bugSolution.c` file provides a corrected version.

## How to Run

1. Clone the repository.
2. Compile and run the `bug.c` file (using a C compiler like GCC):
   ```bash
gcc bug.c -o bug
./bug
```
3. Observe the potential issues.
4. Compile and run `bugSolution.c` to see the corrected version. 

## Bug Explanation

The core issue lies in how memory is managed.  Improper handling of dynamically allocated memory through functions like `malloc` and `free` can create the described problems. Incorrect pointer arithmetic or using pointers after the memory they point to has been deallocated are common causes of these issues.

## Solutions

Careful memory management is key. Always ensure that dynamically allocated memory is freed using `free()` when it is no longer needed and to avoid using pointers to memory that has already been freed. Proper error handling and using tools like Valgrind can help detect these issues during development.