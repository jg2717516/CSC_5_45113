/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 24, 2018, 2:10 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */



int main(int argc, char** argv) {

    const int SIZE = 5;
    string salsa[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    char sold[SIZE];
    
    for (int i = 0; i < SIZE; i++){
        cout << "Enter jars sold of " << salsa[i] << " salsa: ";
        cin >> sold[i];
        
        while (sold[i] < 0){
            cout << "Enter jars sold of " << salsa[i] << " salsa: ";
            cin >> sold[i];
        }
    }
    
    for (int i = 0; i < SIZE; i++){
        cout << "Jars of " << salsa[i] << " salsa sold: " << sold[i] << endl;
    }
    
    return 0;
}

