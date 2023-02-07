#include <iostream>
#include <matrix/matrix.hpp>

using namespace std;
using namespace myMatrix;

myMatrix::Matrix<int> mat1(3, 3);
myMatrix::Matrix<int> mat2(3, 3);
myMatrix::Matrix<int> mat3(3, 3);

int main()
{
    for (auto &it : mat1)
    {
        it = 3;
    }

    mat2.fillMatrix();
    mat2.printMatrix();
    myMatrix::Matrix<int> mat3 = mat2 - mat1;
    mat3.printMatrix();
    myMatrix:Matrix<int> mat1 = mat3 * mat2;
    mat1.printMatrix();
    myMatrix::Matrix<int> mat2 = mat1 + mat3;
    mat2.printMatrix();

    return 0;
}