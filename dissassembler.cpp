#include <stdio.h>
#include <iostream>

/* Disasembler hecho por Grandes chicos cool */

int Desensamblador(unsigned char *codigobuffer, int pece){

    unsigned char *codigo = &codigobuffer[pece];
    int opbytes = 1;
    /* imprimir en pantalla codigobuffer[pece] en formato hex */

    switch(*codigo){
        /* Move, load, store */
        case 0x00: 
        cout << "NOP"; 
        break; 


        /*Stack ops*/


        /*Jump*/


        /*call*/


        /*return */

        /*restart */

        /* increment and decrement */

        /*add*/

        /* substract */

        /*logical */

        /* rotate */

        /* specials */

        /* input output */

        /*control */
    }

}