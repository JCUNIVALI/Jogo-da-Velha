#ifndef JOGODAVELHA_H
#define JOGODAVELHA_H


#include <iostream>
#include <stdlib.h>
#include "conio.h"
#include "string"
#include <time.h>
using namespace std;

int menu() {
	setlocale(LC_ALL, "Portuguese");
	cout << "-->\tJogador vs CPU" << endl << "\tMultiplayer";
	int opcao;
	int selecao = 72;
	while (true) {
		if (selecao == 72) {//cima
			opcao = 1;
		}
		else if (selecao == 80) {//baixo
			opcao = 2;
		}
		else if (selecao == 13) {//enter
			return opcao;
		}
		if (opcao == 1) {
			system("cls");
			cout << "-->\tJogador vs CPU" << endl << "\tMultiplayer";
		}
		else if (opcao == 2) {
			system("cls");
			cout << "\tJogador vs CPU" << endl << "-->\tMultiplayer";
		}
		selecao = getch();
	}
}

void desenharjogo(char jogo[3][3]) {
	cout << "Informe onde jogar utilizando os números." << endl;
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			if (y == 2)
				cout << jogo[x][y];
			else
				cout << jogo[x][y] << "\t|\t";
		}
		if (x == 2)
			cout << endl;
		else
			cout << endl << "________|_______________|________" << endl << "        |               |        " << endl;
	}
}

void verificarseganho(char jogo[3][3], bool &jogando) {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++){
			if (jogo[x][0] == 88 && jogo[x][1] == 88 && jogo[x][2] == 88) {
				system("cls");
				cout << "PARABÉNS, VOCÊ GANHOU!";
				jogando = false;
				} //linha
			if (jogo[0][y] == 88 && jogo[1][y] == 88 && jogo[2][y] == 88) {
				system("cls");
				cout << "PARABÉNS, VOCÊ GANHOU!";
				jogando = false;
			} //coluna
			if (jogo[0][0] == 88 && jogo[1][1] == 88 && jogo[2][2] == 88) {
				system("cls");
				cout << "PARABÉNS, VOCÊ GANHOU!";
				jogando = false;
			} //dp
			if (jogo[0][2] == 88 && jogo[1][1] == 88 && jogo[2][0] == 88) {
				system("cls");
				cout << "PARABÉNS, VOCÊ GANHOU!";
				jogando = false;
			} //ds
			if (jogo[x][0] == 79 && jogo[x][1] == 79 && jogo[x][2] == 79) {
				system("cls");
				cout << "PARABÉNS, VOCÊ GANHOU!";
				jogando = false;
			} //linha
			if (jogo[0][y] == 79 && jogo[1][y] == 79 && jogo[2][y] == 79) {
				system("cls");
				cout << "PARABÉNS, VOCÊ GANHOU!";
				jogando = false;
			} //coluna
			if (jogo[0][0] == 79 && jogo[1][1] == 79 && jogo[2][2] == 79) {
				system("cls");
				cout << "PARABÉNS, VOCÊ GANHOU!";
				jogando = false;
			} //dp
			if (jogo[0][2] == 79 && jogo[1][1] == 79 && jogo[2][0] == 79) {
				system("cls");
				cout << "PARABÉNS, VOCÊ GANHOU!";
				jogando = false;
			} //ds
		}
	}
}
void iniciarjogosingleplayer(char jogo[3][3], char simbolo) {
	bool jogando = true;
	while (jogando) {
		srand(time(NULL));
		int vezjogador = 1;
		verificarseganho(jogo, jogando);
		if (vezjogador == 1) {
			bool jogador1 = true;
			while (jogador1) {
				int local = getch();
				if ((int)local == 55 && jogo[0][0] == '7') {
					jogo[0][0] = simbolo;
					system("cls");
					vezjogador =2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 56 && jogo[0][1] == '8') {
					jogo[0][1] = simbolo;
					system("cls");
					vezjogador = 2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 57 && jogo[0][2] == '9') {
					jogo[0][2] = simbolo;
					system("cls");
					vezjogador =2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 52 && jogo[1][0] == '4') {
					jogo[1][0] = simbolo;
					system("cls");
					jogador1 = false;
					vezjogador = 2;
					desenharjogo(jogo);
				}
				if ((int)local == 53 && jogo[1][1] == '5') {
					jogo[1][1] = simbolo;
					system("cls");
					vezjogador = 2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 54 && jogo[1][2] == '6') {
					jogo[1][2] = simbolo;
					system("cls");
					vezjogador = 2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 49 && jogo[2][0] == '1') {
					jogo[2][0] = simbolo;
					system("cls");
					vezjogador =2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 50 && jogo[2][1] == '2') {
					jogo[2][1] = simbolo;
					system("cls");
					vezjogador =2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 51 && jogo[2][2] == '3') {
					jogo[2][2] = simbolo;
					system("cls");
					vezjogador = 2;
					jogador1 = false;
					desenharjogo(jogo);
				}
			}
		}
		if (vezjogador == 2) {//arrumar simbolos
			bool pc = true;
			while (true) {
				int local = rand() % 57;
				while (local <49) {
					local = rand() % 57;
				}
				if ((int)local == 55 && jogo[0][0] == '7') {
					jogo[0][0] = simbolo;
					system("cls");
					vezjogador =1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 56 && jogo[0][1] == '8') {
					jogo[0][1] = simbolo;
					system("cls");
					vezjogador =1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 57 && jogo[0][2] == '9') {
					jogo[0][2] = simbolo;
					system("cls");
					vezjogador =1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 52 && jogo[1][0] == '4') {
					jogo[1][0] = simbolo;
					system("cls");
					vezjogador =1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 53 && jogo[1][1] == '5') {
					jogo[1][1] = simbolo;
					system("cls");
					vezjogador =1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 54 && jogo[1][2] == '6') {
					jogo[1][2] = simbolo;
					system("cls");
					vezjogador =1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 49 && jogo[2][0] == '1') {
					jogo[2][0] = simbolo;
					system("cls");
					vezjogador =1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 50 && jogo[2][1] == '2') {
					jogo[2][1] = simbolo;
					system("cls");
					vezjogador = 1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 51 && jogo[2][2] == '3') {
					jogo[2][2] = simbolo;
					system("cls");
					vezjogador =1;
					pc = false;
					desenharjogo(jogo);
				}
			}
		}
	}
}

char escolhersimbolo() {
	cout << "Escolha seu simbolo para jogar pressionando o número correspondente:" << endl << "CÍRCULO (1)" << endl << "X       (2)";
	char simbolo = getch();
	if ((int)simbolo == 49)
		simbolo = 79;
	else if ((int)simbolo==50)
		simbolo = 88;
	system("cls");
	return simbolo;
}

void singleplayer() {
	char jogo[3][3];
	char simbolo;
	for (int linha = 0; linha < 3; linha++) {
		for (int coluna = 0; coluna < 3; coluna++) {
			if (linha == 0) {
				jogo[linha][coluna] = (int)coluna + 55;
			}
			if (linha == 1) {
				jogo[linha][coluna] = (int)coluna + 52;
			}
			if (linha == 2) {
				jogo[linha][coluna] = (int)coluna + 49;
			}
		}
	}
	simbolo = escolhersimbolo();
	desenharjogo(jogo);
	iniciarjogosingleplayer(jogo,simbolo);
	cout << "FIM DE JOGO.";
}


void multiplayer() {

}
#endif