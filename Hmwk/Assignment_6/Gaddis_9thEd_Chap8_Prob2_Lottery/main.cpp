/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 24, 2018, 4:05 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

bool searchTicket(int [], int, int);

int main(int argc, char** argv) {

    const int SIZE = 10;
    int tckt;
    bool vld;
    int tckts[SIZE] = {
        13579, 26771, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121
    };
    
    cout << "Enter winning ticket number: ";
    cin >> tckt;
    
    vld = searchTicket(tckts, SIZE, tckt);
    if (vld)
        cout << "Ticket was found!";
    else
        cout << "Ticket was not found.";
    
    return 0;
}

bool searchTicket(int tckts[], int size, int value){
    int i = 0;
    bool found = false;
    
    while (i < size && !found){
        if (tckts[i] == value){
            found = true;
        }
        i++;
    }
    return found;
}