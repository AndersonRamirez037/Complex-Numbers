#include "main.h"
#include <math.h>
/*
 * argument - function that returns the argument of a given complex number.
 * @complex
 * return float.
*/
double argument(complex c){
    return atan2(c.im, c.re);
}