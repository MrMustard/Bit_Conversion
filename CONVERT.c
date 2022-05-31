// Este pequeño codigo es para convertir una variable de 16 bits en dos variables de 8 bits y vice versa



uint16_t Var;// varaible de 16 bits 
uint8_t Byte_Buff [2];// guardaremos Byte_Buff[0] -> LOW BYTE, Byte_Buff[1] -> HIGH BYTE
var = 0X0FFA;//  equivalente al siguente valor en binario = 	0b	0000	1111	1111	1010


/*partir varaible de 16 bits en 2 de 8*/

Byte_Buff [0] = Var & 0XFF;// guardamos el byte bajo (LOW BYTE)
Byte_Buff [1] = Var >> 8 ;//guardamos el byte alto 8HIGH BYTE)





/*unir 2 varaibles de 8 bits en una de 16 bits*/



Var = (Byte_Buff[1] << 8 ) | Byte_Buff 0); // Byte_Buff[1] = HIGH BYTE, Byte_Buff[0] = LOW BYTE