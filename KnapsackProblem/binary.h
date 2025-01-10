#pragma once

//Recebe um valor numérico de 16 bits para ligar um determinado bit desse valor.
unsigned short bitOn(unsigned short, int);

//Recebe um valor numérico de 16 bits para desligar um determinado bit desse valor.
unsigned short bitOff(unsigned short, int);

//Faz a verificação se o bit no índice passado está ligado ou não.
bool verifyBit(unsigned short, int);

//Faz uma opração AND binaria.
unsigned short binaryAND(unsigned short, unsigned short);

//Faz uma operação OR binaria.
unsigned short binaryOR(unsigned short, unsigned short);

//Retorna os 8 bits mais baixos de um valor de 16 bits.
unsigned short lowerBits(unsigned short);

//Retorna os 8 bit mais altos de um valor de 16 bits.
unsigned short upBits(unsigned short);