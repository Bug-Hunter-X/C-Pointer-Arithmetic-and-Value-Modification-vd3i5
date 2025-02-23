int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifying the value through the pointer
  printf("%d\n", x); //Should print 20
  return 0;
}