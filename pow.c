#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
#include <math.h>

int main(){
  printf("Computing...\n");

  mpz_t res;
  mpz_init(res);
  mpz_ui_pow_ui(res,9,pow(9,9));

  printf("Writing...\n");

  FILE *ptr;
  ptr = fopen("ninetoninetonine.txt","w+");
  gmp_fprintf(ptr, "%Zd", res);

  mpz_clear(res);

  return 0;
}
