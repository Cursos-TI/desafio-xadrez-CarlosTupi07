#include <stdio.h>

int main(){

    int opcao, peca, i, j = 1;

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
        printf("4) CAVALO\n");
        printf("escolha uma opção:");
        scanf("%d", &peca);


        switch (peca)
        {
        case 1:
            
            while (i <= 5)
            {
                printf("TORRE MOVE UMA CASA PARA DIREITA\n");
                i++;
            } 
            break;

            case 2:

            do
            {
               printf("BISPO MOVE UMA CARA PARA CIMA - DIREITA\n");
               i++;
            } while (i <= 5);
            

            break;

            case 3:

            for ( i = 1; i <= 8; i++)
            {
               printf("RAINHA MOVE UMA CASA PARA ESQUERDA\n");
            }
            

            break;

            case 4:

            while (j--)
            {
                for (int i = 1; i <= 2; i++)
                 { 
                    printf("CAVALO MOVE UMA CASA PARA BAIXO\n");  


                }

                printf("CAVALO MOVE UMA CASA PARA ESQUERDA");
                printf("\n");
            }
       
               
             
            break;


        break;
        
        default:
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
        break;
    }


    return 0;
}