#include <iostream>
#include "Can.h"
using namespace std;

Can::Can(){
    contents = "empty";
    volume = 0;
}

Can::Can(string c, int v){
    contents = c;
    volume = v;
}

void Can::display(){
    cout << contents << ":" << volume;
}

//class Can{
//private:
//    string contents;
//    int volume;
//public:
//    Can();
//    Can(string, int);
//    void display();
//};