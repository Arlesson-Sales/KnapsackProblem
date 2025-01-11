#pragma once

//Recebe um valor num�rico de 16 bits para ligar um determinado bit, setando seu valor para 1.
unsigned short bitOn(unsigned short, int);

//Recebe um valor num�rico de 16 bits para desligar um determinado bit, setando seu valor para 0.
unsigned short bitOff(unsigned short, int);

//Faz a verifica��o se o bit no �ndice passado est� ligado ou n�o, se possui o valor 1.
bool verifyBit(unsigned short, int);

//Faz uma opera��o AND binaria entre valores de 16 bits.
unsigned short binaryAND(unsigned short, unsigned short);

//Faz uma opera��o OR binaria entre dois valores de 16 bits.
unsigned short binaryOR(unsigned short, unsigned short);

//Retorna os 8 bits mais baixos de um valor de 16 bits, �ndice 15 ao 8.
unsigned short getLowerBits(unsigned short);

//Retorna os 8 bit mais altos de um valor de 16 bits, do �ndice 7 ao 0.
unsigned short getUpperBits(unsigned short);