#include "func.h"

char Player[10][10] = {//A B  C  D  E  F  G  H  I  J
                 { '.','.','.','.','.','.','.','.','.','.'}, //0
                 { '.','.','.','.','.','.','.','.','.','.'}, //1
                 { '.','.','.','.','.','.','.','.','.','.'}, //2
                 { '.','.','.','.','.','.','.','.','.','.'}, //3
                 { '.','.','.','.','.','.','.','.','.','.'}, //4
                 { '.','.','.','.','.','.','.','.','.','.'}, //5
                 { '.','.','.','.','.','.','.','.','.','.'}, //6
                 { '.','.','.','.','.','.','.','.','.','.'}, //7
                 { '.','.','.','.','.','.','.','.','.','.'}, //8
                 { '.','.','.','.','.','.','.','.','.','.'}  //9
};
char Comp1[10][10] = {//A B  C  D  E  F  G  H  I  J
                 { '.','.','.','.','.','.','.','.','.','.'}, //0
                 { '.','.','.','.','.','.','.','.','.','.'}, //1
                 { '.','.','.','.','.','.','.','.','.','.'}, //2
                 { '.','.','.','.','.','.','.','.','.','.'}, //3
                 { '.','.','.','.','.','.','.','.','.','.'}, //4
                 { '.','.','.','.','.','.','.','.','.','.'}, //5
                 { '.','.','.','.','.','.','.','.','.','.'}, //6
                 { '.','.','.','.','.','.','.','.','.','.'}, //7
                 { '.','.','.','.','.','.','.','.','.','.'}, //8
                 { '.','.','.','.','.','.','.','.','.','.'}  //9
};
char Comp2[10][10] = {//A B  C  D  E  F  G  H  I  J
                 { '.','.','.','.','.','.','.','.','.','.'}, //0
                 { '.','.','.','.','.','.','.','.','.','.'}, //1
                 { '.','.','.','.','.','.','.','.','.','.'}, //2
                 { '.','.','.','.','.','.','.','.','.','.'}, //3
                 { '.','.','.','.','.','.','.','.','.','.'}, //4
                 { '.','.','.','.','.','.','.','.','.','.'}, //5
                 { '.','.','.','.','.','.','.','.','.','.'}, //6
                 { '.','.','.','.','.','.','.','.','.','.'}, //7
                 { '.','.','.','.','.','.','.','.','.','.'}, //8
                 { '.','.','.','.','.','.','.','.','.','.'}  //9
};
char Comp3[10][10] = {//A B  C  D  E  F  G  H  I  J
                 { '.','.','.','.','.','.','.','.','.','.'}, //0
                 { '.','.','.','.','.','.','.','.','.','.'}, //1
                 { '.','.','.','.','.','.','.','.','.','.'}, //2
                 { '.','.','.','.','.','.','.','.','.','.'}, //3
                 { '.','.','.','.','.','.','.','.','.','.'}, //4
                 { '.','.','.','.','.','.','.','.','.','.'}, //5
                 { '.','.','.','.','.','.','.','.','.','.'}, //6
                 { '.','.','.','.','.','.','.','.','.','.'}, //7
                 { '.','.','.','.','.','.','.','.','.','.'}, //8
                 { '.','.','.','.','.','.','.','.','.','.'}  //9
};
char Comp4[10][10] = {//A B  C  D  E  F  G  H  I  J
                 { '.','.','.','.','.','.','.','.','.','.'}, //0
                 { '.','.','.','.','.','.','.','.','.','.'}, //1
                 { '.','.','.','.','.','.','.','.','.','.'}, //2
                 { '.','.','.','.','.','.','.','.','.','.'}, //3
                 { '.','.','.','.','.','.','.','.','.','.'}, //4
                 { '.','.','.','.','.','.','.','.','.','.'}, //5
                 { '.','.','.','.','.','.','.','.','.','.'}, //6
                 { '.','.','.','.','.','.','.','.','.','.'}, //7
                 { '.','.','.','.','.','.','.','.','.','.'}, //8
                 { '.','.','.','.','.','.','.','.','.','.'}  //9
};

bool check_file_is_empty(ifstream& file) {
    return file.peek() == EOF;
}

void CLEAR() {
    system("cls");
}

