#include <iostream>
#include <fstream.h>

using namespace std;

/* Disasembler hecho por Grandes chicos cool */

int Desensamblador(unsigned char *codigobuffer, int pece){



    unsigned char *codigo = &codigobuffer[pece];
    int opbytes = 1;
    cout << hex << pece << endl;

    switch(*codigo){

        /* Move */
        case 0x00: 
        cout << "NOP" <<endl; 
        break; 

        case 0x40: 
        cout<<"MOV B, B"<<endl; 
        break;
        
        case 0x41:
        cout<<"MOV B, C"<<endl;
        break;

        case 0x42: 
        cout<<"MOV B, D"<<endl;
        break;

        case 0x43: 
        cout<<"MOV B, E"<<endl;
        break;
        
        case 0x44: 
        cout<<"MOV B, H"<<endl;
        break;

        case 0x45: 
        cout<<"MOV B, L"<<endl; 
        break;
        
        case 0x46: 
        cout<<"MOV B, Memory"<<endl; 
        break;

        case 0x47:
        cout<<"MOV B, A"<<endl; 
        break;

        case 0x48: 
        cout<<"MOV C, B"<<endl; 
        break;
        
        case 0x49: 
        cout<<"MOV C, C"<<endl; 
        break;
        
        case 0x4a: 
        cout<<"MOV C, D"<<endl; 
        break;
        
        case 0x4b: 
        cout<<"MOV C, E"<<endl; 
        break;

        case 0x4c: 
        cout<<"MOV C, H"<<endl; 
        break;
        
        case 0x4d: 
        cout<<"MOV C, L"<<endl; 
        break;
        
        case 0x4e: 
        cout<<"MOV C, Memory"<<endl; 
        break;
        
        case 0x4f: 
        cout<<"MOV C, A"<<endl; 
        break;
        
        case 0x50: 
        cout<<"MOV D, B"<<endl; 
        break;
        
        case 0x51: 
        cout<<"MOV D, C"<<endl; 
        break;
        
        case 0x52: 
        cout<<"MOV D, D"<<endl; 
        break;

        case 0x53: 
        cout<<"MOV D, E"<<endl; 
        break;

        case 0x54: 
        cout<<"MOV D, H"<<endl;    
        break;

        case 0x55: 
        cout<<"MOV D, L"<<endl; 
        break;

        case 0x56: 
        cout<<"MOV D, Memory"<<endl;
        break;
        
        case 0x57: 
        cout<<"MOV D, A"<<endl; 
        break;
        
        case 0x58: 
        cout<<"MOV E, B"<<endl; 
        break;
        
        case 0x59: 
        cout<<"MOV E, C"<<endl; 
        break;
        
        case 0x5a: 
        cout<<"MOV E, D"<<endl; 
        break;
        
        case 0x5b: 
        cout<<"MOV E, E"<<endl; 
        break;

        case 0x5c: 
        cout<<"MOV E, H"<<endl; 
        break;
        
        case 0x5d: 
        cout<<"MOV E, L"<<endl; 
        break;
        
        case 0x5e: 
        cout<<"MOV E, Memory"<<endl; 
        break;
        
        case 0x5f: 
        cout<<"MOV E, A"<<endl; 
        break;

        case 0x60: 
        cout<<"MOV H, B"<<endl; 
        break;
        
        case 0x61: 
        cout<<"MOV H, C"<<endl; 
        break;
        
        case 0x62: 
        cout<<"MOV H, D"<<endl; 
        break;
        
        case 0x63: 
        cout<<"MOV H, E"<<endl; 
        break;
        
        case 0x64: 
        cout<<"MOV H, H"<<endl; 
        break;
        
        case 0x65: 
        cout<<"MOV H, L"<<endl; 
        break;
        
        case 0x66: 
        cout<<"MOV H, Memory"<<endl; 
        break;
        
        case 0x67: 
        cout<<"MOV H, A"<<endl; 
        break;
        
        case 0x68: 
        cout<<"MOV L, B"<<endl; 
        break;
        
        case 0x69: 
        cout<<"MOV L, C"<<endl; 
        break;
        
        case 0x6a: 
        cout<<"MOV L, D"<<endl; 
        break;
        
        case 0x6b: 
        cout<<"MOV L, E"<<endl; 
        break;
        
        case 0x6c: 
        cout<<"MOV L, H"<<endl; 
        break;
        
        case 0x6d: 
        cout<<"MOV L, L"<<endl; 
        break;
        
        case 0x6f: 
        cout<<"MOV L, A"<<endl; 
        break;
        
        case 0x70: 
        cout<<"MOV Memory, B"<<endl; 
        break;
        
        case 0x71: 
        cout<<"MOV Memory, C"<<endl; 
        break;
        
        case 0x72: 
        cout<<"MOV Memory, D"<<endl; 
        break;
        
        case 0x73: 
        cout<<"MOV Memory, E"<<endl; 
        break;
        
        case 0x74: 
        cout<<"MOV Memory, H"<<endl; 
        break;
        
        case 0x75: 
        cout<<"MOV Memory, L"<<endl; 
        break;
        
        case 0x77: 
        cout<<"MOV Memory, A"<<endl; 
        break;
        
        case 0x78: 
        cout<<"MOV A, B"<<endl; 
        break;
        
        case 0x79: 
        cout<<"MOV A, C"<<endl; 
        break;
        
        case 0x7a: 
        cout<<"MOV A, D"<<endl; 
        break;
        
        case 0x7b: 
        cout<<"MOV A, E"<<endl; 
        break;
        
        case 0x7c: 
        cout<<"MOV A, H"<<endl; 
        break;
        
        case 0x7d: 
        cout<<"MOV A, L"<<endl; 
        break;
        
        case 0x7e: 
        cout<<"MOV A, Memory"<<endl; 
        break;
        
        case 0x7f: 
        cout<<"MOV A, A"<<endl; 
        break;

        case 0x36: 
        cout<<"MVI M immediate memory"<<endl; 
        break;

        /* Load */
        
        case 0x01: 
        cout<<"LXI B"<<endl; 
        break;

        case 0x11: 
        cout<<"LXI D"<<endl; 
        break;

        case 0x21: 
        cout<<"LXI H"<<endl; 
        break;

        case 0x3A: 
        cout<<"LDA"<<endl; 
        break;
        
        case 0x0A: 
        cout<<"LDAX B"<<endl; 
        break;

        case 0x1A: 
        cout<<"STAX D"<<endl; 
        break;

        case 0x2A: 
        cout<<"LHLD"<<endl; 
        break;

        /*Exchange D & E, H & L Registers */

        case 0xEB: 
        cout<<"XCHG"<<endl; 
        break;



        /* Store*/

        case 0x02: 
        cout<<"STAX B"<<endl; 
        break;

        case 0x12: 
        cout<<"STAX B"<<endl; 
        break;
        
        case 0x32: 
        cout<<"STA"<<endl; 
        break;

        case 0x22: 
        cout<<"SHLD"<<endl; 
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
    ifstream prueba();
 
    return 0;
}
