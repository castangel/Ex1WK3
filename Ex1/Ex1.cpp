#include "pch.h"

int main()
{
	Objet2D* obj;
	int choix;
	std::cout << "Tapez 1 au 6030 pour avoir un rectangle ou 2 pour un carre : ";
	std::cin >> choix;
	switch (choix) {
	case(1):
		obj = new Rectangle(40,60);
		std::cout << std::endl;
		std::cout << obj->afficheInfo();
		std::cout << std::endl;
		break;
	case(2):
		obj = new Cube(50);
		std::cout << std::endl;
		std::cout << obj->afficheInfo();
		std::cout << std::endl;
		break;

	}
}

