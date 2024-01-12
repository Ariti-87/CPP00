// STRUCTURE --------------------------------------------------------------

// #include <iostream>

// int main()
// {
// 	std::cout << "Hello World! I'm a C++ program";
// 	std::cout << "I'm a C++ program";
// 	std::cout << std::endl;
// }

// VARIABLES --------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main ()
// {
// 	int a=5;               // initial value: 5
// 	int b(3);              // initial value: 3
// 	int c{2};              // initial value: 2
// 	int result;            // initial value undetermined

// 	a = a + b;
// 	result = a - c;
// 	cout << result << endl;

// 	return 0;
// }

// VARIABLES --------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;

// int main ()
// {
// 	string mystring;
// 	mystring = "This is the initial string content";
// 	cout << mystring << endl;
// 	mystring = "This is a different string content";
// 	cout << mystring << endl;
// 	return 0;
// }

// CONSTANTS --------------------------------------------------------------

// #include <iostream>
// using namespace std;

// const double pi = 3.14159;
// const char newline = '\n';

// int main ()
// {
// 	double r = 5.0;               // radius
// 	double circle;

// 	circle = 2 * pi * r;
// 	cout << circle;
// 	cout << newline;
// }

// CONSTANTS --------------------------------------------------------------

// #include <iostream>
// using namespace std;

// #define PI 3.14159
// #define NEWLINE '\n'

// int main ()
// {
// 	double r=5.0;               // radius
// 	double circle;

// 	circle = 2 * PI * r;
// 	cout << circle;
// 	cout << NEWLINE;
// }

// OPERATORS --------------------------------------------------------------

// //assignment operator
// #include <iostream>
// using namespace std;

// int main ()
// {
// 	int a, b;         // a:?,  b:?
// 	a = 10;           // a:10, b:?
// 	b = 4;            // a:10, b:4
// 	a = b;            // a:4,  b:4
// 	b = 7;            // a:4,  b:7

// 	cout << "a:";
// 	cout << a;
// 	cout << " b:";
// 	cout << b << endl;
// }

// OPERATORS --------------------------------------------------------------

// //compound assignment operators
// #include <iostream>
// using namespace std;

// int main ()
// {
//   int a, b=3;
//   a = b;
//   a+=2;             // equivalent to a=a+2
//   cout << a;
// }

// OPERATORS --------------------------------------------------------------

// // conditional operator
// #include <iostream>
// using namespace std;

// int main ()
// {
// 	int a,b,c;

// 	a=2;
// 	b=7;
// 	c = (a>b) ? a : b;

// 	cout << c << '\n';
// }

// BASIC INPUT/OUTPUT  --------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main ()
// {
// 	string name;
// 	cout << "Please enter your name : ";
// 	getline (cin, name);
// 	int i;
// 	cout << "Please enter your age : ";
// 	cin >> i;
// 	cout << "hello " << name;
// 	cout << " you look like to have " << i+10 << ".\n";
// 	return 0;
// }


// BASIC INPUT/OUTPUT  --------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;

// int main ()
// {
//   string mystr;
//   cout << "What's your name? ";
//   getline (cin, mystr);
//   cout << "Hello " << mystr << ".\n";
//   cout << "What is your favorite team? ";
//   getline (cin, mystr);
//   cout << "I like " << mystr << " too!\n";
//   return 0;
// }

// BASIC INPUT/OUTPUT  --------------------------------------------------------------

// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;

// int main ()
// {
// 	string mystr;
// 	float price=0;
// 	int quantity=0;

// 	cout << "Enter price: ";
// 	getline (cin,mystr);
// 	stringstream(mystr) >> price;
// 	cout << "Enter quantity: ";
// 	getline (cin,mystr);
// 	stringstream(mystr) >> quantity;
// 	cout << "Total price: " << price*quantity << endl;
// 	return 0;
// }

// OPENCLASSROOM  --------------------------------------------------------------

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
// 	cout << "Combien vaut pi ?" << endl;
// 	double piUtilisateur(-1.); //On crée une case mémoire pour stocker unnombre réel
// 	cin >> piUtilisateur; //Et on remplit cette case avec ce qu'écritl'utilisateur

// 	cin.ignore();

// 	cout << "Quel est votre nom ?" << endl;
// 	string nomUtilisateur("Sans nom"); //On crée une case mémoire pour contenir une chaine de caractères
// 	getline(cin, nomUtilisateur); //On remplit cette case avec toute la ligne que l'utilisateur a écrit

// 	cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pi vaut " << piUtilisateur << "." << endl;

// 	return 0;
// }

// OPENCLASSROOM SWITCH --------------------------------------------------------------

