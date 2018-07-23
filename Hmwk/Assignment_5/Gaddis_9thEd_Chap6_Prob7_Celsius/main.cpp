/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 22, 2018, 1:37 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */

float celsius(float);

int main(int argc, char** argv) {

    cout << "Fahrenheit to Celsius\n";
    cout << "---------------------\n\n";
    
    for (int i = 0; i <= 20; i++){
        cout << setprecision(2) << fixed;
        cout << i << "F = " << celsius(i) << "C\n";
    }
    
    return 0;
}

float celsius(float f){
    return (5.0/9.0)*(f - 32);
}
