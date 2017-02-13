/* Tailles des différentes 
 * représentations entières */


/*
//ex1: comprendre un morceau de code (pas besoin de vérifier comme il s'agit d'une initiation de la compréhension des sizeof(machin))

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
 
int main () {
  //la taille de char est 1
  printf("Size of char: %lu\n", sizeof(char));

  //sizeof(char) = 1 octet = 8 bits Donc CHAR_MIN = 10000000%x = -128%d et CHAR_MAX = 01111111%x = 127%d
  //-qu'est ce qu'est le type %hhd?
  printf("Signed char min/max: %hhd/%hhd\n", CHAR_MIN, CHAR_MAX );
  
  //unsigned, UCHAR_MIN n'existe pas comme fonction donc 0, UCHAR_MAX = 11111111%x = 255%d
  printf("Unsigned char min/max: %hhu/%hhu\n", 0, UCHAR_MAX );

  printf("Size of short: %lu\n", sizeof(short));

  //min = -(2^15) = -32768 & max = 32767 avec 0 puis 15 fois 1 d'affilée en hexadécimal
  printf("Signed short min/max: %hd/%hd\n", SHRT_MIN, SHRT_MAX );

  //(2^16)-1
  printf("Unsigned short min/max: %hu/%hu\n", 0, USHRT_MAX );

  printf("Size of int: %lu\n", sizeof(int));

  //-(2^31) à (2^31)-1
  printf("Signed int min/max: %d/%d\n", INT_MIN, INT_MAX );

  //0 à (2^32)-1
  printf("Unsigned int min/max: %u/%u\n", 0, UINT_MAX );
  
  printf("Size of long: %lu\n", sizeof(long));

  //-(2^63) à (2^63)-1
  printf("Signed long min/max: %ld/%ld\n", LONG_MIN, LONG_MAX );

  //0 à (2^64)-1
  printf("Unsigned long min/max: %lu/%lu\n", 0L, ULONG_MAX );

  printf("Size of llong: %lu\n", sizeof(long long)); 
  
  //sizeof(long long) = sizeof(long) = 8 donc même sauf qu'on doit modifier 0 défini comme 0 long long et le type %lld et %llu
  printf("Signed llong min/max: %lld/%lld\n", LLONG_MIN, LLONG_MAX );
  printf("Unsigned llong min/max: %llu/%llu\n", 0LL, ULLONG_MAX );
  return EXIT_SUCCESS;
}
*/

//ex2
#include <stdio.h>
#include <stdlib.h>

int main(){
  int entiers[10] = { 0, -0, -1, 11, 96, 4567, -255, 582, 2147483700, 4294967416 };
  int a = 0;
  do{
    printf("%d\n", entiers[a]);
    a += 1;
  } while(a<10);
  return EXIT_SUCCESS;
}

