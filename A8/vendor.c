#include <stdio.h>

void get_cpu_vendor(char* vendor) {
  // TODO: this function should store the vendor ID string  
  // to the given string. 
  // Make sure the string is a valid C string ('\0'-terminated)
}

int main() {
  char vendor[16];
  get_cpu_vendor(vendor);
  printf("CPU vendor ID: %s\n", vendor);
  return 0;
}
 
