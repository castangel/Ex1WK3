#pragma once
#include "pch.h"

class Objet2D
{
protected :
	int dim1;//largeur
	int dim2;//longueur
	void ini_obj(int tdim1, int tdim2);
public:
	Objet2D(void);
	Objet2D(int tdim1,int tdim2);
	virtual int getPerimetre()=0;
	virtual int getAire()=0;
	virtual std::string afficheInfo()=0;

};

class Rectangle : public Objet2D
{
public: 
	Rectangle(void);
	Rectangle(int tdim1, int tdim2);
	int getLongueur();
	int getLargeur();
	virtual int getPerimetre();
	virtual int getAire();
	virtual std::string afficheInfo();

};

class Cube : public Rectangle
{
public : 
	Cube(void);
	Cube(int tcote);
	int getCote();
	int getPerimetre();
	int getAire();
	std::string afficheInfo();
};