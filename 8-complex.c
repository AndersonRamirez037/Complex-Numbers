#include "main.h"
#include <math.h>
/* 
 * complex_from_mod_arg - function that update the real and imaginary parts of a complex number given its modulus and arguments. 
 * @double, complex.
 * return nothing.
*/
void complex_from_mod_arg(double m, double arg, complex *c3){
    (*c3).re = m * cos(arg);
    (*c3).im = m * sin(arg);
}