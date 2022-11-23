#ifndef _LISTE
#define _LISTE
#include "Noeud.h" // offrant le type Noeud 
#include "Element.h" //offrant le type Elem

class ArbreB
{
    public:

    ArbreB();

    ~ArbreB();

    void suppressionRacine();

    const Noeud * rechercheElem(const Elem & e)const;

    Noeud* insertionElement(const Elem &e);

    void affichageInfixe()const;

    Noeud * racine; 
};
#endif