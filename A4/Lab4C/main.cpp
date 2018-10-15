/* CSCI 261 Lab 4C: Mulitplying Matrices
 *
 * Author: Carter Fowler
 */
 
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    //define number of ROWS and COLUMNS, should be constants
    //define matrix of ROWS x COLUMNS (N x M)
    const int NUM_ROWS = 4;
    const int NUM_COLS = 3;
    int userMatrix [NUM_ROWS][NUM_COLS];
    
    //Get user input for matrix
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLS; ++j) {
            cout << "Enter Row " << (i + 1) << " Column " << (j + 1) << ": ";
            cin >> userMatrix[i][j];
        }
    }
    cout << endl;
    
    //Print this matrix
    cout << "The matrix you entered is:" << endl;
    for (int i = 0; i < NUM_ROWS; ++i) {
        cout << "[";
        for (int j = 0; j < NUM_COLS; ++j) {
            cout << setw(5) << right << userMatrix[i][j];
        }
        cout << "]" << endl;
    }
    cout << endl;
    //Create a matrix of M x N, the transpose
    int newMatrix [NUM_COLS][NUM_ROWS];
    for (int i = 0; i < NUM_COLS; ++i) {
        for (int j = 0; j < NUM_ROWS; ++j) {
            newMatrix [i][j] = userMatrix[j][i];
        }
    }
    
    //Print this matrix
    cout << "The transpose of the matrix is:" << endl;
    for (int i = 0; i < NUM_COLS; ++i) {
        cout << "[";
        for (int j = 0; j < NUM_ROWS; ++j) {
            cout << setw(5) << right << newMatrix[i][j];
        }
        cout << "]" << endl;
    }
    cout << endl;
    //Create another matrix of N x N, this is matrix1 times matrix2
    int multMatrix[NUM_ROWS][NUM_ROWS];
    
    //multiply userMatrix by newMatrix
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_ROWS; ++j) {
            int currVal = 0;
            for (int k = 0; k < NUM_COLS; ++k) {
                currVal += (userMatrix[i][k] * newMatrix[k][j]);
            }
            multMatrix[i][j] = currVal;
        }
    }
    
    //Print mulitplied matrix
    cout << "The product of the matrix times its transpose is:" << endl;
    for (int i = 0; i < NUM_ROWS; ++i) {
        cout << "[";
        for (int j = 0; j < NUM_ROWS; ++j) {
            cout << setw(5) << right << multMatrix[i][j];
        }
        cout << "]" << endl;
    }
    cout << endl;
    cout << "Have a nice day!!";
    return 0;
}