#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 10;
  int *ptr = &x; // This pointer is now valid
  *ptr = 20; // Modifying the value of x through the pointer
  int y = *ptr; // y now holds the new value of x
  printf("x: %d\n", x); // Prints 20
  printf("y: %d\n", y); // Prints 20

  // Example of safe dynamic memory allocation and deallocation
  int *dynamicPtr = (int *)malloc(sizeof(int));
  if (dynamicPtr == NULL) {
    fprintf(stderr, "Memory allocation failed!\n");
    return 1; // Indicate an error
  }
  *dynamicPtr = 30;
  printf("dynamicPtr: %d\n", *dynamicPtr); // Prints 30

  free(dynamicPtr); // Free the dynamically allocated memory
  dynamicPtr = NULL; // Set the pointer to NULL after freeing

  return 0;
} 
