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
    string num; 
    int total;
    int numlen;
   //=========================================================//
    cout << "input string: " << endl;
    getline(cin, input);
    for(int i = 0; i < input.length(); i++){
        while(input[i] != ' ' && i < input.length()){
             num += input[i];
            i++; 
    
        }
        numlen = num.length(); 
        char a = stoi(num); 
        cout << a; 
        num ="";
        }


        total = 0; 
     return 0;
    }
