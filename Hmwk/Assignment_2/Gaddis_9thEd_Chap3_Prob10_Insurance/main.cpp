/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joseph
 *
 * Created on June 28, 2018, 8:20 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double insurancePercentage = 80; // 80%, 0.8
    double replacementCost;
    
    cout << "What is the building replacement cost? ";
    cin >> replacementCost;
    
    cout << setprecision(2) << fixed;
    cout << "Minimum amount of insurance for this property: $" << replacementCost * (insurancePercentage/100);
    
    return 0;
}

