/*
 ================= Criando as Cartas do Super Trunfo =============
 > Estado: Uma letra de 'A' a 'H'. Tipo: char
 > Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string) 
 > Nome da Cidade. Tipo: char[] (string) 
 > População. Tipo: int 
 > Área (em km²). Tipo: float 
 > PIB. Tipo: float
 > Número de Pontos Turísticos. Tipo: int


 ---- MUDANÇA NIVEL INTERMEDIARIO
 > Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
 > Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
 
 > Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.



 ---- MUDANÇA NIVEL AVANÇADO
 > A população agora deve ser armazenada como unsigned long int para acomodar números maiores. As demais informações permanecem com os mesmos tipos.
 
 > Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
 
 > Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
 
 > Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).

 ======= PARTE 2 =====

Comparar um atributo escolhido: Você deverá escolher apenas um dos atributos numéricos (População, Área, PIB, Densidade Populacional ou PIB per capita) para realizar a comparação entre as duas cartas. Essa escolha deve ser feita diretamente no código, não pela entrada do usuário.
 
Determinar a carta vencedora:
 
Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.
 
Para Densidade Populacional, a carta com o menor valor vence.
 
Exibir o resultado da comparação: O programa deve exibir, de forma clara, qual carta venceu a comparação, incluindo o atributo utilizado na comparação e os valores das duas cartas para aquele atributo. Exemplo:
 

Comparação de cartas (Atributo: População):
Carta 1 - São Paulo (SP): 12.300.000
Carta 2 - Rio de Janeiro (RJ): 6.000.000
Resultado: Carta 1 (São Paulo) venceu!

 */

#include <stdio.h>

char UF1, UF2;
char nomeCidade1[50],nomeCidade2[50],CodUF1[5],CodUF2[5];
float Area1, Area2, PIB1, PIB2, DensPop1, DensPop2, PIBC1, PIBC2;
int Turistico1, Turistico2, SuperPoder1, SuperPoder2;
unsigned long int Populacao1, Populacao2;

int main(){
  for (int i = 0; i < 2; i++) {
    printf("\nDigite a Inicial do Estado %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%c", &UF1);
    } else {
      scanf("%c", &UF2);
    }

    printf("\nDigite o Codigo da Carta %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%s", &CodUF1);
    } else {
      scanf("%s", &CodUF2);
    }

    printf("\nDigite o Nome da Cidade %d (Utilize _ Ex: Sao_Paulo): ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%s", &nomeCidade1);
    } else {
      scanf("%s", &nomeCidade2);
    }

    printf("\nDigite o Tamanho da Populacao da Cidade %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%d", &Populacao1);
    } else {
      scanf("%d", &Populacao2);
    }

    printf("\nDigite a Area (em km^2) da Cidade %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%f", &Area1);
    } else {
      scanf("%f", &Area2);
    }

    printf("\nDigite o PIB da Cidade %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%f", &PIB1);
    } else {
      scanf("%f", &PIB2);
    }

    printf("\nDigite o Numero de Pontos Turisticos da Cidade %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%d", &Turistico1);
    } else {
      scanf("%d", &Turistico2);
    }
  }

  for (int i = 0; i < 2; i++) {
    printf("\nCarta %d: ", i + 1);
    if (i == 0) {
      printf("\nEstado: %c", UF1);
      printf("\nCodigo: %s", CodUF1);
      printf("\nNome da Cidade: %s", nomeCidade1);
      printf("\nPopulacao: %d", Populacao1);
      printf("\nArea: %.2f km^2", Area1);
      printf("\nPIB: %.2f Bilhoes de R$", PIB1);
      printf("\nNum. de Pontos Turisticos: %d\n", Turistico1);
      DensPop1 = (float)Populacao1 / Area1;
      printf("\nDensidade Populacional: %.2f hab/km^2", DensPop1);
      PIBC1 = (float)(PIB1 *= 1e9) / (Populacao1);
      printf("\nPIB per Capita: %.2f R$\n", PIBC1);
    } else {
      printf("\nEstado: %c", UF2);
      printf("\nCodigo: %s", CodUF2);
      printf("\nNome da Cidade: %s", nomeCidade2);
      printf("\nPopulacao: %d", Populacao2);
      printf("\nArea: %.2f km^2", Area2);
      printf("\nPIB: %.2f Bilhoes de R$", PIB2);
      printf("\nNum. de Pontos Turisticos: %d\n", Turistico2);
      DensPop2 = (float)Populacao2 / Area2;
      printf("\nDensidade Populacional: %.2f hab/km^2", DensPop2);
      PIBC2 = (float)(PIB2 *= 1e9) / Populacao2;
      printf("\nPIB per Capita: %.2f R$\n", PIBC2);
    }
  }

  printf("\n==== COMPARACAO DE CARTAS (Atributo Densidade Populacional)=====");
  printf("\nDensidade Populacional: Carta 1 - %s: %.2f", nomeCidade1, DensPop1);
  printf("\nDensidade Populacional: Carta 2 - %s: %.2f", nomeCidade2, DensPop2);
  printf("\nResultado: Carta %d (%s) venceu ", (DensPop1 < DensPop2)? 1: 2,(DensPop1 < DensPop2)? nomeCidade1: nomeCidade2);

  return 0;
}