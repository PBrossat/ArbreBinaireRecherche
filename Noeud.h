#ifndef _NOEUD
#define _NOEUD
#include "Element.h"


class Noeud
{
    public:
    Noeud();
    Noeud(const Elem &e);
    ~Noeud();
    const Noeud* rechercheElement(const Elem &e)const;   
    Noeud*  insertionElement( const Elem &e);
    void affichageInfixe()const;
    Elem info;
    Noeud * filsD; //fils droit du noeud 
    Noeud * filsG; //fils gauche du noeud 

};



#endif