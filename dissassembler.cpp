#include <iostream>
#include <fstream.h>

using namespace std;

/* Disasembler hecho por Grandes chicos cool */

int Desensamblador(unsigned char *codigobuffer, int pece){

    unsigned char *codigo = &codigobuffer[pece];
    int opbytes = 1;
    cout << hex << pece << endl;

    switch(*codigo){
        /* Move, load, store */
        case 0x00: 
        cout << "NOP" << endl; 
        break; 



        /*Stack ops*/
        case 0xc5
        cout << "Push B" << endl;
        break;

        case 0xd5
        cout << "Push D" << endl;
        break;

        case 0xe5
        cout << "Push H" << endl;
        break;

        case 0xf5
        cout << "Push  PSW" << endl;
        break;

        case 0xc1
        cout << "Pop B" << endl;
        break;

        case 0xd1
        cout << "Pop D" << endl;
        break;

        case 0xe1
        cout << "Pop H" << endl;
        break;

        case 0xf1
        cout << "PoP PSW" << endl;
        break;

        case 0xe3
        cout << "XTHL" << endl;
        break;

        case 0xf9
        cout << "SPHL" << endl;
        break;

        case 0x31
        cout << "LXI SP" << endl;
        break;

        case 0x33
        cout << "INX SP" << endl;
        break;

        case 0x3b
        cout << "DCX SP" << endl;
        break;

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

int main(argc, char**argv){

    char prueba[512];
    ifstream prueba()
    return 0;
}