// modulo.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	int nummer = 5;

	if (nummer == 0)
	{
		std::cout << "Die Nummer kann nicht 0 sein " << std::endl;
	}
	else if (nummer % 3 == 0)
	{
		std::cout << "Tic " << std::endl;
	}
	else if (nummer % 5 == 0)
	{
		std::cout << "Tac " << std::endl;
	}
	system("pause");
    return 0;
}

