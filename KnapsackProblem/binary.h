#pragma once

//Recebe um valor num�rico de 16 bits para ligar um determinado bit desse valor.
unsigned short bitOn(unsigned short, int);

//Recebe um valor num�rico de 16 bits para desligar um determinado bit desse valor.
unsigned short bitOff(unsigned short, int);

//Faz a verifica��o se o bit no �ndice passado est� ligado ou n�o.
bool verifyBit(unsigned short, int);
