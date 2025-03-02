#include <stdio.h>
 
int main() {
 
 //Desafio-Super-Trunfo.c

  /*
  
  carta 01 do jogo super trunfo

  ESTADO: amazonas vai ganhar a letra "A"

  CÓDIGO DA CARTA: vai ser "A01"-a primeira letra do estado seguida do numero "1"

  NOME DA CIDADE: Manaus

  POPULACAO: 2.676.936

  ÁREA(em km²): 11.401  km²

  PIB: 103.281 bilhões de reais

  NUMERO DE PONTOS TURÍSTICOS: 51

  */
  
  
    int Carta1;
    char estado1[50];
    char codigo1[50];
    char cidade1[50];
    int populacao1[50];
    float area1[50];
    float PIB1[50];
    int turisticos1[50];


    printf("carta1\n");

    printf("Digite o estado: \n");
    scanf("%c", &estado1);
    printf("estado: %c\n", estado1);


    printf("Digite o código: \n");
    scanf("%s", &codigo1);
    printf("código: %s\n", codigo1);


    printf("Digite a o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("cidade: %s\n", cidade1);


    printf("Digite a população: \n");
    scanf("%s", &populacao1);
    printf("população: %s \n", populacao1);


    printf("Digite a área: \n");
    scanf("%s", &area1);
    printf("área: %s\n", area1);


    printf("Digite o PIB: \n");
    scanf("%s", &PIB1);
    printf("PIB: %s\n", PIB1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &turisticos1);
    printf("pontos turisticos: %d\n", turisticos1);

    /*
  
  carta 02 do jogo super trunfo

  ESTADO: Ceara "B"

  CÓDIGO DA CARTA: vai ser "C02"-a primeira letra do estado seguida do numero "2"

  NOME DA CIDADE: Fortaleza

  POPULACAO: 2.429.000

  ÁREA(em km²): 313,8 km²

  PIB: 73 bilhões de reais

  NUMERO DE PONTOS TURÍSTICOS: 60

  */

    int Carta2;
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2[50];
    float area2[50];
    float PIB2[50];
    int turisticos2[50];


    printf("carta2\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado2);
    printf("estado: %s\n", estado2);


    printf("Digite o código: \n");
    scanf("%s", &codigo2);
    printf("código: %s\n", codigo2);


    printf("Digite a o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("cidade: %s\n", cidade2);


    printf("Digite a população: \n");
    scanf("%s", &populacao2);
    printf("população: %s \n", populacao2);


    printf("Digite a área: \n");
    scanf("%s", &area2);
    printf("área: %s\n", area2);


    printf("Digite o PIB:\n");
    scanf("%s", &PIB2);
    printf("PIB:  %s\n", PIB2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turisticos2);
    printf("pontos turisticos:  %d\n", turisticos2);
  
    /*
    carta1

    Digite o estado: 

    A

estado: A

Digite o código:

A01

código: A01

Digite a o nome da cidade:

Manaus

cidade: Manaus

Digite a população:

2676936

população: 2676936 

Digite a área:

11401

área: 11401

Digite o PIB:

103281

PIB: 103281

Digite a quantidade de pontos turisticos:

51

pontos turisticos: 51

carta2

Digite o estado:

C

estado: C

Digite o código:

C02

código: C02

Digite a o nome da cidade:

Fortaleza

cidade: Fortaleza

Digite a população:

2429000

população: 2429000 

Digite a área:

313

área: 313

Digite o PIB:

73000

PIB:  73000

Digite a quantidade de pontos turisticos:

60

pontos turisticos:  60
*/
   
return 0;
}