#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int i;

  // Versão 01
  for (i = 2; i <= 20; i+=2) {
    printf("%d \n", i);
  }

  // Versão 02
  for (i = 1; i <= 20; i++) {
    if(i % 2 == 0) {
      printf("%d \n", i);
    }
  }

  return 0;
  
} 