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