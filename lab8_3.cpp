#include<iostream>
#include<string>
#include<cmath>

using namespace std;

string characterName(int age){
    int height, bounty;
    string name;
    if(age<=25){
    cout << "Enter your height: ";
    cin >> height;
    cin.ignore();
        if(height<100){
        name = "Chopper";
     }else if(height<180){
        name = "Usopp";
     }else{
        cout << "Enter your bounty: ";
        cin >> bounty;
         cin.ignore();
        if(bounty>1100e6){
            name = "Zoro";
        }else{
            name = "Sanji";
        }
    }
    }else{
        if(age<=60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        cin.ignore();
        if(bounty>500e6){
            name = "Jinbe";
        }else{
            name = "Franky";
        }
     }else{
        name = "Brook";
     }
    }
return name;
}



int main(){
    int age;
    cout << "Enter your age: ";
    cin  >> age;
    string hi = characterName(age);
    cout << "Your character = " << hi;

    return 0;
}
