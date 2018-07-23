/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 3, 2018, 12:07 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double weight, height, BMI;
    
    cout << "Enter weight (pounds): ";
    cin >> weight;
    cout << "Enter height (inches): ";
    cin >> height;
    
    BMI = weight * 703 / (height*height);
    
    if (BMI < 18.5)
        cout << "Person is underweight";
    else if (BMI > 25)
        cout << "Person is overweight";
    else
        cout << "Person's wight is optimal";
    
    return 0;
}

