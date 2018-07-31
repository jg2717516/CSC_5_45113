/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 22, 2018, 7:44 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstring>

using namespace std;

/*
 * 
 */


int main(int argc, char** argv) {

    // Random number seed
    srand(time(NULL));
    const int HAND_SIZE = 10;
    //const int DECK_SIZE = 108;
    // For loop iterator
    int i;    
    int turn = 1; // 1: Players turn | -1: CPU's turn
    //int drwCnt = 0; // Count the number of cards drawn
    int crdPos; // Chosen card position in hand
    char crntCrd[1]; // Current player card
    char crntClr[1]; // Current player card color
    char topCrd[1]; // Card on top of pile
    char topClr[1]; // Card color on top of pile
    char randCrd[1]; // Randomly generated card
    char randClr[1]; // Randomly generated color
    char newCrd[1]; // Top card drawn from deck
    char newClr[1]; // Top card color drawn from deck
    bool vldCrd = false; // Check if card is in player's hand
    bool endGame = false; // Check for end of game
    string input; // Player input for card
    string colors = "RGBY"; // Available colors to choose from   
    // Player and CPU cards as characters
    string p1Crds; // Card
    string p1Clrs; // Color
    string cpuCrds; // Card
    string cpuClrs; // Color
    // Deck cards
    string deck; 
    string dckClrs;
    string tmpDeck;
    string tmpClrs;
    // Introduce game
    cout << "Welcome to Uno!\n";
    cout << "You will start with 10 cards!\n\n";
    cout << "Card key:\n";
    cout << "\t0-9 = Card number\n";
    cout << "\tR = Red\n\tG = Green\n\tB = Blue\n\tY = Yellow\n";
    cout << "\tx = Skip next player's turn\n\t+ = Next player draws two cards\n";
    // Generate standard deck
    for (i = 0; i < 4; i++){
        for (int n = 0; n < 10; n++){
            tmpDeck.append(string (1, char(n + '0')));
            tmpDeck.append(string (1, char(n + '0')));
            tmpClrs.append(string (1, colors[i]));
            tmpClrs.append(string (1, colors[i]));
        }
        for (int n = 0; n < 2; n++){
            tmpDeck.append(string (1, 'x'));
            tmpDeck.append(string (1, '+'));
            tmpClrs.append(string (1, colors[i]));
            tmpClrs.append(string (1, colors[i]));
        }
    }
    // Shuffle deck 
    do {
        int ranPos = rand()%tmpDeck.length();
        deck.append(string (1, tmpDeck[ranPos]));
        dckClrs.append(string (1, tmpClrs[ranPos]));
        tmpDeck.erase(ranPos, 1);
        tmpClrs.erase(ranPos, 1);
        
    } while (tmpDeck.length() > 0);
    
    // Give cards to to player and CPU from top of deck
    for (i = 0; i < HAND_SIZE*2; i++){
        newCrd[0] = deck.back();
        newClr[0] = dckClrs.back();
        if (i % 2 == 0){
            p1Crds.append(string (1, newCrd[0]));
            p1Clrs.append(string (1, newClr[0]));
        }
        else if (i % 2 == 1){
            cpuCrds.append(string (1, newCrd[0]));
            cpuClrs.append(string (1, newClr[0]));
        }
        deck.erase(deck.end()-1);
        dckClrs.erase(dckClrs.end()-1);
    }
    
    // Draw a card from deck to start with
    topCrd[0] = deck.back();
    topClr[0] = dckClrs.back();
    deck.erase(deck.end()-1);
    dckClrs.erase(dckClrs.end()-1);
    // Start game, cycle through turns
    while (!endGame) {
        if (turn == 1){ // Player turn
            do {
                // Process for card selection
                cout << "\nTop card on pile is: \n\t\t[" << topClr[0] << topCrd[0] << "]\n";
                cout << "Pick a card from your hand -\n\t\t";
                for (i = 0; i < p1Crds.length(); i++){
                    cout << setw(4) << i;
                }
                cout << "\n\t\t";
                for (i = 0; i < p1Crds.length(); i++){
                    cout << "[" << p1Clrs[i] << p1Crds[i] << "]";
                }
                cout << " Card: ";
                cin >> input;
                // Process commands
                while (!isdigit(input[0])){
                    switch(input[0]){
                        case 'd':
                            newCrd[0] = deck.back();
                            newClr[0] = dckClrs.back();
                            p1Crds.append(string (1, newCrd[0]));
                            p1Clrs.append(string (1, newClr[0]));
                            deck.erase(deck.end()-1);
                            dckClrs.erase(dckClrs.end()-1);                           
                            break;
                    }
                    cout << "Updated hand:\t";             
                    for (i = 0; i < p1Crds.length(); i++)
                        cout << setw(4) << i;
                    cout << "\n\t\t";
                    for (i = 0; i < p1Crds.length(); i++)
                        cout << "[" << p1Clrs[i] << p1Crds[i] << "]";
                    cout << " Card: ";
                    cin >> input;  
                }
                // End processing commands
                crdPos = stoi(input);
                crntCrd[0] = p1Crds[crdPos];
                crntClr[0] = p1Clrs[crdPos];
                
                // Process action cards
                switch(crntCrd[0]){
                    // Draw 2: Make CPU draw two cards
                    case '+':
                        for (i = 0; i < 2; i++){
                            newCrd[0] = deck.back();
                            newClr[0] = dckClrs.back();
                            cpuCrds.append(string (1, newCrd[0]));
                            cpuClrs.append(string (1, newClr[0]));
                            deck.erase(deck.end()-1);
                            dckClrs.erase(dckClrs.end()-1);
                        }
                        cout << "CPU grabbed two cards from deck!\n"; 
                        break;
                    // Skip turn: Skip CPU's turn
                    case 'x':
                        turn *= -1;
                        cout << "CPU turn skipped!\n";
                        break;
                }
                // End card selection

                // Check selected card against top card
                if (crntCrd[0] == topCrd[0] || crntClr[0] == topClr[0]){
                    vldCrd = true;               
                }
            } while (!vldCrd);                
                                   
            // Place card on top of pile
            topCrd[0] = crntCrd[0];
            topClr[0] = crntClr[0];
            
            // Remove placed card from hand
            p1Crds.erase(crdPos, 1);
            p1Clrs.erase(crdPos, 1);
            
            // End turn
            if (p1Crds.length() == 0)
                endGame = true;
            turn *= -1;
            vldCrd = false;
            
        } else if (turn == -1) { // CPU turn
            cout << "CPU's turn\n";            
            do {
                // Find card in hand that matches            
                for (i = 0; i < cpuCrds.length(); i++){
                    if (!vldCrd){
                        if (cpuClrs[i] == topClr[0] || cpuCrds[i] == topCrd[0]){
                            crdPos = i;
                            vldCrd = true;
                        }
                    }
                }
                
                // If no card matches, draw from deck
                if (!vldCrd){
                    newCrd[0] = deck.back();
                    newClr[0] = dckClrs.back();
                    cpuCrds.append(string (1, newCrd[0]));
                    cpuClrs.append(string (1, newClr[0]));
                    deck.erase(deck.end()-1);
                    dckClrs.erase(dckClrs.end()-1);
                    cout << "CPU grabbed card from deck\n";
                }
            } while (!vldCrd);
            
            // Process action cards
            switch(cpuCrds[crdPos]){
                // Draw 2: Make Player draw two cards
                case '+':
                    for (i = 0; i < 2; i++){
                        newCrd[0] = deck.back();
                        newClr[0] = dckClrs.back();
                        p1Crds.append(string (1, newCrd[0]));
                        p1Clrs.append(string (1, newClr[0]));
                        deck.erase(deck.end()-1);
                        dckClrs.erase(dckClrs.end()-1);
                    }
                    cout << "Player grabbed two cards from deck!\n"; 
                    break;
                // Skip turn: Skip Player's turn
                case 'x':
                    turn *= -1;
                    cout << "Player turn skipped!\n";
                    break;
            }
            
            // Place card on top of pile
            topCrd[0] = cpuCrds[crdPos];
            topClr[0] = cpuClrs[crdPos];
            
            // Remove placed card from hand
            cpuCrds.erase(crdPos, 1);
            cpuClrs.erase(crdPos, 1);            
            
            // End turn
            cout << "CPU has " << cpuCrds.length() << " cards left." << endl;
            if (cpuCrds.length() == 0)
                endGame = true;
            turn *= -1;
            vldCrd = false;
            
        }
    }
    
    if (p1Crds.length() == 0)
        cout << endl << "You won!!" << endl;
    else
        cout << endl << "CPU won!!" << endl;
    
    return 0;
}

