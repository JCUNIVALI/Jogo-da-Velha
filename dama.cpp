// dama.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "conio.h"
#include "string"
using namespace std;


int menu() {
	cout << "-->\tJogador vs CPU" << endl << "\tMultiplayer";
	int opcao = 1;
	while (true) {
		if (getch() == 72) {//cima
			opcao = 1;
		}
		else if (getch() == 80) {//baixo
			opcao = 2;
		}
		else if (getch() == 13) {//enter
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
	}
}
void sing() {
	string dama[3][3];
	for (int linha = 0; linha < 3; linha++) {
		for (int coluna = 0; coluna < 3; coluna++) {
			if (linha == 0) {
				dama[linha][coluna] = coluna + 7;
			}
			if (linha == 1) {
				dama[linha][coluna] = coluna + 4;
			}
			if (linha == 2) {
				dama[linha][coluna] = coluna + 1;//tem q ver aqui
			}
		}
	}
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			cout << dama[x][y] << "\t";
		}
		cout << endl;
	}
}


void mult() {

}
int main()
{
	int opcao = menu();
	system("cls");
	if (opcao == 1) {
		sing();
	}
	else {
		mult();
	}
	
    return 0;
}

