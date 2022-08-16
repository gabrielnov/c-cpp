#include <stdio.h>
#include <string.h>

int main() {
  char a[10], b[10], c[10], r[10];  

  scanf("%s", a);
  scanf("%s", b);
  scanf("%s", c);
  
  if (strcmp(a, b) < 0){
    sprintf(r, "%s", a);
  }
  else {
    sprintf(r, "%s", b);
  }

  if (strcmp(c, r) < 0){
    sprintf(r, "%s", c);
  }
  

  printf("\nA maior string eh %s\n", r);
  
  }
  