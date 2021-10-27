/**Algoritmos e programacao de computadores
 *@autor: Luiz Eduardo Rodrigues Lima
 *@matricula: 18/0126296
 *@programa: Processo seletivo da NASA - Fase 02
 *@funcao: Um jogo de labirinto, no qual a quantidade de passos do usuario é limita pelo numero de 
 *energia e para aumenta-la o usuario deverá ganhar os desafios espalhados ao longo do mapa.
 *@creditos:
 * artes: http://ascii.co.uk/art/medal;
 		  https://www.asciiart.eu;
 *textos: http://www.patorjk.com/software/taag/#p=display&h=2&v=2&f=Small&t=APC%0A%0A*/


#include <stdio.h>
#include <stdlib.h>
#include "forca.h"
#include "jogo_dedos.h"
#include "jukenpo.h"


/* INICIO * Declaracoes das funcoes */
int posicao_heroi_x(int linha, int coluna,char mapa[linha][coluna]);
int posicao_heroi_y(int linha, int coluna,char mapa[linha][coluna]);
int energia_movimento(int *energia_PTR,char comando);
void imprimi_mapa ( int linha, int coluna,char mapa[linha][coluna], int posicao_heroi_x, int posicao_heroi_y, char comando);
int movimento(char comando, char mapa[][71], int posicao_heroi_x,int posicao_heroi_y, int energia_movimento, int jogo_dedo, int jogo_forca, int jogo_jukenpo, int msg_volt, int msg_won);
/* FIM */

