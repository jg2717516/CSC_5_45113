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

bool searchAccounts(int [], int, int);

int main(int argc, char** argv) {

    const int SIZE = 18;
    int num;
    int vld;
    int accnt[SIZE] = {
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    
    cout << "Enter account number to search: ";
    cin >> num;
    
    vld = searchAccounts(accnt, SIZE, num);
    if (vld)
        cout << "Account number is valid";
    else
        cout << "Account number is invalid";
    
    return 0;
}

bool searchAccounts(int accnt[], int size, int value){
    int i = 0;
    bool found = false;
    
    while (i < size && !found){
        if (accnt[i] == value){
            found = true;
        }
        i++;
    }
    return found;
}