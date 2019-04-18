#ifndef Soda_H
#define Soda_H


class Soda {
public:
	// Constructeurs
	Soda(int codeSoda);

	// méthodes

	bool selectionner(int code);
	void serveSoda();
	void ouvrireCompartement();
	void fermerCompartement();


	//Accesseurs et mutateurs



	void setCodeSoda(int codeSoda);
	int getCodeSoda();


private:

	int codeSoda = 0;


};
#endif
