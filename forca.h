/**Algoritmos e programacao de computadores
 *@autor: Luiz Eduardo Rodrigues Lima
 *@matricula: 18/0126296*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAMANHO_PALAVRA 20

int verifica_chute(char letra);
int letra_forca(char letra);
int chute_errado();
int enforcou();
void abertura();
void chuta();
int ganhou();
void desenhaforca();
void escolhepalavra();
char palavra_forca[TAMANHO_PALAVRA] ;
char chutes[26];
int chutes_user = 0;


int jogo_forca(int posicao_heroi_x, int posicao_heroi_y,int linha,int coluna, char mapa[linha][coluna], int *energia_PTR, int *num_aleatorio){
	int x = posicao_heroi_x, y = posicao_heroi_y;
	if( (((x == 14 && y == 12) || (x == 10 && y == 51)) || (x == 5 && y == 59)) && (*energia_PTR != 0)){

		int verifica_chute(char letra) {
			int achou = 0, j;
			for( j = 0; j < chutes_user; j++) {
				if(chutes[j] == letra) {
					achou = 1;
					break;
				}
			}

			return achou;
		}

		int letra_forca(char letra){
			int j;
			for( j = 0; j < strlen(palavra_forca); j++) {
				if(letra == palavra_forca[j]) {
					return 1;
				}
			}

			return 0;
		}
		

		int chute_errado() {
			int erros = 0;
			int i;
			for( i = 0; i < chutes_user; i++) {
				
				if(!letra_forca(chutes[i])) {
					erros++;
				}
			}

			return erros;
		}

		int enforcou() {
			return chute_errado() >= 5;
		}

		int ganhou() {
			int i;
			for( i = 0; i < strlen(palavra_forca); i++) {
				if(!verifica_chute(palavra_forca[i])) {
					return 0;
				}
			}
			return 1;
		}

		void vitoria(int ganhou){
			if(ganhou) {
				int ganhou;
				system("cls");
				if( x == 14 && y == 12){
					ganhou = 100;
					*energia_PTR = *energia_PTR + ganhou;
				}
				if( x == 10 && y == 51){
					ganhou = 50;
					*energia_PTR = *energia_PTR + ganhou;
				}
				if( x == 5 && y == 59){
					ganhou = 40;
					*energia_PTR = *energia_PTR + ganhou;
				}
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

		void derrota(int ganhou){
			if(!ganhou) {
				
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

		void abertura(){

		    printf(".------------------------------------------------------.        \n");
		    printf("|            ______  __________     ____  ___          |        \n");
		    printf("|            / / __ \\/ ____/ __ \\   / __ \\/   |        |     \n");
		    printf("|       __  / / / / / / __/ / / /  / / / / /| |        |        \n");
		    printf("|      / /_/ / /_/ / /_/ / /_/ /  / /_/ / ___ |        |        \n");
		    printf("|      \\____/\\__________/\\____/ _________/  |_|        |     \n");
		    printf("|            / ____/ __ \\/ __ \\/ ____/   |             |      \n");
		    printf("|           / /_  / / / / /_/ / /   / /| |             |        \n");
		    printf("|          / __/ / /_/ / _, _/ /___/ ___ |             |        \n");
		    printf("|         /_/    \\____/_/ |_|\\____/_/  |_|             |      \n");
		    printf(".------------------------------------------------------.        \n");
		    printf("|          BEM-VINDO AO DESAFIO DO JOGO DA FORCA       |        \n");
		    printf(".------------------------------------------------------.        \n");
		}

		void chuta() {
			char chute;
			setbuf(stdin,NULL);
			scanf(" %c", &chute);
			setbuf(stdin,NULL);

			chutes[chutes_user] = chute;
			chutes_user++;
		}

		

		void desenhaforca() {

			int erros = chute_errado(), i;

			printf("  _______       \n");
			printf(" |/      |      \n");
			printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
			printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
			printf(" |       %c     \n", (erros>=2?'|':' '));
			printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
			printf(" |              \n");
			printf("_|___           \n");
			printf("\n\n");

			for(i = 0; i < strlen(palavra_forca); i++) {

				if(verifica_chute(palavra_forca[i])) {
					printf("%c ", palavra_forca[i]);
				} else {
					printf("_ ");
				}

			}
			printf("\n");

		}

		void escolhepalavra() {
			FILE* arquivo;

			arquivo = fopen("palavras.txt", "r");
			if(arquivo == 0) {
				printf("HOUVE UM ERRO COM O BANCO DE DADOS DAS PALAVRA!\n");
				exit(1);
			}

			int numero_palavra;
			fscanf(arquivo, "%d", &numero_palavra);

			srand(time(0));
			
			int  i;

			for( i = 0; i <= *num_aleatorio; i++) {
				fscanf(arquivo, "%s", palavra_forca);
			}

			fclose(arquivo);
		}
		/* PROGRAMA PRINCIPAL*/

			abertura();
			escolhepalavra();

			do {
				
				desenhaforca();
				chuta();
				system("cls");
			} while (!ganhou() && !enforcou());

			vitoria(ganhou());
			derrota(ganhou());

			
	}
	
	return 0;
}
