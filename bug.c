int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifying the value through the pointer
  printf("%d", x); //Should print 20
  return 0;
}