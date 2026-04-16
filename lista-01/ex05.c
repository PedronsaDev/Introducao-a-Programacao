// Exercicio 05:
//
// Seu tio Orlando adora viajar para todos os cantos do mundo. 
// Contudo, não sabe muito sobre conversão de unidades de medida de comprimento. 
// Desta vez, ele irá para os Estados Unidos, que utiliza o Sistema Imperial de medidas, 
// e deseja converter metros para pés, polegadas, jardas e milhas.

#include <stdio.h>


int main(){

	// Temos que utilizar double(long float) 
	// por conta do numero de casas decimais
	double metros;
	scanf("%lf", &metros);

    double ft = metros * 3.28083989501; // Pes
    double in = metros * 39.37008;      // Polegadas
    double yd = metros * 1.09361;       // Jardas
    double mi = metros * 0.000621371;   // Milhas

	printf("%.1lf\n", ft);
	printf("%.1lf\n", in);
	printf("%.1lf\n", yd);
	printf("%.1lf\n", mi);
}
