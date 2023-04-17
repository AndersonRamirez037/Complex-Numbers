#include "main.h"
#include <stdio.h>
/*
 * addition - function that performs the addition operation to complex numbers.  
 * @complex 
 * return nothing. 
*/
void addition(complex c1, complex c2, complex *c3){
    (*c3).re = c1.re + c2.re;
    (*c3).im = c1.im + c2.im;
}