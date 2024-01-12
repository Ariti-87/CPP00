#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.hpp"

class Personnage
{
    public:

    Personnage();
    Personnage(std::string nom, std::string nomArme, int degatsArme);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void attaqueMagique(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat();
    std::string getNom();

    private:

    std::string m_nom;
    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif




/* Sans utiliser objet Arme

#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{
	public:

	Personnage(); // constructeur par default
	Personnage(std::string nomArme, int degatsArme); // constructeur surcharger
	~Personnage(); // destructeur
	void recevoirDegats(int nbDegats);
	void attaquer(Personnage &cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	bool estVivant() const;


	private:

	int m_vie;
	int m_mana;
	std::string m_nomArme; //Pas de using namespace std, il faut donc mettre std:: devant string
	int m_degatsArme;
};

// //Prototype de la méthode (dans le .hpp) :
// void maMethode(int parametre) const;

#endif */




