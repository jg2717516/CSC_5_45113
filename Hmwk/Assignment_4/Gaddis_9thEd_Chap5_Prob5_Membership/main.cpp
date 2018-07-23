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

    float cost = 2500,
          perc = 0.04,
          years = 6;
    
    for (int i = 1; i <= years; i++)
    {
        cost = cost + (cost * perc);
        cout << i << " years: $" << cost << endl;
    }
    
    return 0;
}

