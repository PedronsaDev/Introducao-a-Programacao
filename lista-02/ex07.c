// Exercio 07:
//
// Faça um programa que simule a quantidade de penalidades de cada veículo,
// dadas pelas 3 etapas de fiscalização de trânsito em um trecho da avenida.
//
// Os veículos são classificados em Carro (C), Moto (M) e Caminhão (T).
//
// Os veículos que passam nesse trecho são monitorados por 3 dispositivos,
// um para cada faixa existente nessa avenida, penalizando veículos que não se adequarem.
//
// Os dispositivos monitoram as seguintes condições:
//
// Primeira faixa (1): permitido somente carros e motos;
// Segunda faixa (2): permitido somente carros;
// Terceira faixa (3): permitido somente carros e caminhões.
//
// Em adicional às restrições de faixa acima, é aplicado um rodízio de tráfego 
// que segue as seguintes regras de excessão, penalizando novamente os veículos que violarem:
//
// Caminhões não trafegam no período entre 16h-18h;
// Motos são permitidas trafegar na segunda faixa no período entre 5h-7h e 16h-19h;
// Carros não trafegam na terceira faixa a partir das 19h.
//
// No fim da avenida, ocorre a fiscalização de um semáforo de 3 estados, 
// no qual o veículo é penalizado se ultrapassar o semáforo nos estados: 
// vermelho (V) ou amarelo (A). No estado verde (G), não há penalidade.

#include <stdio.h>

int main() {
    char veiculo, semaforo;
    int hora, faixa, penalidades = 0;

    scanf(" %c %d %d %c", &veiculo, &hora, &faixa, &semaforo);

    if (veiculo == 'C') {
        if (hora >= 19 && faixa == 3) 
            penalidades++;
    } else if (veiculo == 'M') {
        if (faixa == 2){
            if(!(hora >= 5 && hora <= 7) && !(hora >= 16 && hora <= 19)) {
                penalidades++;
            }
        } else if (faixa == 3) {
            penalidades++;
        }
    } else { // Caminhao
        if (faixa <= 2) {
            penalidades++;
        }
        if (hora >= 16 && hora <=18) {
            penalidades++;
        }
    }

    if (semaforo != 'G') {
        penalidades++;
    }

    printf("%d\n", penalidades);
    return 0;
}
