#include <iostream>
#include "Matrix.h"

int main(){
    Matrix m1;
    Matrix m2;
    m1.readFile("test1.txt");
    m2.readFile("test2.txt");
    
    //m1.printMatrix();
    //std::cout<<std::endl;
    //m2.printMatrix();
    
    std::cout<<"Matrix Multiplication Test:"<<std::endl;
    m1.matrixMultiply(m1, m2);
    std::cout<<std::endl;
    std::cout<<"Matrix Addition Test:"<<std::endl;
    m1.matrixAddition(m1, m2);

}