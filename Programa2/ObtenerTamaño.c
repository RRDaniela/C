#include <stdio.h>
#include <stdlib.h>

int main(){
    int s;
    //1 byte = 8 bits
    s= sizeof(unsigned char);
    printf("%d byte(s)\n", s );

    //x4 = ¿Cuánto espacio en la memoria abarca?
    s=sizeof(long);
    printf("%d byte(s)\n", s);

    s = sizeof(float);
    printf("%d byte(s) \n",s);

    short edad = 35;
    s = sizeof(edad);
    printf("%d byte(s) \n", s);

    char opcion = 'C';





    system("PAUSE");
    return 0;
}