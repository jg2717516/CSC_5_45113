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

    double a, b;
    
    cout << "Enter value a: ";
    cin >> a;
    cout << "Enter value b: ";
    cin >> b;
    
    if (a < b)
        cout << "a is smaller than b";
    else
        cout << "b is smaller than a";
    
    return 0;
}

