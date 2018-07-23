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

    double classA = 15, classB = 12, classC = 9;
    double soldA, soldB, soldC;
    
    cout << "Tickets sold for class A: ";
    cin >> soldA;
    cout << "Tickets sold for class B: ";
    cin >> soldB;    
    cout << "Tickets sold for class C: ";
    cin >> soldC;
    
    cout << setprecision(2) << fixed;
    cout << "Total: $" << classA*soldA + classB*soldB + classC*soldC;
    
    return 0;
}

