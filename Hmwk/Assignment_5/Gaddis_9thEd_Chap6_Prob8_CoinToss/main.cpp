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
#include <ctime>

using namespace std;

/*
 * 
 */

string coinToss();

int main(int argc, char** argv) {

    srand(time(NULL));
    
    int tosses;
    
    cout << "Coin Toss\n";
    cout << "---------\n\n";
    
    cout << "Enter number of tosses: ";
    cin >> tosses;
    
    for (int i = 1; i <= tosses; i++){
        cout << "Toss " << i << ": " << coinToss();
    }
    
    return 0;
}

string coinToss(){
    
    int toss = rand()%2+1;
    
    switch(toss){
        case 1: return "heads\n"; break;
        case 2: return "tails\n"; break;
    }
    
}