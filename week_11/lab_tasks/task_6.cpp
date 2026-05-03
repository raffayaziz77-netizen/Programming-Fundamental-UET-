#include<iostream>
using namespace std;

string battle(string choice, string array[5][5])
{
    int row = choice[0] - 'A';
    int col = choice[1] - '1';

    if (array[row][col] == "*")
    {
        return "boom\n";
    }
    else
    {
        return "splash\n";
    }
}

int main()
{
    string battle_ship[5][5] = {
        {".",".",".","*","*"},
        {".","*",".",".","."},
        {".","*",".",".","."},
        {".","*",".",".","."},
        {".",".","*","*","*"},
    };

    string coords;

    cout << "Enter coords or L to exit: ";

    while (true)
    {
        cin >> coords;

        if (coords == "L")
            break;

        cout << battle(coords, battle_ship);
    }

    return 0;
}