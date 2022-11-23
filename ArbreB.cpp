#include "ArbreB.h"
#include <iostream>
//using namespace std;



ArbreB::ArbreB()
{   
    racine=nullptr;
    
}


void ArbreB::suppressionRacine()
{
    delete racine;
}


ArbreB::~ArbreB()
{
    suppressionRacine(); //supprime recursivement TOUS les noeuds de l'arbre à partir de la racine.
}


const Noeud * ArbreB::rechercheElem(const Elem & e)const 
{
    return racine->rechercheElement(e); //on appel rechercheElement de Noeud.h 
}



Noeud* ArbreB::insertionElement(const Elem & e)
{
    if (racine==nullptr)
    {
        racine=new Noeud(e); 
    } 
    return racine->insertionElement(e);
}


void ArbreB::affichageInfixe()const
{
    racine->affichageInfixe();
}