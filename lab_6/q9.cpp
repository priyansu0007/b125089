#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];

public:
    Matrix() {
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 2; ++j)
                mat[i][j] = 0;
    }

    Matrix(int a,int b,int c,int d) {
        mat[0][0] = a; mat[0][1] = b;
        mat[1][0] = c; mat[1][1] = d;
    }

    Matrix operator+( Matrix& other)  {
        Matrix result;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    void display()  {
        for (int i = 0; i < 2; ++i) {
            cout<<"| ";
            for (int j = 0; j < 2; ++j) {
                cout<<mat[i][j]<<" ";
            }
            cout<<"|\n";
        }
    }
};

int main() {
    Matrix m1(1,2,3,4);
    Matrix m2(5,6,7,8);

    cout<<"Matrix 1:\n";
    m1.display();

    cout<<"Matrix 2:\n";
    m2.display();

    Matrix sum = m1 + m2;
    cout<<"Sum Matrix:\n";
    sum.display();

    return 0;
}