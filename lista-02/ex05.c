// Exercicio 05:
//
// Com a crescente aparição de casas de apostas na mídia, 
// você resolve dar uma chance para sua sorte, 
// e apostar uma pequena quantia do seu patrimônio.

// Visando automatizar uma parte do trabalho, 
// você resolve implementar um algoritmo para te ajudar em suas apostas. 
// Como você pretende começar com algo simples, 
// então escolhe um jogo de cartas clássico: Blackjack.
//
// As regras da casa de apostas são surpreendentemente simples:
//
// * Em caso de vitória no Blackjack, sua aposta é triplicada.
// * Em caso de derrota, você perde todo o dinheiro apostado.
// * Caso sua mão seja menor que 21 você pode escolher parar ou continuar, 
//   porém, você decide fazer isso por conta própria. 
// * Então, o programa apenas deve indicar que você está com uma mão menor que 21 
//   e seu saldo ainda se mantém o mesmo.

#include <stdio.h>

int main() {
   char carta1, carta2, carta3;
   int saldo, soma = 0, ases = 0;

   // Lendo as 3 cartas e o saldo de uma vez
   // O espaço antes de %c serve para ignorar espaços ou enters no buffer
   scanf(" %c %c %c %d", &carta1, &carta2, &carta3, &saldo);

   // Passo 1: Calcular valores das cartas (exceto Ás por enquanto)
   if (carta1 == 'J' || carta1 == 'Q' || carta1 == 'K') {
      soma += 10;
   } else if (carta1 == 'A') {
      ases++; // Contamos os As para decidir o valor depois
   } else {
      soma += carta1 - '0'; // Converte char numerico para int
   }

   if (carta2 == 'J' || carta2 == 'Q' || carta2 == 'K') {
      soma += 10;
   } else if (carta2 == 'A') {
      ases++;
   } else {
      soma += carta2 - '0';
   }

   if (carta3 == 'J' || carta3 == 'Q' || carta3 == 'K') {
      soma += 10;
   } else if (carta3 == 'A') {
      ases++;
   } else {
      soma += carta3 - '0';
   }

   // Passo 2: Calcular o valor dos As da forma mais vantajosa
   for (int i = 0; i < ases; i++) {
      if (soma + 11 <= 21) {
         soma += 11;
      } else {
         soma += 1;
      }
   }
   // Enquanto a soma for maior que 21 e ainda tivermos As para converter
   // transformamos um As de 11 para 1 (subtraindo 10)
   while (soma > 21 && ases > 0) {
      soma -= 10;
      ases--;
   }

   // Passo 3: Lógica de resultado
   if (soma == 21) {
      printf("Blackjack! Rodada garantida!\n");
      saldo *= 3;
   } else if (soma > 21) {
      printf("Estourou! Suas cartas somam: %d\n", soma);
      saldo = 0;
   } else {
      printf("Mao abaixo de 21! Suas cartas somam: %d\n", soma);
      // Saldo se mantém o mesmo conforme a regra
   }

   printf("Saldo atual da rodada: %d\n", saldo);
   return 0;
}
