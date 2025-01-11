#pragma once

//Recebe um valor numérico de 16 bits para ligar um determinado bit, setando seu valor para 1.
unsigned short bitOn(unsigned short, int);

//Recebe um valor numérico de 16 bits para desligar um determinado bit, setando seu valor para 0.
unsigned short bitOff(unsigned short, int);

//Faz a verificação se o bit no índice passado está ligado ou não, se possui o valor 1.
bool verifyBit(unsigned short, int);

//Faz uma operação AND binaria entre valores de 16 bits.
unsigned short binaryAND(unsigned short, unsigned short);

//Faz uma operação OR binaria entre dois valores de 16 bits.
unsigned short binaryOR(unsigned short, unsigned short);

//Retorna os 8 bits mais baixos de um valor de 16 bits, índice 15 ao 8.
unsigned short getLowerBits(unsigned short);

//Retorna os 8 bit mais altos de um valor de 16 bits, do índice 7 ao 0.
unsigned short getUpperBits(unsigned short);