// #include <iostream>

// using namespace std;

// int main()
// {
// 	int nbAnimaux(2);

// 	switch (nbAnimaux)
// 	{
// 		case 0:
// 			cout << "Vous n'avez pas d'animaux de compagnie" << endl;
// 			break;

// 		case 1:
// 			cout << "C'est super d'avoir un fidele compagnon !" << endl;
// 			break;

// 		case 2:
// 			cout << "Ca doit en faire du monde a la maison !" << endl;
// 			break;

// 		default:
// 			cout << "Votre budget croquettes doit etre important" << endl;
// 			break;
// 	}

// 	return 0;
// }

// OPENCLASSROOM FONCTION --------------------------------------------------------------

// #include <iostream>
// using namespace std;

// double carre(double x)
// {
// 	double resultat;
// 	resultat = x*x;
// 	return resultat;
// }

// int main()
// {
// 	for(int i(1); i<=20 ; i++)
// 	{
// 		cout << "Le carre de " << i << " est : " << carre(i) << endl;
// 	}
// 	return 0;
// }

// OPENCLASSROOM FONCTION --------------------------------------------------------------

// #include <iostream>
// using namespace std;

// void dessineRectangle(int l, int h)
// {
// 	for(int ligne(0); ligne < h; ligne++)
// 	{
// 		for(int colonne(0); colonne < l; colonne++)
// 		{
// 			cout << "*";
// 		}
// 		cout << endl;
// 	}
// }

// int main()
// {
// 	int largeur, hauteur;
// 	cout << "Largeur du rectangle : ";
// 	cin >> largeur;
// 	cout << "Hauteur du rectangle : ";
// 	cin >> hauteur;

// 	dessineRectangle(largeur, hauteur);
// 	return 0;
// }


// OPENCLASSROOM  --------------------------------------------------------------

// #include <iostream>

// using namespace std;

// // Prototype avec les valeurs par défaut
// int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);

// // Main
// int main()
// {
// 	cout << nombreDeSecondes(1, 10, 25) << endl;

// 	return 0;
// }

// // Définition de la fonction, SANS les valeurs par défaut
// int nombreDeSecondes(int heures, int minutes, int secondes)
// {
// 	int total = 0;

// 	total = heures * 60 * 60;
// 	total += minutes * 60;
// 	total += secondes;

// 	return total;
// }

// OPENCLASSROOM - Tableau Statique --------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int const nombreNotes(6);
// 	double notes[nombreNotes];

// 	notes[0] = 12.5;
// 	notes[1] = 19.5;  //Bieeeen !
// 	notes[2] = 6.;    //Pas bien !
// 	notes[3] = 12;
// 	notes[4] = 14.5;
// 	notes[5] = 15;

// 	double moyenne(0);
// 	for(int i(0); i<nombreNotes; ++i)
// 	{
// 		moyenne += notes[i];   //On additionne toutes les notes
// 	}
// 	//En arrivant ici, la variable moyenne contient la somme des notes (79.5)
// 	//Il ne reste donc qu'à diviser par le nombre de notes
// 	moyenne /= nombreNotes;

// 	cout << "Votre moyenne est : " << moyenne << endl;

// 	return 0;
// }

// OPENCLASSROOM - Tableau Dynamique --------------------------------------------------------------

// #include <iostream>
// #include <vector> //Ne pas oublier !
// using namespace std;

// int main()
// {
// 	vector<int> tableau(5);
// 	vector<int> tableau(5, 3);  //Crée un tableau de 5 entiers valant tous 3
// 	vector<string> listeNoms(12, "Sans nom"); //Crée un tableau de 12 strings valant toutes « Sans nom »
// 	vector<double> tableau; //Crée un tableau de 0 nombre à virgule ou tableau vide

// 	vector<int> tableau(3,2); //Un tableau de 3 entiers valant tous 2
// 	tableau.push_back(8);  //On ajoute une 4ème case qui contient la valeur 8
// 	tableau.push_back(7);  //On ajoute une 5ème case qui contient la valeur 7
// 	tableau.push_back(14); //Et encore une avec le nombre 14 cette fois

// 	tableau.pop_back(); //Et hop ! Plus que 2 cases
// 	tableau.pop_back(); //Et hop ! Plus que 1 case

// 	vector<int> tableau(5,4); //Un tableau de 5 entiers valant tous 4
// 	int const taille(tableau.size());
// 	//Une variable qui contient la taille du tableau
// 	//La taille peut varier mais la valeur de cette variable ne changera pas
// 	//On utilise donc une constante
// 	//À partir d'ici, la constante 'taille' vaut donc 5

