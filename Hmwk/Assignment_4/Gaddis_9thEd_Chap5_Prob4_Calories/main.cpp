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

    int intrvl = 5;
    double cal;
    
    for (int i = 1; i <= 30; i++)
    {
        cal += 3.6;
        
        if (i % intrvl == 0)
        {
            cout << i << " minutes: " << cal << " calories\n";
        }
    }
    
    return 0;
}