void ClearMap(int mode) {
    if (mode == 0) {
        for (int Y = 0; Y < 10; Y++) 
            for (int X = 0; X < 10; X++) { Player[Y][X] = '.'; Comp1[Y][X] = '.'; Comp2[Y][X] = '.';} }
    if (mode == 1) {
        for (int Y = 0; Y < 10; Y++)
            for (int X = 0; X < 10; X++) {Comp1[Y][X] = '.'; Comp2[Y][X] = '.'; Comp3[Y][X] = '.';  Comp4[Y][X] = '.'; } }
}

void DrawMapPvC() //функция для вывода поля игрок/комп
{
    CLEAR();
    cout << "\n";
    cout << "\t\t\t\t\t" << "        Player 1" << "\n";
    cout << "\t\t\t\t\t" << "  A B C D E F G H I J";
    cout << "\t\t\t\t\t";
    for (int Y = 0; Y < 10; Y++)
    {
        cout << "\n" << "\t\t\t\t\t" << Y << " ";
        for (int X = 0; X < 10; X++)
        {
            cout << Player[Y][X] << " ";
        }
    }

    cout << "\n\n\n\n" << "\t\t\t\t\t" << "        Player 2" << "\n";
    cout << "\t\t\t\t\t" << "  A B C D E F G H I J";
    for (int Y = 0; Y < 10; Y++)
    {
        cout << "\n" << "\t\t\t\t\t" << Y << " ";
        for (int X = 0; X < 10; X++)
        {
            cout << Comp1[Y][X] << " ";
        }
    }
}
void DrawMapCvC() //функция для вывода поля комп/комп
{
    CLEAR();
    cout << "\n";
    cout << "\t\t\t\t\t" << "        Player 1" << "\n";
    cout << "\t\t\t\t\t" << "  A B C D E F G H I J";
    for (int Y = 0; Y < 10; Y++)
    {
        cout << "\n" << "\t\t\t\t\t" << Y << " ";
        for (int X = 0; X < 10; X++)
        {
            cout << Comp1[Y][X] << " ";
        }
    }
    cout << "\n\n\n\n" << "\t\t\t\t\t" << "        Player 2" << "\n";
    cout << "\t\t\t\t\t" << "  A B C D E F G H I J";
    for (int Y = 0; Y < 10; Y++)
    {
        cout << "\n" << "\t\t\t\t\t" << Y << " ";
        for (int X = 0; X < 10; X++)
        {
            cout << Comp4[Y][X] << " ";
        }
    }
}

void Menu()
{
    CLEAR();
    char checker;
    char checker2;
    cout << "\n\t\t\t\t\t\tSEA BATTLE\t\t\t\t\t\t\n";
    cout << "\n\n\t\t\tIf you want to choose something from the items, enter the number.\n";
    cout << "\n\t\t\t\t\t\t1 - Start game\n";
    cout << "\t\t\t\t\t\t2 - Rules\n";
    cout << "\t\t\t\t\t\t3 - Scoreboard\n";
    cout << "\t\t\t\t\t\t0 - Exit\n";
    cout << "Enter: "; cin >> checker;
    if (checker == '1')
    {
        checker = 0;
        cout << "\n";
        for (;;) {
            cout << "\n\t\t\t\t\t     Choose gamemode";
            cout << "\n\t\t\t\t\t    1. Player VS Comp\n\t\t\t\t\t    2. Comp VS Comp\n";
            cout << "Enter: "; cin >> checker;
            if (checker == '1') { DrawMapPvC(); GamePlayerVSComp(); break; }
            else if (checker == '2') { DrawMapCvC(); GameCompVSComp(); break; }
            else cout << "\nIncorect gamemode";
        }
    }
    else if (checker == '3') { 
        LeaderboardShow(); 
        char check;
        CHECK:
        cout << "\n\n\nB - Back\nEnter: "; cin >> check;
        if (toupper(check) == 'B') { Menu(); }
        else { cout << "Invalid symbol"; goto CHECK; }
    }
    else if (checker == '0')
        exit(0);
    else if (checker == '2')
    {
        CLEAR();
        cout << "\n\tRULES\t" << endl;
        cout << "\n\tRules for the location:\t\n" << endl;
        cout << "It is impossible for the ships to touch either sides or even corners."
            << "\nThere must be at least one cell between them. You can press ships to the edges of the field. Yes, a ship is a row of cells. no bends should be." << endl;
        cout << "\n\tShips and battle:\t\n" << endl;
        cout << "A - 4 pieces. \nB - 3 pieces. \nC - 2 pieces.\nD - 1 piece.\n" << endl;
        cout << "* - missed \nX - hit" << endl;
        cout << "The goal of this game is to destroy all enemy ships.The winner is the one who does it first." << endl;
        cout << "\n\tGame progress\t\n" << endl;
        cout << "1. The first move is drawn by lot.\n"
            << "2. The first player makes a shot - he names the coordinate of a cell, for example D2, and puts a point in this cell on the opponent's field\n"
            << "3. The second player looks to see if his boat is in this cell.\n"
            << "If there is no ship, he says Missed or Past and the right to move goes to him.\n"
            << "4. If there is a single-deck ship (of one cell) in this cell, the player says “Killed” and marks the “knocked out ship” with a cross.\n"
            << "The first player draws an opponent's boat in cell D2.\n"
            << "(By the way, you can safely put dots around it, since there are cells without ships nearby and you don't need to shoot at them).And he makes another shot.\n"
            << "5. If by, the move goes to the opponent, and if he hit the multi-deck boat, the opponent says Wounded.\n"
            << "It is then that the first player needs to guess in which direction the ship's cells are located and make the correct shot. If you didn't guess right, you lost the move.\n"
            << "Guessed it, you can shoot until the whole boat is killed. Each player marks both his own shots and those of the enemy.\n"
            << "6. The game ends when one of its participants loses all ships." << endl;
        cout << "\nGo to the menu?(Y-yes): "; cin >> checker2;
        if (toupper(checker2) == 'Y') { CLEAR(); Menu(); }
        else { cout << "Incorrect symbol! Please TRY AGAIN!"; }
    }
    else
    {
        CLEAR();
        cout << "Incorrect number of item! Enter again!\n";
        Menu();
    }
}

