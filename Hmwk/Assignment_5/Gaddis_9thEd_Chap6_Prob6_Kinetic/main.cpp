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

float kineticEnergy(float, float);

int main(int argc, char** argv) {

    float mass, vlcty;
    
    cout << "Kinetic Energy\n";
    cout << "--------------\n\n";
    
    cout << "Enter object's mass in kilograms: ";
    cin >> mass;
    cout << "Enter object's velocity in meters per second: ";
    cin >> vlcty;

    cout << "Object's kinetic energy: " << kineticEnergy(mass, vlcty) << endl;
    
    return 0;
}

float kineticEnergy(float mass, float vlcty){
    return 0.5*mass*(vlcty*vlcty);
}

