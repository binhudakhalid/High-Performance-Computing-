// hpc1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
Ref: https://www.geeksforgeeks.org/program-dot-product-cross-product-two-vector/
*/

float dotProduct(float vect_A[], float vect_B[], int length)
{
    float product = 0;
    // Loop for calculate cot product 
    for (int i = 0; i < length; i++)
        product = product + vect_A[i] * vect_B[i];
    return product;
}

int main()
{
    //const int lenOfVector = 1000000000;
    const int lenOfVector = 1000;
    float vectorA[lenOfVector];
    float vectorB[lenOfVector];

    //Populating Vector A and B
    for (int i = 0; i < lenOfVector; i++) {
        vectorA[i] = 33.2f;
        vectorB[i] = 7.1f;
    }
   

    std::cout << "HPC lab \n";
    float answer = dotProduct(vectorA, vectorB, lenOfVector);
    std::cout << "\n";
    std::cout << "Result of dot product is : " ;
    std::cout << answer;
    std::cout << "\n";
}