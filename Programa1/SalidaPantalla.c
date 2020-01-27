#include <stdio.h>
#include <stdlib.h>

int main(){
    int i1=46;
    printf("%d, %i, %x, %X, %o, \n", i1, 46, i1, i1, i1); //46, 46, 2e, 2E, 56
    printf("%d, %x, %o \n", 0x100, 0100, 100); //256, 40, 144
    /*
    %d Formato decimal
    %i Formato decimal
    %x Formato hexadecimal letras en minúsculas.
    %X Formato hexadecimal letras en mayúsculas. 
    %o Fomato octal
    */

   char c1 = 80, c2 = 'Q';
   printf("%c, %d, %x\n", c1, c1, c1);   // P, 80, 50
   printf("%c, %d, %x\n", c2, c2, c2);   // Q, 81, 51
    // "Traducción" de Código ASCII 

    float f1 = 3.1416, f2 = 1234000, f3 = 0.000001234;
    printf("%f\t %e\t %g\n", f1, f1, f1);  // 3.141600,3.141600e+000,3.1416
    printf("%f\t %e\t %g\n", f2, f2, f2);  // 1234000.000000,1.234000e+006,1.234e+006
    printf("%f\t %e\t %g\n", f3, f3, f3);  // 0.000001,1.234000e-006,1.234e-006
    //$f y %e siempre utilizaron 6 decimales
    //$g sólo toma los decimales que requiere. 

    float f4 = 123.4567;
    printf("%.1f \t %.3f \t", f4, f4); //123.5 123.457 
    //Imprime dependiendo de la cantidad de decimales que se pidió. 


    system("PAUSE");
    return 0;
}
