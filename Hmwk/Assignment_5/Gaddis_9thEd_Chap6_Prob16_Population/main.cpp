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

int newPopulation(int, int, int);

int main(int argc, char** argv) {

    int pop, brthr, dthr, yrs;
    
    cout << "Enter size of population: ";
    cin >> pop;
    while (pop < 2){
        cout << "Enter size of population: ";
        cin >> pop;
    }
    cout << "Enter birth rate: ";
    cin >> brthr;
    while (brthr < 0){
        cout << "Enter birth rate: ";
        cin >> brthr;
    }
    cout << "Enter death rate: ";
    cin >> dthr;
    while (dthr < 0){
        cout << "Enter death rate: ";
        cin >> dthr;  
    }
    cout << "Enter number of years: ";
    cin >> yrs;
    while (yrs < 1){
        cout << "Enter number of years: ";
        cin >> yrs; 
    }
    
    for (int i = 1; i <= yrs; i++){
        int newPop = newPopulation(pop, brthr, dthr);
        cout << "Year " << i << " population: " << newPop << endl;
        pop = newPop;
    }
    
    return 0;
}

int newPopulation(int pop, int brthr, int dthr){
    return pop + (pop*brthr) - (pop*dthr);
}