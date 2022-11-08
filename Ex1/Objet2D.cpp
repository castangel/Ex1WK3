#include "pch.h"

//############## Objet2D #######################
void Objet2D::ini_obj(int tdim1, int tdim2) {

	this->dim1 = tdim1;
	this->dim2 = tdim2;
}

Objet2D::Objet2D(void) 
{
	ini_obj(5, 10);
}

Objet2D::Objet2D(int tdim1, int tdim2) 
{
	if(tdim1>tdim2){ ini_obj(tdim2, tdim1); }

	else { ini_obj(tdim1,tdim2); }
}


//############## Rectangle #######################

Rectangle::Rectangle(void)
{
	ini_obj(10, 20);
};

Rectangle::Rectangle(int tdim1, int tdim2) : Objet2D(tdim1, tdim2)
{
	if (tdim1 > tdim2) { ini_obj(tdim2, tdim1); }

	else { ini_obj(tdim1, tdim2); }
};

int Rectangle::getLongueur()
{
	return this->dim2;
};
int Rectangle::getLargeur()
{
	return this->dim1;
};

int Rectangle::getPerimetre()
{
	int P =(this->dim2 + this->dim1) * 2;
	return P;
};

int Rectangle::getAire()
{
	int A = (this->dim2 * this->dim1);
	return A;
};

std::string Rectangle::afficheInfo()
{
	std::string txt = "je suis un rectangle de largeur : " + std::to_string(this->dim1) + " de longueur : " + std::to_string(this->dim2) + " de perimetre : " + std::to_string(this->getPerimetre()) + " d'aire : " + std::to_string(this->getAire());
	return txt;
};

//################## Cube #######################

Cube::Cube(void)
{
	ini_obj(10, 10);
};

Cube::Cube(int tcote) : Rectangle(tcote, tcote)
{
	ini_obj(tcote, tcote);
};

int Cube::getCote()
{
	int C = this->dim1;
	return C;
};

int Cube::getPerimetre()
{
	int P = this->dim1 * 4;
	return P;
};

int Cube::getAire()
{
	int A = this->dim1 * dim1;
	return A;
};

std::string Cube::afficheInfo()
{
	std::string txt = "je suis un carre de cote: " + std::to_string(this->dim1)+ " de perimetre : " + std::to_string(this->getPerimetre()) + " d'aire : " + std::to_string(this->getAire());
	return txt;
};