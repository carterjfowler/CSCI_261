#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

class Sudoku {
public:
    static const int SIZE = 4;
    Sudoku();
    string getPrize();
    void showPuzzle(ostream &);
    void showSolution(ostream &);
    bool isSolution(istream &);
private:
    int board[SIZE][SIZE];
    int puzzle[SIZE][SIZE];
    string prize;
    void init();
    bool isSudoku(int board[][SIZE]);
    void introduction();
    void show(ostream &, const int [][SIZE]);
};

bool Sudoku::isSudoku(int board[][SIZE]) {
    int numbers[SIZE];

    // check verticals
    for(int j = 0; j < SIZE; j++) {
        for(int k = 0; k < SIZE; k++)
            numbers[k] = 1;
        for(int i = 0; i < SIZE; i++) {
            if(numbers[board[i][j] - 1] == 0)
                return false;
            numbers[board[i][j] - 1] = 0;
        }
    }

    // check sub-grids
    int subSize = sqrt(SIZE);
    for(int i = 0; i < subSize; i++)
        for(int j = 0; j < subSize; j++) {
            for(int k = 0; k < SIZE; k++)
                numbers[k] = 1;
            for(int k = subSize * i; k < subSize * i + subSize; k++)
                for(int l = subSize * j; l < subSize * j + subSize; l++) {
                    if(numbers[board[k][l] - 1] == 0)
                        return false;
                    numbers[board[k][l] - 1] = 0;
                }
        }

    // all good!
    return true;
}

void Sudoku::init() {
    prize = "bonsai";
    do {
        for(int i = 0; i < SIZE; i++)
            for(int j = 0; j < SIZE; j++) {
                int r;
                bool found;
                do {
                    r = rand() % SIZE + 1;
                    found = false;
                    for(int k = 0; k < j; k++)
                        if(r == board[i][k]) {
                            found = true;
                            break;
                        }
                }
                while(found);
                board[i][j] = r;
            }
    }
    while(!isSudoku(board));

    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            if(rand() % 4 < 1)
                puzzle[i][j] = 0;
            else
                puzzle[i][j] = board[i][j];
}

Sudoku::Sudoku() {
    srand(time(NULL));
    init();
    introduction();
}

void Sudoku::introduction() {
    cout << "Welcome! Do you like Sudoku?" << endl;
    cout << "To win a prize, you must find the answer." << endl;
}

string Sudoku::getPrize() {
    return prize;
}

void Sudoku::show(ostream &out, const int board[][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++)
            if(board[i][j] == 0)
                out << " _ ";
            else
                out << " " << board[i][j] << " ";
        out << endl;
    }
}

void Sudoku::showSolution(ostream &out) {
    show(out, board);
}

void Sudoku::showPuzzle(ostream &out) {
    show(out, puzzle);
}

bool Sudoku::isSolution(istream &in) {
    cout << "Enter your solution separated by white space." << endl;
    cout << "You should enter the WHOLE Sudoku." << endl;
    cout << endl;

    int solution[SIZE][SIZE];

    // read solution
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            in >> solution[i][j];

    // check if the solution is valid
    if(!isSudoku(solution))
        return false;

    // check if it is a solution for the puzzle
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            if(puzzle[i][j] != 0 && puzzle[i][j] != solution[i][j])
                return false;

    return true;
}

int main() {
    Sudoku sudoku;
    sudoku.showPuzzle(cout);
    cout << endl;
    if(sudoku.isSolution(cin))
        cout << "Nice job! Your prize is a " << sudoku.getPrize() << endl;
    else {
        cout << "Sorry, but this is not a solution. Best of luck next time!" << endl;
        cout << "Here is one possible solution: " << endl;
        sudoku.showSolution(cout);
    }

    return EXIT_SUCCESS;
}
