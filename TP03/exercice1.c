/*
//Affichage, tailles et limitations des différentes représentations flottantes

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
double flottants[12] = { 0.0,
			 -0.0,
			 123456123456123456,
			 1234561234561234561234,
			 1234561234561234561234.0,
			 0.123456123456123456123456,
			 0.000123456123456123456123456,
			 0.000000123456123456123456123456,
			 0.0000000000000123456123456123456123456,
			 1.23456123456123456123456e-14,
			 1.23456123456123456123456e-128,
			 1.23456123456123456123456e-324 };
int i = 0;
while (i<12){
printf("%.10f\n", flottants[i]);
i++;
}
}
*/


/*
#include <stdlib.h>
#include <stdio.h>
#include <float.h>

//différentes tailles entre float double et long double
int main() {
  printf("Size of float: %lu\n", sizeof(float));
  printf("Min/Max value of a float: %.5g/%.5g\n", FLT_MIN, FLT_MAX);
  printf("Precision of a float: %u digits\n\n", FLT_DIG);
  printf("Size of double: %lu\n", sizeof(double));
  printf("Min/Max value of a double: %.5g/%.5g\n", DBL_MIN, DBL_MAX);
//min=2.2251e-308 et max=1.7977e+308 pourquoi pas un rapport de 2 entre les deux nombre de base comme pour float et long double?
  printf("Precision of a double: %u digits\n\n", DBL_DIG);
  printf("Size of long double: %lu\n", sizeof(long double));
  printf("Min/Max value of a long double: %.5Lg/%.5Lg\n", LDBL_MIN,LDBL_MAX);
  printf("Precision of a long double: %u digits\n", LDBL_DIG);


//pas compris pourquoi les deux dernières valeurs affichées, un des deux qui n'est pas un multiple de 0.1 et l'autre négative alors que "if(f<0.0){quitter}"
    double f;
  for (f = 1.0; f != 0.0; f -= 0.1) {
    printf("%g\n", f);
    if (f < 0.0) exit(EXIT_FAILURE);
  }


  return EXIT_SUCCESS;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(){
  int val;
  for(val=16777200; val<16777250; val++){
  printf("%d -> %f\n", val, (double)val);
  //Pourquoi (float)val affiche les bonnes valeurs au début mais au bout d'un moment ça recopie 3 fois d'affilée les mêmes floats...?
  }
  printf("float: %ld\n", FLT_MANT_DIG);
  //float = 24 = ???
  printf("double: %ld\n", DBL_MANT_DIG);
  //double = 53 = ???
  return EXIT_SUCCESS;
}
//Combien de valeurs différentes peut-on coder avec un float ?
//même qu'un int, 4 octets? donc (2^31^2)-1 = (2^62)-1 floats différents?

