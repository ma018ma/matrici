#include <iostream>

using namespace std;

int main()
{
    int rows = 10;
    int columns = 10;
    string words[] = {"quattro", "cinque", "dieci", "treno", "tu", "voi"};
    char empty = ' ';

    int wordsLength = sizeof(words) / sizeof(words[0]);
    int contatore = 0;
    char matrix[rows][columns];

    // fill matrix with ' ' riempi con spazi vuoti
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = empty;
        }
    }

    for (int index = 0; index < wordsLength; index++)
    {
        if (index % 3 == 0)
        { // orizzontale
            if (words[index].length() > columns)
            {
                cout << "word " << words[index] << " is too long" << endl;
                continue;
            }
            else
            {
                contatore++;
                int x = rand() % rows; // row random
                int y = rand() % (columns - words[index].length());

                while (matrix[x][y] != empty)
                {
                    x = rand() % rows; // row random
                    y = rand() % (columns - words[index].length());
                }

                for (int i = 0; i < words[index].length(); i++)
                {
                    if (matrix[x][y + i] != empty)
                    {
                        x = rand() % rows; // row random
                        y = rand() % (columns - words[index].length());
                        i = 0;
                    }
                }

                for (int i = 0; i < words[index].length(); i++)
                {
                    matrix[x][y + i] = words[index][i];
                    // cout << "index: " << index << " i: " << i << " x: " << x << " y: " << y << endl;
                    // cout << "matrix[" << x << "][" << y + i << "] = " << words[index][i] << endl;
                    // cout << "result: " << matrix[x][y + i] << endl;
                }
            }
        }
        else if (index % 3 == 1)
        { // verticale
            if (words[index].length() > rows)
            {
                cout << "word " << words[index] << " is too long" << endl;
                continue;
            }
            else
            {
                contatore++;
                int x = rand() % (rows - words[index].length());
                int y = rand() % columns;

                while (matrix[x][y] != empty)
                {
                    x = rand() % (rows - words[index].length());
                    y = rand() % columns;
                }

                for (int i = 0; i < words[index].length(); i++)
                {
                    if (matrix[x + i][y] != empty)
                    {
                        x = rand() % (rows - words[index].length());
                        y = rand() % columns;
                        i = 0;
                    }
                }

                for (int i = 0; i < words[index].length(); i++)
                {
                    matrix[x + i][y] = words[index][i];
                    // cout << "index: " << index << " i: " << i << " x: " << x << " y: " << y << endl;
                    // cout << "matrix[" << x << "][" << y + i << "] = " << words[index][i] << endl;
                    // cout << "result: " << matrix[x][y + i] << endl;
                }
            }
        }
        else // da qui diagonaleeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
        {
            if (words[index].length() > columns && words[index].length() > rows)
            {
                cout << "word " << words[index] << " is too long" << endl;
                continue;
            }
            else
            {
                contatore++;
                int x = rand() % (rows - words[index].length());
                int y = rand() % (columns - words[index].length());

                while (matrix[x +1][y +1] != empty)
                {
                    x = rand() % (rows - words[index].length());
                    y = rand() % (columns - words[index].length());
                }

                for (int i = 0; i < words[index].length(); i++)
                {
                    if (matrix[x + i][y + i] != empty)
                    {
                        x = rand() % (rows - words[index].length());
                        y = rand() % (columns - words[index].length());
                        i = 0;
                    }
                }

                for (int i = 0; i < words[index].length(); i++)
                {
                    x==y;
                    matrix[i+y][i+x] = words[index][i];
                   // cout << "index: " << index << " i: " << i << " x: " << x << " y: " << y << endl;
                    //cout << "matrix[" << x << "][" << y + i << "] = " << words[index][i] << endl;
                    //cout << "result: " << matrix[x][y + i] << endl;
                }
            }
        }
    }

    // // fill the matrix with random char if empty
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         if (matrix[i][j] == empty)
    //         {
    //             matrix[i][j] = random() % 25 + 97;
    //         }
    //     }
    // }

    cout << "devi trovare " << contatore << " parole" << endl;

    // print
    cout << "    ";
    for (int i = 0; i < columns; i++)
    {
        if (i < 10)
        {
            cout << " " << i;
        }
        else
        {
            cout << " " << i;
        }
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {

        if (i < 10)
        {
            cout << "  " << i << " |";
        }
        else
        {
            cout << " " << i << " |";
        }

        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}