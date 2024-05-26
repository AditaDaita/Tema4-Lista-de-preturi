// Lista de preturi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
//Creem o lista de preturi din trei piete
	int pretPiataMedias, pretPiataSibiu, pretPiataDumbraveni;
	std::cout << "Introduceti pretul din piata Medias " << std::endl;
	std::cin >> pretPiataMedias;

	std::cout << "Introduceti pretul din piata Sibiu " << std::endl;
	std::cin >> pretPiataSibiu;

	std::cout << "Introduceti pretul din piata Dumbraveni " << std::endl;
	std::cin >> pretPiataDumbraveni;

//Calculam pretul total
	int pretulTotal = pretPiataMedias + pretPiataSibiu + pretPiataDumbraveni;
	std::cout << "pretulTotal este: " << pretulTotal << std::endl;

//Calculam media preturilor
	int mediaPreturilor = pretulTotal / 3;
	std::cout << "Media preturilor este: " << mediaPreturilor << std::endl;

		 






}


