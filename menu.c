#include <stdio.h>

int main(void) {
  char deseja_continuar = 's';
  float valor = 0;
  while (deseja_continuar == 's') {
    printf("\n**Menu da Lanchonete** \n");
    printf("100. Cachorro Quente - R$ 1.20 \n");
    printf("101. Hamburguer - R$ 5.00 \n");
    printf("102. Batata Frita - R$ 3.00 \n");
    printf("103. Sorvete - R$ 2.00 \n");
    int codigo, qtd;
    printf("Digite o codigo do produto e a quantidade: \n");
    scanf("%i %i", &codigo, &qtd);
    getchar();
    switch (codigo) {
    case 100: 
    printf("Voce comprou %i produtos do codigo %i", qtd, codigo);
    valor = valor + (1.2 * qtd); 
    break; 
    case 101: 
    printf("Voce comprou %i produtos do codigo %i", qtd, codigo);
    valor = valor + (5.0 * qtd); 
    break; 
    case 102: 
    printf("Voce comprou %i produtos do codigo %i", qtd, codigo);
    valor = valor + (3.0 * qtd); 
    break; 
    case 103: 
    printf("Voce comprou %i produtos do codigo %i", qtd, codigo);
    valor = valor + (2.0 * qtd); 
    break; 
      }
  
    printf("\n Voce deseja comprar outro produto? Responda: s ou n ");
    scanf("%c",&deseja_continuar);
    
    
  }
  printf("O valor a ser pago eh %f", valor); 
  
  
  return 0;
}
