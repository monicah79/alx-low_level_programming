#include <stdio.h>
#include <stdlib.h>

int main()
{
  for(int i = 0; i <= 9; i++) {
    for(int j = i+1; j <= 9; j++) {
      if(i == j) {
        continue;
      }

      putchar(i+'0');
      putchar(j+'0');
      
      if(i == 8 && j == 9) {
        break;
      }
      
      putchar(',');
      putchar(' ');
    }
  }
  putchar('\n');
}
