#pragma once

//Recebe um valor numérico de 16 bits para ligar um determinado bit desse valor.
unsigned short bitOn(unsigned short, int);

//Recebe um valor numérico de 16 bits para desligar um determinado bit desse valor.
unsigned short bitOff(unsigned short, int);

//Faz a verificação se o bit no índice passado está ligado ou não.
bool verifyBit(unsigned short, int);
