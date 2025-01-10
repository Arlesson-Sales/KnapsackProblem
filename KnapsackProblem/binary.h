#pragma once

//Recebe um valor num�rico de 16 bits para ligar um determinado bit desse valor.
unsigned short bitOn(unsigned short, int);

//Recebe um valor num�rico de 16 bits para desligar um determinado bit desse valor.
unsigned short bitOff(unsigned short, int);

//Faz a verifica��o se o bit no �ndice passado est� ligado ou n�o.
bool verifyBit(unsigned short, int);

//Faz uma opra��o AND binaria.
unsigned short binaryAND(unsigned short, unsigned short);

//Faz uma opera��o OR binaria.
unsigned short binaryOR(unsigned short, unsigned short);

//Retorna os 8 bits mais baixos de um valor de 16 bits.
unsigned short lowerBits(unsigned short);

//Retorna os 8 bit mais altos de um valor de 16 bits.
unsigned short upBits(unsigned short);