void imprimi_mapa ( int linha, int coluna,char mapa[linha][coluna], int posicao_heroi_x, int posicao_heroi_y, char comando){

	int i,j;
	
	for( i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("%c",mapa[i][j] );
		}
	}

}
int msg_won(int posicao_heroi_x, int posicao_heroi_y,int *energia_PTR){
	if(posicao_heroi_x == 1 && posicao_heroi_y == 69){
	
		
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
		printf("\t| PARABENS! VEJA SUA PONTUACAO LOGO ABAIXO!      |\n");
		printf("\t.------------------------------------------------.\n");
		if(*energia_PTR >= 100){

			printf("\t\t    |@@@@|     |####|		\n");
			printf("\t\t    |@@@@|     |####|   	\n");
			printf("\t\t    |@@@@|     |####|     	\n");
			printf("\t\t    \\@@@@|     |####/       \n");
			printf("\t\t    \\@@@|     |###/       	\n");
			printf("\t\t      `@@|_____|##'       	\n");
			printf("\t\t           (O)            	\n");
			printf("\t\t        .-'''''-.         	\n");
			printf("\t\t      .'  * * *  `.      	\n");
			printf("\t\t     :  *       *  :     	\n");
			printf("\t\t    : ~  PRIMEIRO ~ :     	\n");
			printf("\t\t    : ~   LUGAR   ~ :    	\n");
			printf("\t\t     :  *       *  :     	\n");
			printf("\t\t      `.  * * *  .'		 	\n");	
			printf("\t\t        `-.....-'         	\n");

		}
		if(*energia_PTR >= 50 && *energia_PTR < 100){

			printf("\t\t     |@@@@|     |####|		\n");
			printf("\t\t     |@@@@|     |####|   	\n");
			printf("\t\t     |@@@@|     |####|     	\n");
			printf("\t\t    \\@@@@|     |####/       \n");
			printf("\t\t    \\@@@|     |###/       	\n");
			printf("\t\t      `@@|_____|##'       	\n");
			printf("\t\t           (O)            	\n");
			printf("\t\t        .-'''''-.         	\n");
			printf("\t\t      .'  * * *  `.      	\n");
			printf("\t\t     :  *       *  :     	\n");
			printf("\t\t    : ~  SEGUNDO ~  :     	\n");
			printf("\t\t    : ~   LUGAR   ~ :    	\n");
			printf("\t\t     :  *       *  :     	\n");
			printf("\t\t      `.  * * *  .'		 	\n");	
			printf("\t\t        `-.....-'         	\n");


		}
		if(*energia_PTR > 0 && *energia_PTR < 50){

			printf("\t\t    |@@@@|     |####|		\n");
			printf("\t\t    |@@@@|     |####|   	\n");
			printf("\t\t    |@@@@|     |####|     	\n");
			printf("\t\t   \\@@@@|     |####/       \n");
			printf("\t\t    \\@@@|     |###/       	\n");
			printf("\t\t     @@|_____|##'       	\n");
			printf("\t\t          (O)            	\n");
			printf("\t\t        .-'''''-.         	\n");
			printf("\t\t      .'  * * *  `.      	\n");
			printf("\t\t     :  *       *  :     	\n");
			printf("\t\t    : ~  TERCEIRO ~ :     	\n");
			printf("\t\t    : ~   LUGAR   ~ :    	\n");
			printf("\t\t     :  *       *  :     	\n");
			printf("\t\t      `.  * * *  .'		 	\n");	
			printf("\t\t        `-.....-'         	\n");


		}
		
		return 1;
	}
	return 0;
			
}
int msg_volt(int posicao_heroi_x, int posicao_heroi_y){
	if( (posicao_heroi_x == 9 && posicao_heroi_y == 0 )|| (posicao_heroi_x == 8 && posicao_heroi_y == 70) ){
		printf(".---------------------------------------------------.---------------.\n");
		printf("|                                                   ||              |\n");
		printf("|      /        \\                                   ||              |\n");
		printf("|     /_        _\\        S O  H A  U M A           ||              |\n");
		printf("|    // \\      / \\  	    S A I D A  N O          ||              |\n");
		printf("|    |\\__\\    /__/|  	 ------- N O S S O          || A  N A S A   |\n");
		printf("|     \\    ||    /   	 L A B I R I N T O.         || C O N F I A  |\n");
		printf("|      \\        /     	 E N C O N T R E A          || E M  V O C E |\n");
		printf("|       \\  __  /        ------------- S E           ||              |\n");
		printf("|        '.__.'          C O N S E G U I R          ||              |\n");	
		printf("|         |  |           F I C A R  V I V O.        ||              |\n");
		printf("|   	  |  |                                      ||              | \n");
		printf(".---------------------------------------------------.---------------.\n");
		return 0;
	}
	return 0;
}
int movimento(char comando, char mapa[][71], int posicao_heroi_x,int posicao_heroi_y, int energia_movimento, int jogo_dedo, int jogo_forca, int jogo_jukenpo, int msg_volt, int msg_won){
	
	int x = posicao_heroi_x,y = posicao_heroi_y; 

	

		if(comando == 'a' || comando == 'A'){
			
			if(mapa[x][y-1] == '*'){
				return 0;
			}
			if(mapa[x][y-1] == mapa[8][70]){
				return 0;
			}
			if(energia_movimento != 0){
				int temp = mapa[x][y - 1];
				mapa[x][y - 1] = '@';	
				mapa[x][y] = temp;
			}
			else {	
				return 0;
			}
		}	

		if(comando == 'w' || comando == 'W'){

			if(mapa[x - 1][y]  == '*'){
				return 0;
			}
			if(energia_movimento != 0){
				int temp = mapa[x - 1][y];
				mapa[x - 1][y] = '@';
				mapa[x][y] = temp;

				
			}
			else {
				return 0;
			}
		}

		if(comando == 'd' || comando == 'D'){
			
			if(mapa[x][y + 1]  == '*'){
				return 0;
			}
			if(mapa[x][y + 1] == mapa[1][70]){
				return 0;
			}
			if(energia_movimento != 0){
				int temp = mapa[x][y + 1];
				mapa[x][y + 1] = '@';
				mapa[x][y] = temp;
				
			} else {
				return 0;
			}
		}
		if (comando == 's' || comando == 'S'){

			if(mapa[x + 1][y]  == '*'){
				return 0;
			}
			if(energia_movimento != 0){
				int temp = mapa[x + 1][y];
				mapa[x + 1][y] = '@';
				mapa[x][y] = temp;
				
			}
			else {
				return 0;
			}
		}	
	

	// mapa[x][y] = '\0';
	return 0;
}

