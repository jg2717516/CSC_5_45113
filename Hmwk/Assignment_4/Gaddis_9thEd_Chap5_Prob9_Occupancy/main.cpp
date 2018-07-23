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

    float floors, 
          rooms, 
          occpd, 
          ttlRms = 0, 
          ttlOcp = 0;
    
    cout << "Enter number of floors in the hotel: ";
    cin >> floors;
    
    while (floors < 1)
    {
        cout << "Enter number of floors in the hotel: ";
        cin >> floors;        
    }
    
    for (int i = 1; i <= floors; i++)
    {
        if (i == 13)
            continue;
        
        cout << "Enter number of rooms in floor " << i << ": ";
        cin >> rooms;
        
        while (rooms < 10)
        {
            cout << "Enter number of rooms in floor " << i << ": ";
            cin >> rooms;            
        }
        
        cout << "How many rooms are occupied? ";
        cin >> occpd;
        
        ttlRms = ttlRms + rooms;
        ttlOcp = ttlOcp + occpd;
    }
    
    cout << "Total rooms: " << ttlRms << endl;
    cout << "Total occupied: " << ttlOcp << endl;
    cout << "Total unoccupied: " << ttlRms - ttlOcp << endl;
    cout << "Occupied percentage: " << (ttlOcp / ttlRms) * 100 << "%\n";

    return 0;
}

