// Exercicio 02:
//
// Você está se tornando um programador mais experiente, e seus algoritmos estão cada vez mais rebuscados. 
// Assim, você tem a brilhante ideia de fazer uma calculadora sofisticada.

#include <stdio.h>

int main() {
    int num1, num2, opcao;
    
    // Entrada dos dois números
    scanf("%d", &num1); 
    scanf("%d", &num2); 
    
    // Entrada da opção
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("%d\n", num1 + num2);
            break;
        case 2:
            printf("%d\n", num1 - num2);
            break;
        case 3:
            printf("%d\n", num2 - num1);
            break;
        case 4:
            printf("%d\n", num1 * num2);
            break;
        case 5:
            if (num2 == 0) printf("divisão por 0!\n");
            else printf("%.2f\n", (float)num1 / num2);
            break;
        case 6:
            if (num1 == 0) printf("divisão por 0!\n");
            else printf("%.2f\n", (float)num2 / num1);
            break;
        case 7:
            if (num2 == 0) printf("divisão por 0!\n");
            else printf("%d\n", num1 / num2);
            break;
        case 8:
            if (num1 == 0) printf("divisão por 0!\n");
            else printf("%d\n", num2 / num1);
            break;
        case 9:
            if (num2 == 0) printf("divisão por 0!\n");
            else printf("%d\n", num1 % num2);
            break;
        case 10:
            if (num1 == 0) printf("divisão por 0!\n");
            else printf("%d\n", num2 % num1);
            break;
        default:
            printf("opção inválida!\n");
            break;
    }

    return 0;
}
