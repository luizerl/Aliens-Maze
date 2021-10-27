/**Algoritmos e programacao de computadores
 *@autor: Luiz Eduardo Rodrigues Lima
 *@matricula: 18/0126296*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char aleatorio_computador ();
char valida_entrada(char entrada,char opcao_a, char opcao_b, char opcao_c);
void compara_resposta (char computador, char usuario, char opcao_a,char opcao_b, char opcao_c);

int jogo_jukenpo(int posicao_heroi_x, int posicao_heroi_y, int *energia_PTR){

	int x = posicao_heroi_x, y = posicao_heroi_y;

	if (( x == 13 && y == 60) && (*energia_PTR != 0)){
		
		int i;
		char user_escolha;
		char computador_escolha;
		int aleatorio = rand() %4;
		int contador_vitoria = 0;
		int *prt_vitoria = &contador_vitoria;
		int contador_derrota = 0;
		int *ptr_derrota = &contador_derrota;
		

		char valida_entrada(char entrada,char opcao_a, char opcao_b, char opcao_c){
			if (entrada == opcao_a || entrada == opcao_b || entrada == opcao_c){
				return entrada;
			}
			else{
				while(entrada != opcao_a && entrada != opcao_b && entrada != opcao_c){
					printf(".-----------------------------------------.\n");
					printf("|      T E N T E  N O V A M E N T E       |\n");
					printf(".-----------------------------------------.\n");
					scanf(" %c",&entrada);
				}
				return entrada;
			}
			
		}

		void compara_resposta (char computador, char usuario, char opcao_a,char opcao_b, char opcao_c){
			
			
			if(computador == opcao_a){
				if(usuario == opcao_a){

					printf(".-----------------------------------------.\n");
					printf("|        H O U V E  E M P A T E           |\n");
					printf(".-----------------------------------------.\n");
					
					
					while(usuario == computador || (usuario != opcao_b && usuario != opcao_a)){
						printf(".-----------------------------------------.\n");
						printf("|       INSIRA UMA NOVA ALTERNATIVA       |\n");
						printf(".-----------------------------------------.\n");
						scanf(" %c",&usuario);
					}
				}
				if(usuario == opcao_b){
					printf(".-----------------------------------------.\n");
					printf("|          V O C E  G A N H O U           |\n");
					printf(".-----------------------------------------.\n");
					*prt_vitoria += 1;
					
				}
				if(usuario == opcao_c){
					printf(".-----------------------------------------.\n");
					printf("|          V O C E  P E R D E U           |\n");
					printf(".-----------------------------------------.\n");
					*ptr_derrota += 1;
				}
			}

			if(computador == opcao_b){
				if(usuario == opcao_b){
					printf(".-----------------------------------------.\n");
					printf("|        H O U V E  E M P A T E           |\n");
					printf(".-----------------------------------------.\n");
					
					
					while(usuario == computador || (usuario != opcao_a && usuario != opcao_c)){
						printf(".-----------------------------------------.\n");
						printf("|       INSIRA UMA NOVA ALTERNATIVA       |\n");
						printf(".-----------------------------------------.\n");
						scanf(" %c",&usuario);
					}
				}
				if(usuario == opcao_c){
					printf(".-----------------------------------------.\n");
					printf("|          V O C E  G A N H O U           |\n");
					printf(".-----------------------------------------.\n");
					*prt_vitoria += 1;
				}
				if(usuario == opcao_a){
					printf(".-----------------------------------------.\n");
					printf("|          V O C E  P E R D E U           |\n");
					printf(".-----------------------------------------.\n");
					*ptr_derrota += 1;
				}
			}
			
			if(computador == opcao_c){
				if(usuario == opcao_c){
					printf(".-----------------------------------------.\n");
					printf("|        H O U V E  E M P A T E           |\n");
					printf(".-----------------------------------------.\n");
					
					
					while(usuario == computador || (usuario != opcao_a && usuario != opcao_b)){
						printf(".-----------------------------------------.\n");
						printf("|       INSIRA UMA NOVA ALTERNATIVA       |\n");
						printf(".-----------------------------------------.\n");
						scanf(" %c",&usuario);
					}
				}
				if(usuario == opcao_a){
					printf(".-----------------------------------------.\n");
					printf("|          V O C E  G A N H O U           |\n");
					printf(".-----------------------------------------.\n");
					*prt_vitoria +=1;
				}
				if(usuario == opcao_b){
					printf(".-----------------------------------------.\n");
					printf("|          V O C E  P E R D E U           |\n");
					printf(".-----------------------------------------.\n");
					*ptr_derrota +=1;
					
				}
				printf("DERROTA: %d\n", contador_derrota);
				printf("VITORIA: %d\n",contador_vitoria );
			}
			
		}

		printf(".--------------------------------------------. \n");
		printf("|  ___ ___ ___  ___    _                     | \n");  
		printf("| | _ \\ __|   \\| _ \\  /_\\                    | \n");
		printf("| |  _/ _|| |) |   / / _ \\                   | \n");
		printf("| |_|_|___|___/|_|_\\/_/ \\_\\___               | \n");
		printf("| | _ \\/_\\ | _ \\ __| |    | __|              | \n");
		printf("| |  _/ _ \\|  _/ _|| |__  | _|               |\n");
		printf("| |_|/_/ \\_\\_|_|___|____| |___|_    _        |\n");
		printf("| |_   _| __/ __|/ _ \\| | | | _ \\  /_\\       |\n");
		printf("|   | | | _|\\__ \\ (_) | |_| |   / / _ \\      |\n");
		printf("|   |_| |___|___/\\___/ \\___/|_|_\\/_/ \\_\\     |\n");
		printf(".____________________________________________.\n");
		printf("|    B E M - V I N D O  A O  D E S A F I O   |\n");
		printf(".____________________________________________.\n");

		for ( i = 0; i < 5; i++){
			printf(".-----------------------------------------.\n");
			printf("|     [A] PEDRA [B] PAPEL [C] TESOURA     |\n");
			printf(".-----------------------------------------.\n");
			printf("|       ESCOLHA UMA DAS OPCOES ACIMA      |\n");
			printf(".-----------------------------------------.\n");
			scanf(" %c",&user_escolha);

			if (aleatorio == 1){
				computador_escolha = 'A';
			}
		
			if (aleatorio == 2){
				computador_escolha = 'B';
			}

			if(aleatorio == 3){
				computador_escolha = 'C';
			}	
		
			valida_entrada(user_escolha,'A','B','C');
			compara_resposta(computador_escolha,user_escolha,'A','B','C');
			

		}
		system("cls");
		if(contador_vitoria > contador_derrota ){
			if( x == 13 && y == 60){
				system("cls");
				int ganhou = 30;
				*energia_PTR = *energia_PTR + ganhou;

				printf("\t _    ______  ____________              			\n");
				printf("\t| |  / / __ \\/ ____/ ____/              			\n");
				printf("\t| | / / / / / /   / __/                 			\n");
				printf("\t| |/ / /_/ / /___/ /___                 			\n");
				printf("\t|___/\\____/\\____/_____/_  ______  __  __          \n");
				printf("\t  / ____/   |  / | / / / / / __ \\/ / / /			\n");	
				printf("\t / / __/ /| | /  |/ / /_/ / / / / / / / 			\n");
				printf("\t/ /_/ / ___ |/ /|  / __  / /_/ / /_/ /  			\n");
				printf("\t\\____/_/  |_/_/ |_/_/ /_/\\____/\\____/ 			\n");
				printf("\t.------------------------------------------------.\n");
				printf("\t|VOCE GANHOU! RECOMPENSA: %d PONTOS DE ENERGIA    |\n",(ganhou));
				printf("\t.------------------------------------------------.\n");
			}
		}
		if(contador_derrota > contador_vitoria){
				system("cls");
				printf("\n\n");
				printf("\t _    ______  ____________					 \n");              
				printf("\t| |  / / __ \\/ ____/ ____/                  \n");     
				printf("\t| | / / / / / /   / __/                      \n"); 
				printf("\t| |/ / /_/ / /___/ /___                      \n"); 
				printf("\t|___/\\____/\\____/_____/___  ________  __   \n"); 
				printf("\t   / __ \\/ ____/ __ \\/ __ \\/ ____/ / / /  \n"); 
				printf("\t  / /_/ / __/ / /_/ / / / / __/ / / / /      \n"); 
				printf("\t / ____/ /___/ _, _/ /_/ / /___/ /_/ /     	 \n"); 
				printf("\t/_/   /_____/_/ |_/_____/_____/\\____/       \n"); 
		        printf("\t.--------------------------------------------.\n");
		        printf("\t|        VOCE PERDEU O DESAFIO               |\n");
		        printf("\t.--------------------------------------------.\n");
		}
	}
	return 0;
}
 	