// Exercicio 03:
//
// Clodovildo é um estudante de astronomia que adora estudar 
// sobre as mais diversas estrelas, mas sempre se confunde 
// quando vê a temperatura sendo medida em graus Fahrenheit, 
// então decidiu fazer um programa que possa converter a temperatura 
// para graus Celsius e graus Kelvin. Ele acabou se confundindo 
// na hora de programar e errou várias coisas, então decidiu pedir 
// para o seu grande amigo, você, fazer esse programa para ele. 
// Faça um programa que transforma a temperatura de graus Fahrenheit 
// em Celsius e Kelvin.

#include <stdio.h>


int main(){

    double fahrenheit;
    scanf("%lf", &fahrenheit);

    double celsius = ((fahrenheit-32)*5)/9;
    double kelvin = celsius + 273.15;
    
    printf("%.2lf C\n", celsius);
    printf("%.2lf K", kelvin);
    
    return 0;
}