/* INICIO * Coordenadas da posicao do heroi */
int posicao_heroi_x(int linha, int coluna,char mapa[linha][coluna]){

	int x;
	int i,j;

	for ( i = 0; i < linha; ++i){
		for ( j = 0; j < coluna; ++j)
		{
			if(mapa[i][j] == '@'){
				x = i;
			}
		}
	}
	return x;
}
int posicao_heroi_y(int linha, int coluna,char mapa[linha][coluna]){

	int y;
	int i,j;

	for ( i = 0; i < linha; ++i){
		for ( j = 0; j < coluna; ++j)
		{
			if(mapa[i][j] == '@'){
				y = j;
				
			}
		}
	}
	return y;
}

/* FIM */


int energia_movimento(int *energia_PTR,char comando){
	
	if(comando == 'a' || comando == 'd' || comando == 's' || comando == 'w'){
		if(*energia_PTR > 0){
			*energia_PTR = *energia_PTR - 1;
			printf(" .-----------------------.-----------------------------------------.\n ");
			printf("|ENERGIA DISPONIVEL: %d | PARA ACESSAR O MENU NOVAMENTE DIGITE [1]|\n",*energia_PTR );
			printf(" .-----------------------.-----------------------------------------.\n");
			return *energia_PTR;
		}
	}
	else{
		return 0;
	}
	return *energia_PTR;
}

int perdeu_labirinto(int *energia_PTR){
	if(*energia_PTR == 0){
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
        printf("\t|              TENTE NOVAMENTE               |\n");
        printf("\t.--------------------------------------------.\n");
        return 1;
	}

	else{
		return 0;
	}
}

/* INICIO * Desafios*/

int jogo_forca(int posicao_heroi_x, int posicao_heroi_y,int linha,int coluna, char mapa[linha][coluna],int *energia_PTR,int *ptr_aleatorio);

int jogo_jukenpo(int posicao_heroi_x, int posicao_heroi_y, int *energia_PTR);

int jogo_dedo(int posicao_heroi_x, int posicao_heroi_y, int *energia_PTR);
/* FIM */

char validacao_entrada(char usuario,char opcao_a,char opcao_b, char opcao_c, char opcao_d, char menu){
	if((usuario == opcao_a) || (usuario == opcao_b) || (usuario == opcao_c) || (usuario == opcao_d)){
		return usuario;
	}
	if(usuario == menu){
		return usuario;
	}
	else{
		while((usuario != opcao_a) && (usuario != opcao_b) && (usuario != opcao_c) && (usuario != opcao_d) && (usuario != menu)){
			printf(".--------------------------------------------------------------------.\n");
			printf("|          I N S I R A  U M A  R E S P O S T A  V A L I D A          |\n");
			printf(".--------------------------------------------------------------------.\n");
			scanf(" %c",&usuario);
			setbuf(stdin,NULL);

		}
		return usuario;

	}
}




