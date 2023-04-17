#include "main.h"
#include <math.h>
#include <stdio.h>
/*
 * modulus - function that returns the modulus of a given complex number.
 * @complex
 * return float.
*/
double modulus(complex c){
    return sqrt(pow(c.re,2) + pow(c.im,2));
}