#include <stdio.h>

int main(){

    int opcao, peca, i;

    printf("********Bem vindo ao Xadrez********\n");
    printf("Menu principal\n");
    printf("1) Iniciar jogo\n");
    printf("2) regras\n");
    printf("3) sair do jogo\n");
    printf("escolha uma opção:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        printf("escolha a peça que quer mover\n");
        printf("1) TORRE\n");
        printf("2) BISPO\n");
        printf("3) RAINHA\n");
        printf("escolha uma opção:");
        scanf("%d", &peca);

        switch (peca)
        {
        case 1: //primeiro case executa a estrutura de repetição while e o loop vai ate 5
            
            while (i <= 5)
            {
                printf("TORRE MOVE UMA CASA PARA DIREITA\n");
                i++;
            } 
            
            break;

            case 2: //segundo case a estrutura é a do-while e o loop vai ate 5

            do
            {
               printf("BISPO MOVE UMA CARA PARA CIMA - DIREITA\n");
               i++;
            } while (i <= 5);
            

            break;

            case 3: // terceiro case a estrutura é o for iniciando com 1 e vai ate o 8 para o loop ser até 8
            for ( i = 1; i <= 8; i++)
            {
               printf("RAINHA MOVE UMA CASA PARA ESQUERDA\n");
            }
            

            break;
            
                
        default:
         printf("opção invalida");

            break;
        }

        

        break;
    

    case 2:
       printf("Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.\n");
 
        printf("Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: Cima, Direita).\n");
 
        printf("Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.\n");

        break;


     case 3:

     printf("********saindo********");

        break;

        
    default:

    printf("opção invalida");
        break;
    }


    return 0;
}