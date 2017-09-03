#ifndef JOGODAVELHA_H
#define JOGODAVELHA_H
#define SINGLEPLAYER = 1
#define MULTIPLAYER = 2

#include <iostream>
#include <stdlib.h>
#include "conio.h"
#include "string"
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

void desenharjogo(string jogo[3][3]) {
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

void verificarseganho(string jogo[3][3]) {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++){
			if (jogo[0][0] == "X" && jogo[0][1] == "X" && jogo[0][2] == "X") {
				system("cls");
				cout << "PARABÉNS, VOCÊ GANHOU!"
			} //PAREI AQUI.
		}
	}
}

void iniciarjogosingleplayer(string jogo[3][3], char simbolo) {
	int encerrar = 0;
	while (encerrar == 0) {
		int local = getch();
		if ((int)local == 55 && jogo[0][0] == "7") {
			jogo[0][0] = simbolo;
			system("cls");
			desenharjogo(jogo);
		}
		if ((int)local == 56 && jogo[0][1] == "8") {
			jogo[0][1] = simbolo;
			system("cls");
			desenharjogo(jogo);
		}
		if ((int)local == 57 && jogo[0][2] == "9") {
			jogo[0][2] = simbolo;
			system("cls");
			desenharjogo(jogo);
		}
		if ((int)local == 52 && jogo[1][0] == "4") {
			jogo[1][0] = simbolo;
			system("cls");
			desenharjogo(jogo);
		}
		if ((int)local == 53 && jogo[1][1] == "5") {
			jogo[1][1] = simbolo;
			system("cls");
			desenharjogo(jogo);
		}
		if ((int)local == 54 && jogo[1][2] == "6") {
			jogo[1][2] = simbolo;
			system("cls");
			desenharjogo(jogo);
		}
		if ((int)local == 49 && jogo[2][0] == "1") {
			jogo[2][0] = simbolo;
			system("cls");
			desenharjogo(jogo);
		}
		if ((int)local == 50 && jogo[2][1] == "2") {
			jogo[2][1] = simbolo;
			system("cls");
			desenharjogo(jogo);
		}
		if ((int)local == 51 && jogo[2][2] == "3") {
			jogo[2][2] = simbolo;
			system("cls");
			desenharjogo(jogo);
		}
	}
}

char escolhersimbolo() {
	cout << "Escolha seu simbolo para jogar pressionando o número correspondente:" << endl << "CÍRCULO (1)" << endl << "X       (2)";
	char simbolo = getch();
	if ((int)simbolo == 49)
		simbolo = 'O';
	else
		simbolo = 'X';
	system("cls");
	return simbolo;
}

void singleplayer() {
	string jogo[3][3];
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
}


void multiplayer() {

}
#endif