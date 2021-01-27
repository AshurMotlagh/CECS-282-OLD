//Ashur Motlagh,Sze Man Tang, Sean Heidari
//Demo time: 8:12
#include <iostream>
#include <string>
using namespace std;

class Can{
private:
    string contents;
    int volume;
public:
    Can();
    Can(string, int);
    void display();
    int getVolume();
};

int main() {
    Can pepsi("Pepsi",12);
    Can pears("Pears",16);
    Can mustard("Mustard",32);
    Can appleJuice("Apple Juice",40);

    pepsi.display();
    pears.display();
    mustard.display();
    appleJuice.display();

    cout<<"Total weight is: "<<pepsi.getVolume()+pears.getVolume()+mustard.getVolume()+appleJuice.getVolume() <<" oz"<<endl;

}

Can::Can(){
    contents = "empty";
    volume = 0;
}

Can::Can(string c, int v){
    contents = c;
    volume = v;
}

void Can::display(){
    cout << volume << " ounce can of "<< contents << endl;
}

int Can::getVolume(){
    return volume;
}
