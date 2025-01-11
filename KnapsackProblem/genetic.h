#pragma once

//Faz o cruzamento de ponto unico entre dois valores de 16 bits, retornando um novo valor que contem a fus�o desses bits.
unsigned short singlePointCrossing(unsigned short, unsigned short);

//Faz o cruzamento aritim�tico entre dois valores de 16 bits.
unsigned short arithmeticCrossing(unsigned short, unsigned short);

//Faz uma muta��o simples em um valor de 16 bits.
unsigned short simpleMutation(unsigned short, int);

//Faz uma muta��o dupla em um valor de 16 bits.
unsigned short doubleMutation(unsigned short, int, int);