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

void verificarseganho(char jogo[3][3], bool &jogando, char simbolop1) {
	char jogadorx, jogadoro;
	if (simbolop1 == 88) {
		jogadorx = 'X';
		jogadoro = 'O';
	}
	else {
		jogadorx = 'O';
		jogadoro = 'X';
	}
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++){
			if (jogo[x][0] == 88 && jogo[x][1] == 88 && jogo[x][2] == 88) {
				system("cls");
				cout << "PARABÉNS JOGADOR "<<jogadorx<<", VOCÊ GANHOU!" ;
				getchar();
				jogando = false;
				} //linha
			if (jogo[0][y] == 88 && jogo[1][y] == 88 && jogo[2][y] == 88) {
				system("cls");
				cout << "PARABÉNS JOGADOR " << jogadorx << ", VOCÊ GANHOU!";
				getchar();
				jogando = false;
			} //coluna
			if (jogo[0][0] == 88 && jogo[1][1] == 88 && jogo[2][2] == 88) {
				system("cls");
				cout << "PARABÉNS JOGADOR " << jogadorx << ", VOCÊ GANHOU!";
				getchar();
				jogando = false;
			} //dp
			if (jogo[0][2] == 88 && jogo[1][1] == 88 && jogo[2][0] == 88) {
				system("cls");
				cout << "PARABÉNS JOGADOR " << jogadorx << ", VOCÊ GANHOU!";
				getchar();
				jogando = false;
			} //ds
			if (jogo[x][0] == 79 && jogo[x][1] == 79 && jogo[x][2] == 79) {
				system("cls");
				cout << "PARABÉNS JOGADOR " << jogadoro << ", VOCÊ GANHOU!";
				getchar();
				jogando = false;
			} //linha
			if (jogo[0][y] == 79 && jogo[1][y] == 79 && jogo[2][y] == 79) {
				system("cls");
				cout << "PARABÉNS JOGADOR " << jogadoro << ", VOCÊ GANHOU!";
				getchar();
				jogando = false;
			} //coluna
			if (jogo[0][0] == 79 && jogo[1][1] == 79 && jogo[2][2] == 79) {
				system("cls");
				cout << "PARABÉNS JOGADOR " << jogadoro << ", VOCÊ GANHOU!";
				getchar();
				jogando = false;
			} //dp
			if (jogo[0][2] == 79 && jogo[1][1] == 79 && jogo[2][0] == 79) {
				system("cls");
				cout << "PARABÉNS JOGADOR " << jogadoro << ", VOCÊ GANHOU!";
				getchar();
				jogando = false;
			} //ds
		}
	}
}
void iniciarjogosingleplayer(char jogo[3][3], char simbolop1, char simbolop2) {
	bool jogando = true;
	int vezjogador = 1;
	while (jogando) {
		srand(time(NULL));
		cout << "Jogador " <<vezjogador<< endl;
		verificarseganho(jogo, jogando, simbolop1);
		if (vezjogador == 1) {
			bool jogador1 = true;
			while (jogador1) {
				int local = getch();
				if ((int)local == 55 && jogo[0][0] == '7') {
					jogo[0][0] = simbolop1;
					system("cls");
					vezjogador =2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 56 && jogo[0][1] == '8') {
					jogo[0][1] = simbolop1;
					system("cls");
					vezjogador = 2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 57 && jogo[0][2] == '9') {
					jogo[0][2] = simbolop1;
					system("cls");
					vezjogador =2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 52 && jogo[1][0] == '4') {
					jogo[1][0] = simbolop1;
					system("cls");
					vezjogador = 2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 53 && jogo[1][1] == '5') {
					jogo[1][1] = simbolop1;
					system("cls");
					vezjogador = 2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 54 && jogo[1][2] == '6') {
					jogo[1][2] = simbolop1;
					system("cls");
					vezjogador = 2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 49 && jogo[2][0] == '1') {
					jogo[2][0] = simbolop1;
					system("cls");
					vezjogador =2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 50 && jogo[2][1] == '2') {
					jogo[2][1] = simbolop1;
					system("cls");
					vezjogador =2;
					jogador1 = false;
					desenharjogo(jogo);
				}
				if ((int)local == 51 && jogo[2][2] == '3') {
					jogo[2][2] = simbolop1;
					system("cls");
					vezjogador = 2;
					jogador1 = false;
					desenharjogo(jogo);
				}
			}
		}
		verificarseganho(jogo, jogando, simbolop1);
		if (vezjogador == 2) {
			bool pc = true;
			int local;
			while (pc) {
				local = rand() % 57;
				while (local <49) {
					local = rand() % 57;
				}
				if ((int)local == 55 && jogo[0][0] == '7') {
					jogo[0][0] = simbolop2;
					system("cls");
					vezjogador = 1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 56 && jogo[0][1] == '8') {
					jogo[0][1] = simbolop2;
					system("cls");
					vezjogador = 1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 57 && jogo[0][2] == '9') {
					jogo[0][2] = simbolop2;
					system("cls");
					vezjogador = 1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 52 && jogo[1][0] == '4') {
					jogo[1][0] = simbolop2;
					system("cls");
					vezjogador = 1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 53 && jogo[1][1] == '5') {
					jogo[1][1] = simbolop2;
					system("cls");
					vezjogador = 1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 54 && jogo[1][2] == '6') {
					jogo[1][2] = simbolop2;
					system("cls");
					vezjogador = 1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 49 && jogo[2][0] == '1') {
					jogo[2][0] = simbolop2;
					system("cls");
					vezjogador = 1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 50 && jogo[2][1] == '2') {
					jogo[2][1] = simbolop2;
					system("cls");
					vezjogador = 1;
					pc = false;
					desenharjogo(jogo);
				}
				if ((int)local == 51 && jogo[2][2] == '3') {
					jogo[2][2] = simbolop2;
					system("cls");
					vezjogador = 1;
					pc = false;
					desenharjogo(jogo);
				}
			}
		}
	}
}

char escolhersimbolo(char &simbolop2) {
	cout << "Player 1\nEscolha seu simbolo para jogar pressionando o número correspondente:" << endl << "CÍRCULO (1)" << endl << "X       (2)";
	char simbolop1 = getch();
	if ((int)simbolop1 == 49) {
		simbolop1 = 79;
		simbolop2 = 88;
	}
	else if ((int)simbolop1 == 50) {
		simbolop1 = 88;
		simbolop2 = 79;
	}
	system("cls");
	return simbolop1;
}

void singleplayer() {
	char jogo[3][3];
	char simbolop1, simbolop2;
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
	simbolop1 = escolhersimbolo(simbolop2);
	desenharjogo(jogo);
	iniciarjogosingleplayer(jogo,simbolop1,simbolop2);
	cout << "FIM DE JOGO.";
}


void multiplayer() {

}
#endif