#include "pch.h"

Stockage::Stockage(void)
{
	this->nb_elements = 0;
	L = new Objet2D * [0];
	this->index = 0;
};

Stockage::Stockage(int nb_elements)
{
	this->index = 0;
	this->nb_elements = nb_elements;
	L = new Objet2D*[nb_elements];
};
void Stockage::ajouter(Objet2D* obj)
{
	L[index] = obj;
	index += 1;
};

void Stockage::ajouter(Objet2D* obj, int i)
{
	L[i] = obj;
};

void Stockage::afficherInfos()
{
	for (int i = 0; i; nb_elements) {
		L[i]->afficheInfo();
	}
};