// 	return 0;
// }

// OPENCLASSROOM - Tableau Dynamique --------------------------------------------------------------

// #include <iostream>
// #include <vector> //Ne pas oublier !
// using namespace std;

// int main()
// {
// 	vector<double> notes; //Un tableau vide

// 	notes.push_back(12.5);  //On ajoute des cases avec les notes
// 	notes.push_back(19.5);
// 	notes.push_back(6);
// 	notes.push_back(12);
// 	notes.push_back(14.5);
// 	notes.push_back(15);

// 	double moyenne(0);
// 	for(int i(0); i<notes.size(); ++i)
// 	//On utilise notes.size() pour la limite de notre boucle
// 	{
// 		moyenne += notes[i];   //On additionne toutes les notes
// 	}

// 	moyenne /= notes.size();
// 	//On utilise à nouveau notes.size() pour obtenir le nombre de notes

// 	cout << "Votre moyenne est : " << moyenne << endl;

// 	return 0;
// }

// #ifndef TABLEAU_H_INCLUDED
// #define TABLEAU_H_INCLUDED

// #include <vector>

// void fonctionAvecTableau(std::vector<int>& tableau);

// #endif // TABLEAU_H_INCLUDED

// OPENCLASSROOM - Flux --------------------------------------------------------------

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
// 	ofstream monFlux("C:/Nanoc/C++/Fichiers/scores.txt");
// 	//Déclaration d'un flux permettant d'écrire dans le fichier
// 	// C:/Nanoc/C++/Fichiers/scores.txt chemin absolue
// 	// Fichiers/scores.txt chemin relatif si programme dans C++
// 	return 0;
// }
// string const nomFichier("C:/Nanoc/scores.txt");

// ofstream monFlux(nomFichier.c_str());
// //Déclaration d'un flux permettant d'écrire dans un fichier.

// ofstream monFlux(nomFichier.c_str(), ios::app);
// // Append pour ne pas supprimer le .txt s il existe deja

// ofstream monFlux("C:/Nanoc/scores.txt");  //On essaye d'ouvrir le fichier

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main()
// {
// 	string const nomFichier("C:/Nanoc/scores.txt");
// 	ofstream monFlux(nomFichier.c_str());

// 	if(monFlux)
// 	{
// 		monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
// 		monFlux << 42.1337 << endl;
// 		int age(36);
// 		monFlux << "J'ai " << age << " ans." << endl;
// 	}
// 	else
// 	{
// 		cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
// 	}
// 	return 0;
// }

// ifstream monFlux("C:/Nanoc/C++/data.txt");  //Ouverture d'un fichier en lecture

// if(monFlux)
// {
//     //Tout est prêt pour la lecture.
// }
// else
// {
//     cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
// }

// string ligne;
// getline(monFlux, ligne); //On lit une ligne complète

// double nombre;
// monFlux >> nombre; //Lit un nombre à virgule depuis le fichier
// string mot;
// monFlux >> mot;    //Lit un mot depuis le fichier

// char a;
// monFlux.get(a);    // Ce code lit une seule lettre et la stocke dans la variable a

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main()
// {
// 	ifstream fichier("C:/Nanoc/fichier.txt");

// 	if(fichier)
// 	{
// 		//L'ouverture s'est bien passée, on peut donc lire

// 		string ligne; //Une variable pour stocker les lignes lues

// 		while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
// 		{
// 			cout << ligne << endl;
// 			//Et on l'affiche dans la console
// 			//Ou alors on fait quelque chose avec cette ligne
// 			//À vous de voir
// 		}
// 	}
// 	else
// 	{
// 		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
// 	}

// 	return 0;
// }

// void f()
// {
// 	ofstream flux;  //Un flux sans fichier associé

// 	flux.open("C:/Nanoc/data.txt");  //On ouvre le fichier C:/Nanoc/data.txt

// 	//Utilisation du fichier

// 	flux.close();  //On referme le fichier
// 					//On ne peut plus écrire dans le fichier à partir d'ici
// }

// ofstream fichier("C:/Nanoc/data.txt");

// int position = fichier.tellp(); //On récupère la position

// cout << "Nous nous situons au " << position << "eme caractere du fichier." << endl;

// // pour ifstream on utilise tellg

// flux.seekp(nombreCaracteres, position);

// // avec position : "ios::beg","ios::end","ios::cur"

// // pour ifstream on utilise seekg

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ifstream fichier("C:/Nanoc/meilleursScores.txt");  //On ouvre le fichier
//     fichier.seekg(0, ios::end);  //On se déplace à la fin du fichier

//     int taille;
//     taille = fichier.tellg();
//     //On récupère la position qui correspond donc à la taille du fichier !