void Border(int x, int y, int ship, int mode, char map[10][10]) {
    if (mode == 0) { //horizontal
        if (y - 1 >= 0) { for (int i = 0; i < ship; i++) { map[y - 1][x - i] = char(250); } } //верхняя граница
        if (y + 1 <= 9) { for (int i = 0; i < ship; i++) { map[y + 1][x - i] = char(250); } } //нижняя граница
        if (x - ship >= 0) { map[y][x - ship] = char(250); if (y + 1 <= 9) { map[y + 1][x - ship] = char(250); } if (y - 1 >= 0) { map[y - 1][x - ship] = char(250); } } //лeвая граница
        if (x + 1 <= 9) { map[y][x + 1] = char(250); if (y + 1 <= 9) { map[y + 1][x + 1] = char(250); } if (y - 1 >= 0) { map[y - 1][x + 1] = char(250); } } //правая граница
    }
    if (mode == 1) { //vertical
        if (x - 1 >= 0) { for (int i = 0; i < ship; i++) { map[y + i][x - 1] = char(250); } } //левая граница
        if (x + 1 <= 9) { for (int i = 0; i < ship; i++) { map[y + i][x + 1] = char(250); } } //правая граница
        if (y + ship <= 9) { map[y + ship][x] = char(250); if (x - 1 >= 0) { map[y + ship][x - 1] = char(250); } if (x + 1 <= 9) { map[y + ship][x + 1] = char(250); } } //нижняя граница
        if (y - 1 >= 0) { map[y - 1][x] = char(250); if (x - 1 >= 0) { map[y - 1][x - 1] = char(250); } if (x + 1 <= 9) { map[y - 1][x + 1] = char(250); }} //верхняя граница
    }
}

int CordsPCx() {
    int x = rand() % 10;
    return x;
}
int CordsPCy() {
    int y = rand() % 10;
    return y;
}
int CordsPlayerX() {
    cout << "\n";
    char X;
    int x = 0;
    for (;;) { //проверка по Х
        cout << "Positin X(A-J): "; cin >> X;
        if (toupper(X) == 'A') { x = 0; break; }
        else if (toupper(X) == 'B') { x = 1; break; }
        else if (toupper(X) == 'C') { x = 2; break; }
        else if (toupper(X) == 'D') { x = 3; break; }
        else if (toupper(X) == 'E') { x = 4; break; }
        else if (toupper(X) == 'F') { x = 5; break; }
        else if (toupper(X) == 'G') { x = 6; break; }
        else if (toupper(X) == 'H') { x = 7; break; }
        else if (toupper(X) == 'I') { x = 8; break; }
        else if (toupper(X) == 'J') { x = 9; break; }
        else cout << "Invalid position TRY AGAIN!\n";
    }
    return x;
}
int CordsPlayerY() {
    char Y; int y = 0;
    for (;;) { //проверка по Y
        cout << "Position Y(0-9): "; cin >> Y;
        if (Y + 0 >= 48 && Y + 0 <= 57) { //48 і 56 це код символів цифр по таблиці ascii(проверка чи це число)
            if (Y == '0') { y = 0; break; }
            else if (Y == '1') { y = 1; break; }
            else if (Y == '2') { y = 2; break; }
            else if (Y == '3') { y = 3; break; }
            else if (Y == '4') { y = 4; break; }
            else if (Y == '5') { y = 5; break; }
            else if (Y == '6') { y = 6; break; }
            else if (Y == '7') { y = 7; break; }
            else if (Y == '8') { y = 8; break; }
            else if (Y == '9') { y = 9; break; }
        }
        else cout << "Invalid position TRY AGAIN!\n";
    }
    return y;
}

