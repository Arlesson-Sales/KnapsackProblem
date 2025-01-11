#pragma once

//Faz o cruzamento de ponto unico entre dois valores de 16 bits, retornando um novo valor que contem a fusão desses bits.
unsigned short singlePointCrossing(unsigned short, unsigned short);

//Faz o cruzamento aritimético entre dois valores de 16 bits.
unsigned short arithmeticCrossing(unsigned short, unsigned short);

//Faz uma mutação simples em um valor de 16 bits.
unsigned short simpleMutation(unsigned short, int);

//Faz uma mutação dupla em um valor de 16 bits.
unsigned short doubleMutation(unsigned short, int, int);