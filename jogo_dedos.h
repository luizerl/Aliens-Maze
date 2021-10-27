/**Algoritmos e programacao de computadores
 *@autor: Luiz Eduardo Rodrigues Lima
 *@matricula: 18/0126296*/

#include <stdio.h>
#include <stdlib.h>


int jogo_dedo(int posicao_heroi_x, int posicao_heroi_y, int *energia_PTR){
      int x = posicao_heroi_x, y = posicao_heroi_y;
      if( x == 6 && y == 44 && *energia_PTR != 0){
            int hal_esq = 1, hal_dir = 1;
            int user_esq = 1, user_dir =1;
            char hal_escolha, hal_ataca;
            int aleatorio1,aleatorio2;
            char user_escolha,user_ataca;
            char dividir_maos;

            printf("\n");
            printf(".--------------------------------------------------------------.\n");
            printf("|       *******  ******* *******   *******  ********           |\n");
            printf("|       **    ** **      **    **  **   **  **                 |\n");
            printf("|       **    ** *****[ J O G O  D O S] **  ********           |\n");
            printf("|       **    ** **      **    **  **   **        **           |\n");
            printf("|       *******  ******* *******   *******  ********           |\n");
            printf("|     _______________._________________.___________________    |\n");
            printf("|    |        B E M - V I N D O  A O  D E S A F I O        |\n");
            printf("|    |_____________________________________________________|   |\n");
            printf(".--------------------------------------------------------------.\n");
            printf(".______________________________________________________________.\n");
            printf("|               [ P R I M E I R A R O D A D A ]                |\n");
            printf("|______________________________________________________________|\n");
            printf("|                       [H A L 9 0 0 0]                        |\n");
            printf(".--------------------------------------------------------------.\n");
            printf("|        DIREITA: %d DEDO(S)  |  ESQUERDA: %d DEDO(S)            |\n",hal_dir,hal_esq);
            printf(".--------------------------------------------------------------.\n");
            printf("|                         [V O C E]                            |\n");
            printf(".--------------------------------------------------------------.\n");
            printf("|       ESQUERDA: %d DEDO(S) |  DIREITA: %d DEDO(S)              |\n",user_dir,user_esq);
            printf(".--------------------------------------------------------------.\n");

            while((hal_esq != 0 || hal_dir != 0) && (user_esq != 0 || user_dir != 0)){

                  printf("*******************************************************\n");
                  printf("* VOCE DESEJA USAR QUAL DA SUA MAOS PARA ATACAR? [D/E]*\n");
                  printf("*******************************************************\n");
                  scanf(" %c",&user_escolha);

                  while(user_escolha != 'D' && user_escolha != 'E' ){
                        printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                        scanf(" %c",&user_escolha);
                  }
                  printf("*******************************************************\n");
                  printf("* VOCE DESEJA ATACAR QUAL MAO DO SEU OPONENTE?   [D/E]*\n");
                  printf("*******************************************************\n");
                  scanf(" %c",&user_ataca);
                  while(user_ataca != 'D' && user_ataca != 'E'){
                        printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                        scanf(" %c",&user_ataca);
                  }

                  if(hal_esq != 0 && hal_dir != 0){
                        aleatorio1 = rand() % 3;
                        /* ESCOLHA */
                        if(aleatorio1 == 1){
                             hal_escolha = 'D';
                        }
                        if (aleatorio1 == 2){
                              hal_escolha = 'E';
                        }
                        /*ATACA*/
                        aleatorio2 = rand() % 3;
                        if(aleatorio2 == 1){
                              hal_ataca = 'D';
                        }
                        if(aleatorio2 == 2){
                              hal_ataca = 'E';
                        }

                  }
                  if(hal_esq == 0 && hal_dir !=0){
                       
                        hal_escolha = 'D';
                        aleatorio2 = rand() % 3;

                        if(aleatorio2 == 1){
                              hal_ataca = 'D';
                        }
                        if(aleatorio2 == 2){
                              hal_ataca = 'E';
                        }
                  }

                  if(hal_esq != 0 && hal_dir == 0){
                       
                        hal_escolha = 'E';
                        aleatorio2 = rand() % 3;

                        if(aleatorio2 == 1){
                              hal_ataca = 'D';
                        }
                        if(aleatorio2 == 2){
                              hal_ataca = 'E';
                        }
                  }

                  if(user_dir != 0){
                        if(user_escolha == 'D' && user_ataca == 'D'){
                              hal_dir = user_dir + hal_dir;

                              if( hal_dir == 5){
                                    printf("A MAO DIREITA DO OPONENTE MORREU\n");
                                    hal_dir = 0;
                              }
                              if (hal_dir > 5){
                                    hal_dir =  hal_dir - 5;
                              }
                        }}

                  else{
                        printf("A SUA MAO DIREITA MORREU, SELECIONE OUTRA:\n" );
                        scanf(" %c",&user_escolha);

                        while(user_escolha != 'E'){
                              printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                              scanf(" %c",&user_escolha);
                        }

                        printf("ATACAR QUAL MAO ? [D/E]\n");
                        scanf(" %c",&user_ataca);

                        while(user_ataca != 'D' && user_ataca != 'E' && user_ataca != '0'){
                        printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                        scanf(" %c",&user_ataca);
                        }

                  }

                  if (user_dir != 0){

                        if(user_escolha == 'D' && user_ataca == 'E'){
                              hal_esq = user_dir + hal_esq;

                              if( hal_esq == 5){
                                    printf("A MAO ESQUERDA DO OPONENTE MORREU\n");
                                    hal_esq = 0;
                              }
                              if (hal_esq > 5){
                                    hal_esq =  hal_esq - 5;
                              }
                        }}

                  else{
                        printf("A SUA MAO DIREITA MORREU, SELECIONE OUTRA:\n" );
                        scanf(" %c",&user_escolha);

                        while(user_escolha != 'E'){
                              printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                              scanf(" %c",&user_escolha);
                        }

                        printf("ATACAR QUAL MAO ? [D/E]\n");
                        scanf(" %c",&user_ataca);

                        while(user_ataca != 'D' && user_ataca != 'E' ){
                        printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                        scanf(" %c",&user_ataca);
                        }}

                  
                  /* MAO ESQUERDA (1773)*/

                  if (user_esq != 0){

                        if(user_escolha == 'E' && user_ataca == 'D'){
                              hal_dir = user_esq + hal_dir;

                              if( hal_dir == 5){
                                    printf("A MAO DIREITA DO OPONENTE MORREU\n");
                                    hal_dir = 0;
                              }
                              if (hal_dir > 5){
                                    hal_dir =  hal_dir - 5;
                              }
                        }}

                              else{
                                    printf("A SUA MAO ESQUERDA MORREU, SELECIONE OUTRA:\n" );
                                    scanf(" %c",&user_escolha);

                                    while(user_escolha != 'D'){
                                          printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                                          scanf(" %c",&user_escolha);
                                    }

                                    printf("ATACAR QUAL MAO ? [D/E]\n");
                                    scanf(" %c",&user_ataca);

                                    while(user_ataca != 'D' && user_ataca != 'E' ){
                                    printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                                    scanf(" %c",&user_ataca);
                                    }

                              }

                              if (user_esq != 0){

                                    if(user_escolha == 'E' && user_ataca == 'D'){
                                          hal_esq = user_esq + hal_esq;

                                          if( hal_esq == 5){
                                                printf("A MAO ESQUERDA DO OPONENTE MORREU\n");
                                                hal_esq = 0;
                                          }
                                          if (hal_esq > 5){
                                                hal_esq =  hal_esq - 5;
                                          }
                                    }}

                              else{
                                    printf("A SUA MAO ESQUERDA MORREU, SELECIONE OUTRA:\n" );
                                    scanf(" %c",&user_escolha);

                                    while(user_escolha != 'D'){
                                          printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                                          scanf(" %c",&user_escolha);
                                    }

                                    printf("ATACAR QUAL MAO ? [D/E]\n");
                                    scanf(" %c",&user_ataca);

                                    while(user_ataca != 'D' && user_ataca != 'E' ){
                                    printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                                    scanf(" %c",&user_ataca);
                                    }

                              }

                              if(hal_dir != 0){
                                    if(hal_escolha == 'D' && hal_ataca == 'D'){
                                          user_dir = user_dir + hal_dir;
                                          if (user_dir == 5)
                                          {
                                               printf("A SUMA MAO DIREITA MORREU\n");
                                               user_dir = 0;
                                          }
                                          if (user_dir > 5)
                                          {
                                                user_dir = user_dir - 5;
                                          }
                                          if ((user_dir + user_esq) %2 == 0 && user_esq ==0)
                                          {
                                                printf("PARECE QUE VOCE TEM %D DEDOS, DESEJA DIVIDI-LOS ENTRE AS DUAS MAOS? [S/N]\n");
                                                scanf(" %c",&dividir_maos);
                                                while(dividir_maos != 'S' && dividir_maos != 'N'){
                                                      printf("DIGITE UMA RESPOSTA VALIDA : [S/N]\n");
                                                      scanf(" %c",&dividir_maos);
                                                }

                                                if (dividir_maos == 'S')
                                                {
                                                            int dividir;
                                                            dividir =(user_esq + user_dir)/2;
                                                            user_dir = dividir;
                                                            user_esq = dividir;
                                                }
                                          }
                                    }
                                    if(hal_escolha =='D' && hal_ataca == 'E'){
                                          user_esq = user_esq + hal_dir;
                                          if (user_esq == 5)
                                          {
                                                printf("A SUA MAO ESQUERDA MORREU\n");
                                                user_esq = 0;
                                          }
                                          if (user_esq > 5)
                                          {
                                                user_esq = user_esq - 5;
                                          }
                                          if ((user_dir + user_esq) %2 == 0 && user_dir ==0)
                                          {
                                                printf("PARECE QUE VOCE TEM %D DEDOS, DESEJA DIVIDI-LOS ENTRE AS DUAS MAOS? [S/N]\n");
                                                scanf(" %c",&dividir_maos);
                                                while(dividir_maos != 'S' && dividir_maos != 'N'){
                                                      printf("DIGITE UMA RESPOSTA VALIDA : [S/N]\n");
                                                      scanf(" %c",&dividir_maos);
                                                }

                                                if (dividir_maos == 'S')
                                                {
                                                            int dividir;
                                                            dividir =(user_esq + user_dir)/2;
                                                            user_dir = dividir;
                                                            user_esq = dividir;
                                                }
                                          }
                                    }
                              }
                              else{
                                    printf("ESCOLHA UMA DAS SUAS MAOS PARA ATACAR: [D/E]\n");
                                    scanf(" %c",&user_escolha);
                                    while(user_escolha != 'D' && user_escolha != 'E'){
                                          printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                                          scanf(" %c",&user_escolha);
                                    }
                                     printf("ATACAR QUAL MAO ? [D/E]\n");
                                    scanf(" %c",&user_ataca);

                                    while(user_ataca != 'E' ){
                                    printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                                    scanf(" %c",&user_ataca);
                                    }

                              if(hal_esq != 0){
                                    if(hal_escolha == 'E' && hal_ataca == 'D'){
                                          user_dir = user_dir + hal_esq;
                                          if (user_dir == 5)
                                          {
                                               printf("A SUMA MAO DIREITA MORREU\n");
                                               user_dir = 0;
                                          }
                                          if (user_dir > 5)
                                          {
                                                user_dir = user_dir - 5;
                                          }
                                          if ((user_dir + user_esq) %2 == 0 && user_esq ==0)
                                          {
                                                printf("PARECE QUE VOCE TEM %D DEDOS, DESEJA DIVIDI-LOS ENTRE AS DUAS MAOS? [S/N]\n");
                                                scanf(" %c",&dividir_maos);
                                                while(dividir_maos != 'S' && dividir_maos != 'N'){
                                                      printf("DIGITE UMA RESPOSTA VALIDA : [S/N]\n");
                                                      scanf(" %c",&dividir_maos);
                                                }

                                                if (dividir_maos == 'S')
                                                {
                                                            int dividir;
                                                            dividir =(user_esq + user_dir)/2;
                                                            user_dir = dividir;
                                                            user_esq = dividir;
                                                }
                                          }
                                    }
                                    if(hal_escolha =='E' && hal_ataca == 'E'){
                                          user_esq = user_esq + hal_esq;
                                          if (user_esq == 5)
                                          {
                                                printf("A SUA MAO ESQUERDA MORREU\n");
                                                user_esq = 0;
                                          }
                                          if (user_esq > 5)
                                          {
                                                user_esq = user_esq - 5;
                                          }
                                          if ((user_dir + user_esq) %2 == 0 && user_dir ==0)
                                          {
                                                printf("PARECE QUE VOCE TEM %d DEDOS, DESEJA DIVIDI-LOS ENTRE AS DUAS MAOS? [S/N]\n");
                                                scanf(" %c",&dividir_maos);
                                                while(dividir_maos != 'S' && dividir_maos != 'N'){
                                                      printf("DIGITE UMA RESPOSTA VALIDA : [S/N]\n");
                                                      scanf(" %c",&dividir_maos);
                                                }

                                                if (dividir_maos == 'S')
                                                {
                                                            int dividir;
                                                            dividir =(user_esq + user_dir)/2;
                                                            user_dir = dividir;
                                                            user_esq = dividir;
                                                }
                                          }
                                    }
                              }
                              else{
                                    printf("ESCOLHA UMA DAS SUAS MAOS PARA ATACAR: [D/E]\n");
                                    scanf(" %c",&user_escolha);
                                    while(user_escolha != 'D' && user_escolha != 'E'){
                                          printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                                          scanf(" %c",&user_escolha);
                                    }
                                     printf("ATACAR QUAL MAO ? [D/E]\n");
                                    scanf(" %c",&user_ataca);

                                    while(user_ataca != 'D' ){
                                    printf("[ INSIRA UMA RESPOSTA VALIDA]\n" );
                                    scanf(" %c",&user_ataca);
                                    }



                              }

                  }
            
                  printf(".______________________________________________________________.\n");
                  printf("    HAL ESCOLHEU A MAO [%c] PARA ATACAR A SUA MAO [%c]\n",hal_escolha,hal_ataca);
                  printf(" ______________________________________________________________ \n");
                  printf("|                       [H A L 9 0 0 0]                        |\n");
                  printf(".--------------------------------------------------------------.\n");
                  printf("|        DIREITA: %d DEDO(S)  |  ESQUERDA: %d DEDO(S)          |\n",hal_dir,hal_esq);
                  printf(".--------------------------------------------------------------.\n");
                  printf("|                         [V O C E]                            |\n");
                  printf(".--------------------------------------------------------------.\n");
                  printf("|        ESQUERDA:%d DEDO(S) |  DIREITA: %d DEDO(S)            |\n",user_esq,user_dir);
                  printf(".--------------------------------------------------------------.\n");

                  
                  if(user_dir == 0 && user_esq == 0){
                        system("cls");
                        printf("\n\n");
                        printf("\t _    ______  ____________                   \n");              
                        printf("\t| |  / / __ \\/ ____/ ____/                  \n");     
                        printf("\t| | / / / / / /   / __/                      \n"); 
                        printf("\t| |/ / /_/ / /___/ /___                      \n"); 
                        printf("\t|___/\\____/\\____/_____/___  ________  __   \n"); 
                        printf("\t   / __ \\/ ____/ __ \\/ __ \\/ ____/ / / /  \n"); 
                        printf("\t  / /_/ / __/ / /_/ / / / / __/ / / / /      \n"); 
                        printf("\t / ____/ /___/ _, _/ /_/ / /___/ /_/ /       \n"); 
                        printf("\t/_/   /_____/_/ |_/_____/_____/\\____/       \n"); 
                        printf("\t.--------------------------------------------.\n");
                        printf("\t|        VOCE PERDEU O DESAFIO               |\n");
                        printf("\t.--------------------------------------------.\n");

                  }

                  if ((user_dir != 0 && user_esq != 0) || (user_dir == 0 && user_esq != 0) || (user_dir != 0 && user_esq == 0)){
                        if( x == 6 && y == 44){
                              int ganhou = 50;
                              *energia_PTR = *energia_PTR + ganhou;
                              printf("\t _    ______  ____________                              \n");
                              printf("\t| |  / / __ \\/ ____/ ____/                             \n");
                              printf("\t| | / / / / / /   / __/                                 \n");
                              printf("\t| |/ / /_/ / /___/ /___                                 \n");
                              printf("\t|___/\\____/\\____/_____/_  ______  __  __          \n");
                              printf("\t  / ____/   |  / | / / / / / __ \\/ / / /               \n"); 
                              printf("\t / / __/ /| | /  |/ / /_/ / / / / / / /                 \n");
                              printf("\t/ /_/ / ___ |/ /|  / __  / /_/ / /_/ /                  \n");
                              printf("\t\\____/_/  |_/_/ |_/_/ /_/\\____/\\____/                \n");
                              printf("\t.------------------------------------------------.\n");
                              printf("\t|VOCE GANHOU! RECOMPENSA: %d PONTOS DE ENERGIA    |\n",(ganhou));
                              printf("\t.------------------------------------------------.\n");
                        }
                  }
            }
      }
      return 0;	
}