void ShipPlacePlayer() {
    int ship = 4;
    int b = 2, c = 3, d = 4;
CHECKER:
    char checker;
    cout << "\n|Place Ship|\n";
    cout << "H - Horizontal\nV - Vertical\n";
    cin >> checker;
    if (toupper(checker) == 'H') {
    CHECKERH:
            int x, y;
            DrawMapPvC();
            if (ship == 4) {
            LEFT4:
                x = CordsPlayerX(), y = CordsPlayerY();
                if (x >= 3 && Player[y][x] == '.' && Player[y][x - 1] == '.' && Player[y][x - 2] == '.' && Player[y][x - 3] == '.') {
                    for (int i = 0; i < 4; i++) { Player[y][x - i] = 'A'; DrawMapPvC(); Border(x, y, ship, 0, Player); }
                }
                else { cout << "\nCan't place ship here!\n";  goto LEFT4; }
                ship--; goto CHECKER;
            }
            if (ship == 3) {
            LEFT3:
                x = CordsPlayerX(), y = CordsPlayerY();
                if (x >= 2 && Player[y][x] == '.' && Player[y][x - 1] == '.' && Player[y][x - 2] == '.') {
                    for (int i = 0; i < 3; i++) { Player[y][x - i] = 'B';  if (ship == 3) { Border(x, y, ship, 0, Player); } else { Border(x, y, 3, 0, Player); } DrawMapPvC();} b--;}
                else { cout << "\nCan't place ship here!\n";  goto LEFT3; }
                if (b == 0) ship--;
                goto CHECKER;
            }
            if (ship == 2) {
            LEFT2:
                x = CordsPlayerX(), y = CordsPlayerY();
                if (x >= 1 && Player[y][x] == '.' && Player[y][x - 1] == '.') {
                    for (int i = 0; i < 2; i++) { Player[y][x - i] = 'C'; if (ship == 2) { Border(x, y, ship, 0, Player); } else { Border(x, y, 2, 0, Player); } DrawMapPvC();} c--;}
                else { cout << "\nCan't place ship here!\n";  goto LEFT2; }
                if (c == 0) ship--;
                goto CHECKER;
            }
            if (ship == 1) {
            LEFT1:
                x = CordsPlayerX(), y = CordsPlayerY();
                if (x >= 0 && Player[y][x] == '.') { for (int i = 0; i < 1; i++) { Player[y][x] = 'D'; if (ship == 1) { Border(x, y, ship, 0, Player); } else { Border(x, y, 1, 0, Player); }  DrawMapPvC();} d--;}
            }
                else { cout << "\nCan't place ship here!\n";  goto LEFT1; }
                if (d == 0) ship--;
                goto CHECKER;
            }
    else if (toupper(checker) == 'V') {
    CHECKERV:
            int x, y;
            DrawMapPvC();
            if (ship == 4) {
            DOWN4:
                x = CordsPlayerX(), y = CordsPlayerY();
                if(y <= 6 && Player[y][x] == '.' && Player[y + 1][x] == '.' && Player[y + 2][x] == '.' && Player[y + 3][x] == '.') {
                    for (int i = 0; i < 4; i++) { Player[y + i][x] = 'A'; DrawMapPvC(); {Border(x, y, ship, 1, Player); } } }
                else { cout << "\nCan't place ship here!\n";  goto DOWN4; }
                ship--; goto CHECKER;
            }
            if (ship == 3) {
                
            DOWN3:
                x = CordsPlayerX(), y = CordsPlayerY();
                if (y <= 7 && Player[y][x] == '.' && Player[y + 1][x] == '.' && Player[y + 2][x] == '.') {
                    for (int i = 0; i < 3; i++) { Player[y + i][x] = 'B'; if (ship == 3) { Border(x, y, ship, 1, Player); } else { Border(x, y, ship, 1, Player); } DrawMapPvC();} b--;}
                else { cout << "\nCan't place ship here!\n";  goto DOWN3; }
                if (b == 0) ship--;
                goto CHECKER;
            }
            if (ship == 2) {
                
            DOWN2:
                x = CordsPlayerX(), y = CordsPlayerY();
                if (y <= 8 && Player[y][x] == '.' && Player[y + 1][x] == '.') {
                    for (int i = 0; i < 2; i++) { Player[y + i][x] = 'C'; if (ship == 2) { Border(x, y, ship, 1, Player); } else { Border(x, y, ship, 1, Player); } DrawMapPvC(); } c--;}
                else { cout << "\nCan't place ship here!\n";  goto DOWN2; }
                if (c == 0) ship--;
                goto CHECKER;
            }
            if (ship == 1) {
            DOWN1:
                x = CordsPlayerX(), y = CordsPlayerY();
                if (y <= 9 && Player[y][x] == '.' ) { for (int i = 0; i < 1; i++) { Player[y][x] = 'D';  if (ship == 1) { Border(x, y, ship, 1, Player); }else { Border(x, y, ship, 1, Player); } DrawMapPvC();} d--; }
                else { cout << "\nCan't place ship here!\n";  goto DOWN1; }
                if (d == 0) ship--;
                goto CHECKER;
            }
        }
    else { cout << "\nInvalid mode\n"; goto CHECKER; }
    if (ship == 0) NULL;
}
void ShipPlaceComp() {
    srand(time(0));
    int ship = 4;
    int b = 2, c = 3, d = 4;
CHECKER:
    int checker = rand() % 2;
    if (checker == 0) { //horizontal
    CHECKERH://Left
        int x, y;
        if (ship == 4) {
        LEFT4:
            x = CordsPCx(), y = CordsPCy();
            if (x >= 3 && Comp2[y][x] == '.' && Comp2[y][x - 1] == '.' && Comp2[y][x - 2] == '.' && Comp2[y][x - 3] == '.') {
                for (int i = 0; i < 4; i++) { Comp2[y][x - i] = 'A'; Border(x, y, ship, 0, Comp2); }
            }
            else { goto LEFT4; }
            ship--; goto CHECKER;
        }
        if (ship == 3) {
        LEFT3:
            x = CordsPCx(), y = CordsPCy();
            if (x >= 2 && Comp2[y][x] == '.' && Comp2[y][x - 1] == '.' && Comp2[y][x - 2] == '.') {
                for (int i = 0; i < 3; i++) { Comp2[y][x - i] = 'B'; if (ship == 3) { Border(x, y, ship, 0, Comp2); } else { Border(x, y, 3, 0, Comp2); } } b--;
            }
            else { goto LEFT3; }
            if (b == 0) ship--;
            goto CHECKER;
        }
        if (ship == 2) {
        LEFT2:
            x = CordsPCx(), y = CordsPCy();
            if (x >= 1 && Comp2[y][x] == '.' && Comp2[y][x - 1] == '.') {
                for (int i = 0; i < 2; i++) { Comp2[y][x - i] = 'C'; if (ship == 2) { Border(x, y, ship, 0, Comp2); } else { Border(x, y, 2, 0, Comp2); } } c--;
            }
            else { goto LEFT2; }
            if (c == 0) ship--;
            goto CHECKER;
        }
        if (ship == 1) {
        LEFT1:
            x = CordsPCx(), y = CordsPCy();
            if (x >= 0 && Comp2[y][x] == '.') {
                for (int i = 0; i < 1; i++) { Comp2[y][x] = 'D'; if (ship == 1) { Border(x, y, ship, 0, Comp2); } else { Border(x, y, 1, 0, Comp2); } } d--;
            }
            else { goto LEFT1; }
            if (d == 0) ship--;
            goto CHECKER;
        }
    }
    if (checker == 1) { //vertical
    CHECKERV: //down
        int x, y;
        if (ship == 4) {
        DOWN4:
            x = CordsPCx(), y = CordsPCy();
            if (y <= 6 && Comp2[y][x] == '.' && Comp2[y + 1][x] == '.' && Comp2[y + 2][x] == '.' && Comp2[y + 3][x] == '.') {
                for (int i = 0; i < 4; i++) { Comp2[y + i][x] = 'A';  Border(x, y, ship, 1, Comp2); }
            }
            else { goto DOWN4; }
            ship--; goto CHECKER;
        }
        if (ship == 3) {
        DOWN3:
            x = CordsPCx(), y = CordsPCy();
            if (y <= 7 && Comp2[y][x] == '.' && Comp2[y + 1][x] == '.' && Comp2[y + 2][x] == '.') {
                for (int i = 0; i < 3; i++) { Comp2[y + i][x] = 'B'; if (ship == 3) { Border(x, y, ship, 1, Comp2); } else { Border(x, y, 3, 1, Comp2); } } b--;
            }
            else { goto DOWN3; }
            if (b == 0) ship--;
            goto CHECKER;
        }
        if (ship == 2) {
        DOWN2:
            x = CordsPCx(), y = CordsPCy();
            if (y <= 8 && Comp2[y][x] == '.' && Comp2[y + 1][x] == '.') {
                for (int i = 0; i < 2; i++) { Comp2[y + i][x] = 'C'; if (ship == 2) { Border(x, y, ship, 1, Comp2); } else { Border(x, y, 2, 1, Comp2); } } c--;
            }
            else { goto DOWN2; }
            if (c == 0) ship--;
            goto CHECKER;
        }
        if (ship == 1) {
        DOWN1:
            x = CordsPCx(), y = CordsPCy();
            if (y <= 9 && Comp2[y][x] == '.') {
                for (int i = 0; i < 1; i++) { Comp2[y][x] = 'D'; if (ship == 1) { Border(x, y, ship, 1, Comp2); } else { Border(x, y, 1, 1, Comp2); } } d--;
            }
            else { goto DOWN1; }
            if (d == 0) ship--;
            goto CHECKER;
        }
    }
    if (ship == 0) NULL;
}
void ShipPlaceComp1() {
    srand(time(0));
    int ship = 4;
    int b = 2, c = 3, d = 4;
CHECKER:
    int checker = rand() % 2;
    if (checker == 0) { //horizontal
    CHECKERH://Left
        int x, y;
        if (ship == 4) {
        LEFT4:
            x = CordsPCx(), y = CordsPCy();
            if (x >= 3 && Comp3[y][x] == '.' && Comp3[y][x - 1] == '.' && Comp3[y][x - 2] == '.' && Comp3[y][x - 3] == '.'){
                for (int i = 0; i < 4; i++) { Comp3[y][x - i] = 'A'; Border(x, y, ship, 0, Comp3); }
            }
            else { goto LEFT4; }
            ship--; goto CHECKER;
        }
        if (ship == 3) {
        LEFT3:
            x = CordsPCx(), y = CordsPCy();
            if (x >= 2 && Comp3[y][x] == '.' && Comp3[y][x - 1] == '.' && Comp3[y][x - 2] == '.'){
                for (int i = 0; i < 3; i++) { Comp3[y][x - i] = 'B'; if (ship == 3) { Border(x, y, ship, 0, Comp3); } else { Border(x, y, 3, 0, Comp3); }} b--;
            }
            else { goto LEFT3; }
            if (b == 0) ship--;
            goto CHECKER;
        }
        if (ship == 2) {
        LEFT2:
            x = CordsPCx(), y = CordsPCy();
            if (x >= 1 && Comp3[y][x] == '.' && Comp3[y][x - 1] == '.'){
                for (int i = 0; i < 2; i++) { Comp3[y][x - i] = 'C'; if (ship == 2) { Border(x, y, ship, 0, Comp3); }else { Border(x, y, 2, 0, Comp3); }} c--;
            }
            else { goto LEFT2; }
            if (c == 0) ship--;
            goto CHECKER;
        }
        if (ship == 1) {
        LEFT1:
            x = CordsPCx(), y = CordsPCy();
            if (x >= 0 && Comp3[y][x] == '.'){for (int i = 0; i < 1; i++) { Comp3[y][x] = 'D'; if (ship == 1) { Border(x, y, ship, 0, Comp3); } else { Border(x, y,1, 0, Comp3); }} d--;
            }
            else { goto LEFT1; }
            if (d == 0) ship--;
            goto CHECKER;
        }
    }
    if (checker == 1) { //vertical
    CHECKERV: //down
        int x, y;
        if (ship == 4) {
        DOWN4:
            x = CordsPCx(), y = CordsPCy();
            if (y <= 6 && Comp3[y][x] == '.' && Comp3[y + 1][x] == '.' && Comp3[y + 2][x] == '.' && Comp3[y + 3][x] == '.') {
                for (int i = 0; i < 4; i++) { Comp3[y + i][x] = 'A';  Border(x, y, ship, 1, Comp3);}
            }
            else { goto DOWN4; }
            ship--; goto CHECKER;
        }
        if (ship == 3) {
        DOWN3:
            x = CordsPCx(), y = CordsPCy();
            if (y <= 7 && Comp3[y][x] == '.' && Comp3[y + 1][x] == '.' && Comp3[y + 2][x] == '.') {
                for (int i = 0; i < 3; i++) { Comp3[y + i][x] = 'B'; if (ship == 3) { Border(x, y, ship, 1, Comp3); } else { Border(x, y, 3, 1, Comp3); }} b--;
            }
            else { goto DOWN3; }
            if (b == 0) ship--;
            goto CHECKER;
        }
        if (ship == 2) {
        DOWN2:
            x = CordsPCx(), y = CordsPCy();
            if (y <= 8 && Comp3[y][x] == '.' && Comp3[y + 1][x] == '.') {
                for (int i = 0; i < 2; i++) { Comp3[y + i][x] = 'C'; if (ship == 2) { Border(x, y, ship, 1, Comp3); }else { Border(x, y, 2, 1, Comp3); }} c--;
            }
            else { goto DOWN2; }
            if (c == 0) ship--;
            goto CHECKER;
        }
        if (ship == 1) {    
        DOWN1:
            x = CordsPCx(), y = CordsPCy();
            if (y <= 9 && Comp3[y][x] == '.'){
                for (int i = 0; i < 1; i++) { Comp3[y][x] = 'D'; if (ship == 1) { Border(x, y, ship, 1, Comp3); }else { Border(x, y, 1, 1, Comp3); }} d--;
            }
            else { goto DOWN1; }
            if (d == 0) ship--;
            goto CHECKER;
        }
    }
    if (ship == 0) NULL;
}

