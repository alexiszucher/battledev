//INCLUDES
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<std::string> split(std::string stringToBeSplitted, std::string delimeter) {
	std::vector<std::string> splittedString;
	int startIndex = 0;
	int  endIndex = 0;
	while ((endIndex = stringToBeSplitted.find(delimeter, startIndex)) < stringToBeSplitted.size()) {

		std::string val = stringToBeSplitted.substr(startIndex, endIndex - startIndex);
		splittedString.push_back(val);
		startIndex = endIndex + delimeter.size();

	}
	if (startIndex < stringToBeSplitted.size()) {
		std::string val = stringToBeSplitted.substr(startIndex);
		splittedString.push_back(val);
	}
	return splittedString;
}

int main()
{
	


	// Initialisation des variables
	string prenom;
	string prenomSansTente;
	int n;
	string reponse;
	int longueurAVerifier;
	int longueurMin = 0;

	// SAISI DU NOMBRE DE PARTICIPANTS
	cout << "Saisir le nombre de participants : " << endl;
	cin >> n;


	// BOUCLE POUR ENTRER LE PRÉNOM ET LA TAILLE DU BÂTON DE CHAQUE PARTICIPANT
	for (int i = 0; i < n; i++)
	{
		cout << "Entrer le prénom du " << i << "er / eme participant ainsi que la taille de son baton : " << endl;
		cin >> reponse;

		//CHERCHER L’ESPACE
		vector<string> reponses = split(reponse, " ");
		prenom = reponses[0];
		longueurAVerifier = int.Parse(reponses[1]);

		//CONDITION COMPARAISON LONGUEURMIN ET LONGUEURAVERIFIER
		if (i == 0 || longueurAVerifier < longueurMin)
		{
			prenomSansTente = prenom;
			longueurMin = longueurAVerifier;
		}
	}

	cout << prenomSansTente << " va devoir dormir dehors ce soir !" << endl;
}