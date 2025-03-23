#include <stdio.h>

    void movertorre(int casas){    // USANDO RECURCIVIDADE PARA ESPELHA A LOGICA DO MEU CODIGO
        if(casas > 0){
            printf("TORRE MOVE DIREITA\n");
            movertorre(casas - 1);
        }
    }    

    void moverbispo(int i){ 

      while (i > 0)     //LOOPS ANINHADOS PARA O MOVIMENTO DO BISPO
      { 
        int j = 1;        
        while (j > 0)      
        { printf("BISPO MOVE HORIZONTAL\n");
           j--;
        }
            printf("BISPO MOVE VERTICAL\n");
            i--;
        
       }
       
    }

    void moverrainha(int casas){ //MOVIMENTO DA RAINHA 
        if(casas > 0){
            printf("RAINHA MOVE ESQUERDA\n");
            moverrainha(casas - 1);
        }

    }

    void movercavalo() {
       for (int i = 0; i < 1; i++)   ///MOVIMENTO DO CAVALO USANDO LOOPS ANINHADOS COMPLEXO COM 3 VARIAVEIS.
       {    printf("CAVALO MOVE CIMA\n");
        
         for (int j = 0; j < 1; j++)
       {    
           
            printf("CAVALO MOVE CIMA\n"); 

                for (int k = 0; k < 1; k++)
                {
                    printf("CAVALO MOVE DIREITA\n");break;
                    
                }
                
        }
       
       
    
       }
       
    }
    

int main(){

    int opcao, peca, i = 1, j = 1;
 


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
            
             movertorre(5);
           
              
           
            break;

            case 2:
                



             moverbispo(5);
            

            break;

            case 3:

            
             moverrainha(8);
           
            

            break;

            case 4:

            movercavalo();
       
               
             
            break;


        break;
        
        default:
            printf("Opção inválida! Tente novamente.\n");
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
        printf("Opção inválida! Tente novamente.\n");
        break;
    }


    return 0;
}