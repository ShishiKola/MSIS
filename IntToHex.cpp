#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <cctype> 
#include <cstring> 
#include <string>
#include <cmath>
using namespace std;
class charSLLNode {
    public: 
        charSLLNode() {
        next = 0;
        }
        charSLLNode(char el, charSLLNode *ptr = 0) {
        info = el; next = ptr;
         }
    char info;
    charSLLNode *next;
};
class LLStack {
public:
    LLStack() { 
        top = nullptr;
    }
    void clear() {
    }
    bool isEmpty() const { 
        return top == nullptr;
    }
    char topEl() { 
        return top->info; 
    }
    char pop() { 
        if (isEmpty()){
            cout << "STACK IS EMPTY!?!" << endl;
            return -1; 
        }
        char el = top->info; 
        //Top of Stack Info
        //cout << "el: " << el;
        tmp = new charSLLNode(el, top);
        top =  top->next; 
        delete tmp; 
    //in case there is one node only. 
    
    return el; 
    }
    void push_back(char el) {
       // cout << "el: " << el << endl;
        top = new charSLLNode(el, top);  
    }
    void peek(){
        //cout << "current top: " << top->info;
        for(charSLLNode *tmp = top; tmp != 0; tmp = tmp->next){
        cout << tmp->info << "";
         }
    }
private:
     
    charSLLNode *top, *tmp;
};
int main(){
   //========================== VARIABLES ===========================// 
    LLStack hexList;
    string input; 
    string nums; 
    string hex; 
    int stackSize=0;
    int total;
    int expo;
    int num;
    int binary [8];
    int hexlen;
    char hexa;
   //=========================================================//
    cout << "input string: " << endl;
    getline(cin, input);
    
    for(int i = 0; i < input.length(); i++){
        while(input[i] != ' ' && i < input.length()){
            nums += input[i];
            i++; 
    
        }
        hexlen = hex.length(); 
        //cout << nums << endl;
        if(isdigit(nums[0])){
           // cout << "ayo this it";
            num = stoi(nums);
        }
        
        
        while(num != 0){
            if (num%16 > 10){
                   hexa = ((num%16)+55);
                   //cout << hexa;
                   hexList.push_back(hexa);
            }
            else{
                hexa = ((num%16)+48);
                hexList.push_back(hexa);
                }
                stackSize++;
                num = num/16;
            }
             hexList.peek();
        for(int j = 0; j < stackSize; j++){
            //cout << "j:" << j;
            hexList.pop();
        }
        cout << " ";
            
            stackSize = 0; 
            nums ="";
        }
       // cout << " " << total;
        total = 0; 
        return 0;  
    }
    

