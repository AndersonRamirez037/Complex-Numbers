#include "main.h"
#include <stdio.h>
/*
 * display_complex_number - function that displays the complex numbers. 
 * @complex
 * return nothing. 
*/
void display_complex_number(complex c){
    if(c.im < 0){
        printf("%.0f - i\n", c.re);
    } else if(c.im != 0 && c.im != 1){
        printf("%.0f + %.0fi\n",c.re,c.im);
    } else if(c.im == 1){
        printf("%.0f + i\n", c.re);
    } else{
        printf("%.0f\n",c.re);
    }
}