int main (){
	system("cls");
	char user_menu = '0';
	char menu (char user_menu) {
		
		if(user_menu == '0'){

			printf(".-----------------------------------------------------------------.\n");
		    printf("|               UMA PRODUCAO DE :PERDIDOS NO ESPACO               |\n");
		    printf(".-----------------------------------------------------------------.\n");
		    printf("|                   	          SEGUNDA PARTE 	   	  |\n"); 
		    printf("|        _..._               PROCESSO SELETIVO DA NASA	          |\n"); 
		    printf("|      .'     '.      _      __    ___    ____  ____              |\n"); 
		    printf("|       /    .-""-\\   _/ \\    / /   /   |  / __ )/  _/              |\n"); 
		    printf("|   .-|   /:.   |  |   |   / /   / /| | / __  |/ /                |\n"); 
		    printf("|   |  \\  |:.   /.-'-./   / /___/ ___ |/ /_/ // /                 |\n"); 
		    printf("|   | .-'-;:__.'    =/   /_____/_/ _|_/_____/___/______           |\n");
		    printf("|   .'=  *=|NASA _.='       / __ \\/  _/ | / /_  __/ __ \\          |\n");
		    printf("|  /   _.  |    ;          / /_/ // //  |/ / / / / / / /          |\n");
		    printf("| ;-.-'|    \\   |         / _, _// // /|  / / / / /_/ /           |\n");
		    printf("|/   | \\    _\\  _\\       /_/ |_/___/_/ |_/ /_/  \\____/            |\n");
		    printf("|\\__/'._;.  ==' ==\\       [  A L I E N I G E N A ]                |\n");
		    printf("|.----------------------------------------------------------------.\n"); 
		    printf("|                     M E N U    P R I N C I P A L                |\n");
		    printf(".-----------------------------------------------------------------.\n");
		    printf("|                     [1]  INICIAR NOVO JOGO                      |\n");
		    printf("|                     [2]  INSTRUCOES                             |\n");
		    printf("|                     [3]  SAIR                                   |\n");
		    printf(".-----------------------------------------------------------------.\n");
		    printf("|     DIGITE O NUMERO DA OPCAO DO MENU QUE VOCE QUER ACESSAR      |\n");
		    printf(".-----------------------------------------------------------------.\n");
		    scanf(" %c",&user_menu);
		    setbuf(stdin,NULL);
		    while(user_menu != '1' && user_menu != '2' && user_menu != '3'){
		    		printf(" .----------------------------------------------------------------.\n");
		    		printf("|   POR FAVOR, DIGITE [1],[2] ou [3] PARA ACESSAR UMA OPCAO.      |\n");
		    		printf(".-----------------------------------------------------------------.\n");
		    		scanf(" %c",&user_menu);
		    		setbuf(stdin,NULL);
		    	}

		    if(user_menu == '1'){
		    	system("cls");

		    	int LINHA = 21;
				int COLUNA = 71; /* 50 */
		    	int energia_jogador = 50;
				int *eng_jogador_PTR = &energia_jogador;

		    	
				char MAPA[21][71] = {

				"**********************************************************************\n",
				"**                         *   *                                      \n",
				"** ********* ** ************ * **********************  ***************\n",
				"** *     *** ** ************ * **********************       ******  **\n",
				"** * *** *** ** **     ***** * ******        ********       ******  **\n",
				"** * ***        ** *****     *    *** **     ********      0******  **\n",
				"** * ***           ***** ******** *** **    0************** ******  **\n",
				"** * *************       ********     **   **************** ******  **\n",
				"** *************** *********************** ****          ** ******  **\n",
				"@  *************** *********************** **** **       ** ***     **\n",
				"** *************** *********************** **** ** 0     ** *** ******\n",
				"** *************** ******    ************* ** * *** *******     ******\n",
				"** ********         ***** ** ************* ** * *** *********** ******\n",
				"** ********    **** ***** **    ********** ** * *** **      0** ******\n",
				"** ******** 0  ****       **************** ** * *** **       ** ******\n",
				"** ********************** ****** ********* ** * *** **       ** *** **\n",
				"** **********************     **                *** ******** **     **\n",
				"** ************************************************          *** *****\n",
				"**                                              ***********       ****\n",
				"**********************************************************************"
				};

				char comando_user = '1';
				char user_menu = '0';

				do
				{
					int num_aleatorio = rand() % 5;
					int *ptr_aleatorio = &num_aleatorio;

					/* INICIO * Variaveis das funções */
					int heroi_x = posicao_heroi_x(LINHA,COLUNA,MAPA);
					int heroi_y = posicao_heroi_y(LINHA,COLUNA,MAPA);
					int energia_funcao = energia_movimento(eng_jogador_PTR,comando_user);
					int jogo_dedos = jogo_dedo(heroi_x,heroi_y,eng_jogador_PTR);
					int jogo_forcas = jogo_forca(heroi_x,heroi_y,LINHA,COLUNA,MAPA,eng_jogador_PTR,ptr_aleatorio);
					int jogo_ppt = jogo_jukenpo(heroi_x,heroi_y,eng_jogador_PTR);
					int msg_voltar = msg_volt(heroi_x,heroi_y);
					int msg_venceu = msg_won(heroi_x,heroi_y,eng_jogador_PTR);

					/* FIM */

					if(msg_venceu == 1){
						break;
					}
					imprimi_mapa(LINHA,COLUNA,MAPA,heroi_x,heroi_y,comando_user);
					
					printf("\n");
					printf(".--------------------------------------------------------------------.\n");
					printf("|   COMANDOS VALIDOS: w,s,d,a |     INSIRA UMA DESSAS OPCOES         |\n");
					printf(".--------------------------------------------------------------------.\n");
					
					
					scanf(" %c", &comando_user);
					setbuf(stdin,NULL);
					validacao_entrada(comando_user,'d','s','w','a','1');
					

					movimento(comando_user,MAPA,heroi_x,heroi_y,energia_funcao, jogo_dedos, jogo_forcas,jogo_ppt,msg_voltar,msg_venceu);
					
					
					system("cls");


					if(comando_user == '1'){
						break;
						system("cls");
						
						comando_user = '0';
						menu(comando_user);

					}

				} while (!perdeu_labirinto(eng_jogador_PTR));
				perdeu_labirinto(eng_jogador_PTR);
				menu(user_menu);
				
			}
			if (user_menu == '2'){
				system("cls");
				printf(" .----------------------------------------------------------------.\n");
		    	printf("|                     I N S T R U C O E S                         |\n");
		    	printf(".-----------------------------------------------------------------.\n");
		    	printf("| [1]  O JOGO TRATA-SE DE UM LABIRINTO, ONDE VOCE TERA UMA CERTA  |\n");
		    	printf("| QUANTIDADE DE ENERGIA, QUE LHE PERMITIRA SE LOCOMOVER, PARA QUE |\n");
		    	printf("| VOCE CONSIGA MAIS PONTOS DE ENERGIA DEVERA GANHAR OS DESAFIOS   |\n");
		    	printf("| (REPRESENTADOS '0'), CASO O NUMERO DE ENERGIA CHEGUE A ZERO VOCE|\n");
		    	printf("| PERDE O JOGO.                                                   |\n");
		    	printf("| [2] OS DESAFIOS SAO: JOGO DA FORCA (5 TENTATIVA NO MAXIMO), JOGO|\n");
		    	printf("| DOS DEDOS (DEVERA ZERAR AS MAOS DO ADVERSARIO E CONTINUAR COM   |\n");
		    	printf("| PELO MENOS UMA PARA PODER SAIR VITORIOSO, E , POR ULTIMO, O JOGO|\n");
		    	printf("| DE PEDRA PAPEL E TESOURA (5 TENTATIVAS).                        |\n");
		    	printf("| [3] PARA SE LOCOMOVER USE AS TECLAS ( E M  M I N U S C U L O) : |\n");
		    	printf("| W (PARA CIMA), S (PARA BAIXO), D (PARA A DIREITA) E S (PARA A   |\n");
		    	printf("| ESQUERDA).                                                      |\n");
		    	printf(".-----------------------------------------------------------------.\n");
		    	printf("|                DIGITE 1 PARA RETORNAR AO MENU                   |\n");
		    	printf(".-----------------------------------------------------------------.\n");

		    	char comando_user;
		    	scanf(" %c",&comando_user);
		    	while(comando_user != '1'){
		    		printf(" .----------------------------------------------------------------.\n");
		    		printf("|            POR FAVOR, DIGITE 1 PARA RETORNAR AO MENU.           |\n");
		    		printf(".-----------------------------------------------------------------.\n");
		    		scanf(" %c",&comando_user);
		    	}
		    	system("cls");
		    	comando_user = '0';
				menu(comando_user);

			}
			if (user_menu == '3'){

				system("cls");
			}
		
			
		}
		else{
			return '0';
		}
		return 0;
	}
	
	menu(user_menu);

	return 0;
}