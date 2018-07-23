/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 7, 2018, 8:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float fahren;
    float celsius;
    
    cout << "Celsius      Fahrenheit\n";
    cout << "-----------------------\n";
    
    for (celsius = 0; celsius <= 20; celsius++)
    {
        fahren = ((1.8) * celsius) + 32;
        cout << celsius << "C   \t\t" << fahren << "F\n";
    }
    
    return 0;
}

