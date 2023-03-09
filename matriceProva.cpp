#include <iostream>
#include <random>
using namespace std;

int main()
{

    // int matrice1[5][5]; //te la crea vuota
    // //te la riempi con il for
    // int matrice[][] = { {1,2}, {3,4} };
    // int array1[2]={1,2};
    // int array2[2]={3,4};
    // int arraySpeciale[2]={array1,array2};

    int righe = 9;
    int colonne = 9;

    int matrice[righe][colonne];

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = rand() % 10;
        }
    }
    // aggiungo da qui
    // modifica numeri
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            if (matrice[i][j] = 0)//< di 5 
            {
                matrice[i][j] = 0;//in zeri
            }
        }
    }
    // diagonale di 9 
    for (int i =0;i <9; i++)
    {
    matrice[i][i] = 9;
    matrice[i][8-i] = 9;}
    for (int i =0;i <righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            cout << matrice [i][j]<< endl;
        }
    }
    // fino a qui
    cout << "    ";
    for (int i = 0; i < colonne; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int trattini = colonne * 2 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < righe; i++)
    {

        cout << i << "|  ";

        for (int j = 0; j < colonne; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    // VOI SIETE QUI
    // input matrice, righe, colonne

    // output non ci devono essere i <5
    

 
 //somma di tutta la matrice
    /*int somma = 0;
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            somma += matrice[i][j];  
        }
    }
    cout << somma << endl;
*/
}
