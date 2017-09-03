#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "conio.h"
#include "string"
#include "jogodavelha.h"
using namespace std;

int main()
{
	int opcao = menu();
	system("cls");
	if (opcao == 1) {
		singleplayer();
	}
	else {
		multiplayer();
	}

	return 0;
}