int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  printf("%d", x); // Prints 20
  printf("%d", y); //Prints 20
  return 0; 
}