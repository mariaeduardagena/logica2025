#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

void draw(int board[9][9]) {
    cout << "\033[38;2;150;150;150m";
    cout << "   1 2 3   4 5 6   7 8 9" << endl << endl;
    for (int y = 0; y < 9; ++y) {
        if (y == 3 || y == 6) cout << "  ------+-------+------" << endl;
        cout << char('A' + y) << " ";
        for (int x = 0; x < 9; ++x) {
            if (x == 3 || x == 6) cout << "\033[38;2;150;150;150m| ";
            if (board[y][x] < 0) cout << "\033[38;2;0;255;0m";
            else cout << "\033[0m";

            if (board[y][x] != 0) cout << abs(board[y][x]) << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << "\033[0m"; 
}

bool isLegal(int board[9][9], int x, int y, int value) {
    if (x < 0 || x >= 9 || y < 0 || y >= 9) return false;
    if (value < 1 || value > 9) return false;

    for (int i = 0; i < 9; ++i)
        if (abs(board[y][i]) == value) return false;

    for (int i = 0; i < 9; ++i)
        if (abs(board[i][x]) == value) return false;

    int sub_x = (x / 3) * 3;
    int sub_y = (y / 3) * 3;

    for (int i = sub_y; i < sub_y + 3; ++i) {
        for (int j = sub_x; j < sub_x + 3; ++j) {
            if (abs(board[i][j]) == value) return false;
        }
    }

    return true;
}

int main() {
    bool running = true;
    int board[9][9] = {0};

    while (running) {
#ifdef _WIN32//para rodar em diferente sistemas
        system("cls");
#else
        system("clear");
#endif

        draw(board);
        cout << endl << "Insira um comando (ex: set a0 5 ou sair): ";

        string command;
        getline(cin, command);

        if (command.substr(0, 3) == "set") {
            if (command.length() >= 8) {
                int y = command[4] - 'a';
                int x = command[5] - '1';
                int value = command[7] - '0';

                if (isLegal(board, x, y, value)) {
                    board[y][x] = value;
                } else {
                    cout << "Movimento inválido!" << endl;
                    cin.ignore();
                }
             } else {
                cout << "Comando errado!" << endl;
                cin.ignore();
            }
        } else if (command == "sair") {
            running = false;
        } else {
            cout << "Comando desconhecido." << endl;
            cin.ignore();
        }
      }

    return 0;
}
