# 🎒 Knapsack Problem - Solução com Algoritmos Genéticos

Este repositório contém uma solução para o problema da mochila (Knapsack Problem) utilizando algoritmos genéticos. O projeto foi desenvolvido em C++ como parte do curso de programação de computadores do canal [Judson Santiago](https://www.youtube.com/@JudSan).

## Descrição do Problema

O problema da mochila consiste em selecionar um conjunto de objetos para levar em uma mochila de forma que o valor total dos objetos seja maximizado, sem exceder a capacidade de peso da mochila. Cada objeto possui um peso e um valor associado.

## 💡 Solução Proposta

A solução proposta utiliza algoritmos genéticos para encontrar a melhor combinação de objetos. A mochila é representada por um valor de 16 bits, onde cada bit `1` indica que o objeto está na mochila e cada bit `0` indica que o objeto não está.

### 📄 Estrutura do Projeto

O projeto está organizado da seguinte forma:

- **binary.h / binary.cpp**: Contém funções para manipulação de bits, como ligar/desligar bits, verificar o estado de um bit, e operações binárias AND e OR.
- **genetic.h / genetic.cpp**: Implementa as operações genéticas, como cruzamento de ponto único, cruzamento aritmético, mutação simples e mutação dupla. Também inclui a função `verifySolution` que verifica se uma solução é válida (ou seja, se o peso total não excede a capacidade da mochila).
- **main.cpp**: Contém a função principal que testa as soluções iniciais, gera novas soluções através de operações genéticas e verifica a validade das novas soluções.
