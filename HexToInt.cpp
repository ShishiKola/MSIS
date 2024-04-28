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
    //I wanted to split the stacks for easier readablity
    const int ascii = 48; 
    string input; 
    string num; 
    string binary; 
    string hex; 
    int rightInput = 2;
    int choi=0;
    int current=0; 
    int stackSize=0; 
    int mod16; 
    int total; 
    int expo;
    int hexlen;
   //=========================================================//
    cout << "input string: " << endl;
    getline(cin, input);
    for(int i = 0; i < input.length(); i++){
        while(input[i] != ' ' && i < input.length()){
            hex += input[i];
            i++; 
    
        }
        hexlen = hex.length(); 
            for(int j = 0; j < hexlen; j++){
                int c=0;  
                if(isdigit(hex[j])){
                c = hex[j] - '0'; 
                expo = pow(16, hexlen-(j+1));
                total += c*(expo);
            }
            else{
                c = hex[j]-55; 
                expo = pow(16, hexlen-(j+1));
                total += c*(expo);
            }
            expo = 0;
        }
        cout << " " << total;
        total = 0; 
        hex ="";
     
    }
     return 0;
    

}
