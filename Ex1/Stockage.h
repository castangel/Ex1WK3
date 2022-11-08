#include "pch.h"
class Stockage
{
private : 
	int nb_elements;
	int index;
	Objet2D* *L;
public:
	Stockage(void);
	Stockage(int);
	void ajouter(Objet2D*);
	void ajouter(Objet2D*,int);
	void afficherInfos();
};