//     cout << "Taille du fichier : " << taille << " octets." << endl;

//     return 0;
// }

// OPENCLASSROOM - POINTEURS --------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
	int *pointeur(0);
	double *pointeurA(0);
	unsigned int *pointeurB(0);
	string *pointeurC(0);
	vector<int> *pointeurD(0);
	int const *pointeurE(0);


	int ageUtilisateur(16);
	//Une variable de type int
	int *ptr(0);
	//Un pointeur pouvant contenir l'adresse d'un nombre entier

	ptr = &ageUtilisateur;
	//On met l'adresse de 'ageUtilisateur' dans le pointeur 'ptr'

	return 0;
}
// Pour une variable int nombre :

// nombre permet d'accéder à la valeur de la variable ;

// &nombre permet d'accéder à l adresse de la variable.

// Sur un pointeur int *pointeur  :

// pointeur permet d'accéder à la valeur du pointeur, c'est-à-dire à l adresse de la variable pointée ;

// *pointeur permet d'accéder à la valeur de la variable pointée.


#include <iostream>
using namespace std;

int main()
{
	int* pointeur(0);
	pointeur = new int;

	cout << "Quel est votre age ? ";
	cin >> *pointeur;
	//On écrit dans la case mémoire pointée par le pointeur 'pointeur'

	cout << "Vous avez " << *pointeur << " ans." << endl;
	//On utilise à nouveau *pointeur
	delete pointeur;   //Ne pas oublier de libérer la mémoire
	pointeur = 0;       //Et de faire pointer le pointeur vers rien

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string reponseA, reponseB, reponseC;
	reponseA = "La peur des jeux de loterie";
	reponseB = "La peur du noir";
	reponseC = "La peur des vendredis treize";

	cout << "Qu'est-ce que la 'kenophobie' ? " << endl; //On pose la question
	cout << "A) " << reponseA << endl; //Et on affiche les trois propositions
	cout << "B) " << reponseB << endl;
	cout << "C) " << reponseC << endl;

	char reponse;
	cout << "Votre reponse (A,B ou C) : ";
	cin >> reponse; //On récupère la réponse de l'utilisateur

	string *reponseUtilisateur(0); //Un pointeur qui pointera sur la réponse choisie
	switch(reponse)
	{
	case 'A':
		reponseUtilisateur = &reponseA; //On déplace le pointeur sur la réponse choisie
		break;
	case 'B':
		reponseUtilisateur = &reponseB;
		break;
	case 'C':
		reponseUtilisateur = &reponseC;
		break;
	}

	//On peut alors utiliser le pointeur pour afficher la réponse choisie
	cout << "Vous avez choisi la reponse : " << *reponseUtilisateur << endl;

	return 0;
}

// OPENCLASSROOM - POO ---------------------------------------------------------
// OPENCLASSROOM ---------------------------------------------------------------
// OPENCLASSROOM ---------------------------------------------------------------
// OPENCLASSROOM ---------------------------------------------------------------
// OPENCLASSROOM ---------------------------------------------------------------


// Je vous avais dit qu'un objet était constitué de variables et de fonctions.

// En fait, le vocabulaire est un peu différent avec les objets :

// Les variables contenues à l'intérieur des objets sont appelées "attributs". On parle aussi de variables membres.

// Les fonctions sont appelées "méthodes". On parle aussi de fonctions membres.

int main()
{
	string maChaine("Bonjour !");
	cout << "Longueur de la chaine : " << maChaine.size();

	return 0;
}

int main()
{
	string chaine("Bonjour !");
	chaine.erase();
	cout << "La chaine contient : " << chaine << endl;

	return 0;
}

// string substr( size_type index, size_type num = npos );

int main()
{
	string chaine("Bonjour !");
	cout << chaine.substr(3, 4) << endl; //Affiche "jour"

	string chaine("Bonjour !");
	cout << chaine[3] << endl;  //Affiche la lettre 'j'
	return 0;
}

// OPENCLASSROOM - CLASS ---------------------------------------------------------

class Personnage // Commence par une Maj
{
	// Méthodes
	void recevoirDegats(int nbDegats)
	{

	}

	void attaquer(Personnage &cible)
	{

	}

	void boirePotionDeVie(int quantitePotion)
	{

	}

	void changerArme(string nomNouvelleArme, int degatsNouvelleArme)
	{

	}

	bool estVivant()
	{

	}

	// Attributs
	int m_vie; // variables membres commence par m_ pour les differencier des variables classiques
	int m_mana;
	string m_nomArme;
	int m_degatsArme;
}; // on oublie pas le ;
