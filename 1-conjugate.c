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
/*
void display_complex_number(complex c){
    if(c.re != 0 && c.im != 0){
        printf("%.0f + %.0fi\n",c.re,c.im);
        if(c.re == 0 && c.im != 0){
            printf("%.0fi\n",c.im);
        } else{
            printf("%.0f\n",c.re);
        }
    }
}
*/