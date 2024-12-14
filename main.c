#include <stdio.h>

int main(int argc, char *argv[]) {
  int arr[5] = {1, 2, 3, 4, 5};
  
  for (int i = 0; i < 5; i++) {
    // *(0x7fffffffe2b0 + 4 * i) = arr[i]
    printf("%d\n", i[arr]);
  }

  return 0;
}

