#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <cctype> 
#include <cstring> 
#include <string>
#include <cmath>
using namespace std;
int main(){
   //========================== VARIABLES ===========================//  
    string input;  
    int shiftArray[8];
    int binary[8];
    int newNum[8];
    int shift;
    int current;
    int next;
    char shifted;
    int j; 
    int s;
   //=========================================================//
    
    cout << "input string: " << endl;
    getline(cin, input);
    cout << "How much must you XOR Shift? " << endl;
    cin >> shift; 
    for (int i = 0; i < 8; i++){
        shiftArray[i] =0; 
    } 
    //Declare values for the arrays to start with 0 
        while(shift != 0){  //Initial the XOR Constant Key
            if(shift%2 == 1){
                shiftArray[7-s] = 1;
            }
            else {
                shiftArray[7-s] = 0;
              //  cout << shiftArray[7-s];
            }
            shift = shift/2; 
            s++; 
        }
    for(int i = 0; i < input.length(); i++){
         for(int r = 0; r < 8; r++){
                binary[r] = 0; newNum[r] = 0;
            }
        //These reset the arrays for the next ASCII char
            current = input[i]; 
            if(current == 32){
                cout << " ";
                continue;
            }
        
        //Find the binary for the current plaintext character
         while(current != 0){
            if (current%2 == 1){
                binary[7-j] = 1;
                j++; 
            }
            else{binary [7-j] = 0; j++;}
            current = current/2; 
         }
         j = 0;
         //XOR Shifting 
         for(j = 0; j < 8; j++){
             if((shiftArray[j] == binary[j])){
                 newNum[j] = 0;
             }
             else{
                 newNum[j] = 1; 
             }
         }
         for (j = 0; j < 8; j++){
             if (newNum[j] == 1){
                 next += pow(2, 7-j);
             }
         }
         char shifted = next;
         cout << shifted;
         //Convert that number to integer
         j=0;
         next = 0;
    
    
    }
     return 0;
}
