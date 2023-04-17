#include "main.h"
#include <stdio.h>
/*
 * conjugate - function that returns the conjugate of a given complex number. 
 * @complex
 * return
*/
complex conjugate(complex c){
    printf("%.0f - %.0fi\n",c.re, c.im);
    return c; 
}