void GamePlayerVSComp() {
    DrawMapPvC();
    ShipPlacePlayer();
    ShipPlaceComp();
    int winchecker = 0;
    int turn = 0;
    int x;
    int y;
    int X;
    int Y;
    int countPlayer = 0, countComp = 0;
    for (;;) {
        if (countPlayer == 20 || countComp == 20) { //проверка на победу
            if (countPlayer == 20) { cout << "\nYOU WON!!!!"; winchecker = 1; break; }
            if (countComp == 20) { cout << "\nCOMP WON!!!!"; break; }
        }
        else {
            if (turn == 0) { //ход Player
                x = CordsPlayerX(); y = CordsPlayerY();
                if (Comp1[y][x] == '.'  && Comp2[y][x] != 'A' && Comp2[y][x] != 'B' && Comp2[y][x] != 'C' && Comp2[y][x] != 'D') { Comp1[y][x] = '*'; turn = 1; DrawMapPvC(); } // перевіряє чи не має там кораблів або чи не стріляв вже туди гравець, якщо ні то ставить промах
                else if (Comp2[y][x] == 'A' || Comp2[y][x] == 'B' || Comp2[y][x] == 'C' || Comp2[y][x] == 'D') { Comp1[y][x] = 'X'; Comp2[y][x] = 'X'; turn = 1; countPlayer++; DrawMapPvC(); } //перевіряє чи є там корабель чи ні
                else { cout << "\nYou can't attack here"; x = CordsPlayerX(); y = CordsPlayerY(); } //просить ввести координати ще раз якщо не можна туди вистрілити
            }
            if (turn == 1) { //ход Comp1
                X = CordsPCx(); Y = CordsPCy();
                if (Player[X][Y] == '.' && Player[X][Y] != 'A' && Player[X][Y] != 'B' && Player[X][Y] != 'C' && Player[X][Y] != 'D') { Player[X][Y] = '*'; turn = 0; DrawMapPvC(); } // перевіряє чи не має там кораблів або чи не стріляв вже туди компьтер, якщо ні то ставить промах
                else if (Player[X][Y] == 'A' || Player[X][Y] == 'B' || Player[X][Y] == 'C' || Player[X][Y] == 'D') { Player[X][Y] = 'X'; turn = 0; countComp++; DrawMapPvC(); } //перевіряє чи є там корабель чи ні
                else { X = CordsPCx(); Y = CordsPCy(); }
            }
        }
    }
    if (winchecker == 1) { LeaderboardWrite(1);}
    char checkerplay;
EXIT:
    cout << "\n\t\t\t\t\tDo YOU wanna play again?\n\t\t\t\t\t   Y-Yes   N-No(exit)\nEnter: "; cin >> checkerplay;
    if (toupper(checkerplay) == 'Y') { ClearMap(0); Menu(); }
    else if (toupper(checkerplay) == 'N') { exit(0); }
    else { cout << "\nInvalid symbol, try again\n"; goto EXIT; }
}
void GameCompVSComp() {
    ShipPlaceComp();
    ShipPlaceComp1();
    int turn = 0;
    int x;
    int y;
    int X;
    int Y;
    int countComp1 = 0, countComp2 = 0;
    for (;;) {
        if (countComp1 == 20 || countComp2 == 20) { //проверка на победу
            if (countComp1 == 20) { cout << "\nPlayer 1 WON!!!!"; break; }
            if (countComp2 == 20) { cout << "\nPlayer 2 WON!!!!"; break; }
        }
        else {
            if (turn == 0) { //ход 1
                x = CordsPCx(); y = CordsPCy();
                if (Comp4[x][y] == '.' && Comp3[x][y] != 'A' && Comp3[x][y] != 'B' && Comp3[x][y] && 'C' && Comp3[x][y] != 'D') { Comp4[x][y] = '*'; turn = 1; DrawMapCvC(); } // перевіряє чи не має там кораблів або чи не стріляв вже туди гравець, якщо ні то ставить промах
                else if (Comp3[x][y] == 'A' || Comp3[x][y] == 'B' || Comp3[x][y] == 'C' || Comp3[x][y] == 'D') { Comp4[x][y] = 'X'; Comp3[x][y] = 'X'; turn = 1; countComp1++; DrawMapCvC(); } //перевіряє чи є там корабель чи ні
                else { x = CordsPCx(); y = CordsPCy(); } //просить ввести координати ще раз якщо не можна туди вистрілити
            }
            if (turn == 1) { //ход 2
                X = CordsPCx(); Y = CordsPCy();
                if (Comp1[X][Y] == '.' && Comp2[X][Y] != 'A' && Comp2[X][Y] != 'B' && Comp2[X][Y] != 'C' && Comp2[X][Y] != 'D') { Comp1[X][Y] = '*'; turn = 0; DrawMapCvC(); } // перевіряє чи не має там кораблів або чи не стріляв вже туди компьтер, якщо ні то ставить промах
                else if (Comp2[X][Y] == 'A' || Comp2[X][Y] == 'B' || Comp2[X][Y] == 'C' || Comp2[X][Y] == 'D') { Comp1[X][Y] = 'X'; Comp2[X][Y] = 'X'; turn = 0; countComp2++; DrawMapCvC(); } //перевіряє чи є там корабель чи ні
                else { X = CordsPCx(); Y = CordsPCy(); }
            }
        }
    }
    char checkerplay;
EXIT:
    cout << "\n\t\t\t\t\tDo YOU wanna play again?\n\t\t\t\t\t   Y-Yes   N-No(exit)\nEnter: "; cin >> checkerplay;
    if (toupper(checkerplay) == 'Y') { ClearMap(1); Menu(); }
    else if (toupper(checkerplay) == 'N') { exit(0); }
    else { cout << "\nInvalid symbol, try again\n"; goto EXIT; }
}

void LeaderboardWrite(int win) {
    char text[256];
    cout << "Input your nick: ";
    gets_s(text, 256);
    FILE* file;
    file = fopen("leaderboard.txt", "a+");
    fputs("\n", file); fputs(text, file); fputs("   Wins: ", file); fputc(win, file);
    fclose(file);
}
void LeaderboardShow() {
    CLEAR();
    string text[256];
    ifstream file("leaderboard.txt");
    int num = 0;

    while (!check_file_is_empty(file))
    {
        getline(file, text[num]);
        num++;
    }
    cout << "\t\t\t=================SCOREBOARD=================";
    for (int i = 0; i < num; i++)
    {
        cout << "\n\t\t\t\t   "<< i + 1 << ". " << text[i] << endl;
    }
}