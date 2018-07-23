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

    double mass, weight;
    
    cout << "Enter a mass: ";
    cin >> mass;
    
    weight = mass * 9.8;
    
    if (weight < 10)
        cout << "Object is too light";
    else if (weight > 1000)
        cout << "Object is too heavy";
    
    return 0;
}

