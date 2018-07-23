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

using namespace std;

/*
 * 
 */
float fallingDistance(int);

int main(int argc, char** argv) {

    
    cout << "Falling Distance\n";
    cout << "----------------\n\n";
    
    
    for (int i = 1; i <= 10; i++){
        cout << "In " << i << " seconds, ";
        cout << "object has fallen " << fallingDistance(i) << " meters.";
        cout << endl;
    }
    
    return 0;
}

float fallingDistance(int t){
    return 0.5*9.8*(t*t);
}

