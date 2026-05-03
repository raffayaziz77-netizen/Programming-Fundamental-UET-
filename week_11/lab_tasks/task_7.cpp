#include<iostream>
using namespace std;

bool goal_checker(string coords, string goal[][5]);

int main()
{
    string goal_post[6][5] = {
        {"#", "", "", "", "#"},
        {"#", "", "", "", "#"},
        {"#", "", "", "", "#"},
        {"#","#", "#","#","#"},
        {"",  "", "#", "", ""},
        {"",  "", "#", "", ""}
    };

    string coords;

    cout << "Enter coords to shoot ball or L to exit: ";

    while (true)
    {
        cin >> coords;

        if (coords == "L")
            break;

        bool is_goal = goal_checker(coords, goal_post);

        if (is_goal)
            cout << "Goallllll!!!\n";
        else
            cout << "No goal\n";
    }

    return 0;
}

bool goal_checker(string coords, string goal[][5])
{
    int row = coords[0] - 'A';cout<<row;
    int col = coords[1] - '1';cout<<col;

    if (row < 3 && goal[row][col] != "#")
        return true;

    return false;
}