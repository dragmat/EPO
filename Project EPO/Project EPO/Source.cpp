#include "Header.h"

vector <int> tablica1, tablica2, tablica3;
list <int> lista1, lista2, lista3;
queue<int> kolejka1, kolejka2, kolejka3;
stack<int> stos1, stos2, stos3;


/**************************************     MAIN       ***************************************/
int main()
{
	int wybor = 100;
	menu_glowne_wyswietl();
	while (wybor != 0)
	{
		cin >> wybor;
		menu_glowne_switch(wybor);
	}
	cin.get();
	return 0;
}
/********************************        KONIEC MAIN       ***********************************/


/******************************          MENU G£ÓWNE        **********************************/
//WYŒWIETL MENU G£ÓWNE
void menu_glowne_wyswietl()
{
	system("cls");
	cout << endl << "MENU GLOWNE" << endl << endl << endl <<
		"W celu wybrania struktury wybierz odpowiednia cyfre:" << endl << endl <<
		"1 - Tablica" << endl <<
		"2 - Lista" << endl <<
		"3 - Kolejka" << endl <<
		"4 - Stos" << endl <<
		"0 - Wyjscie z programu" << endl << endl;
}

//FUNKCJA SWITCH MENU G£ÓWNEGO
void menu_glowne_switch(int wybor)
{
	switch (wybor) {
	case 0: exit(0); break;
		//case 1: tablica(); break;
		//case 2: lista(); break;
		//case 3: kolejka();  break;
		//case 4: stos(); break;
	default: cout << endl << "Niepoprawny wybor" << endl; Sleep(500); system("cls"); menu_glowne_wyswietl(); break;
	}
}
/***************************          KONIEC  MENU G£ÓWNE        *****************************/


/**************************           MENU OKIEN STRUKTUR        *****************************/
void menu_struktur_wyswietl(string nazwa)
{
	system("cls");
	cout << endl << "MENU " << nazwa << endl;
	cout << endl << "W celu wybrania operacji nalezy wybrac odpowiednia cyfre:" << endl << endl <<
		"1 - Dodaj" << endl <<
		"2 - Usun" << endl <<
		"3 - Wyszukaj" << endl <<
		"4 - Wstaw" << endl <<
		"5 - Sortuj rosnaco" << endl <<
		"6 - Sortuj malejaco" << endl <<
		"0 - Powrot do menu glownego" << endl << endl;
}
/*********************           KONIEC MENU OKIEN STRUKTUR        ***************************/


