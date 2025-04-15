#include <iostream>
#include "menu.h"
#include "operations.h"

using namespace std;

void WelcomeMessage(){
    cout<<R"(
                                                                          
 _____               _         _    _____     _         _     _           
|_   _|___ ___ _____|_|___ ___| |  |     |___| |___ _ _| |___| |_ ___ ___ 
  | | | -_|  _|     | |   | .'| |  |   --| .'| |  _| | | | .'|  _| . |  _|
  |_| |___|_| |_|_|_|_|_|_|__,|_|  |_____|__,|_|___|___|_|__,|_| |___|_|                                                                         
)"<<endl;
}

bool OperationSelect(){
    cout<<"                    Please Select An Operation:\n\n";
    cout<< R"(
        [1]Addition                           [3]Multiplication
        [2]Subtraction                        [4]Division
                              [0]Exit
)"<<endl;
    char Operation;
    cin>>Operation;
    switch (Operation)
    {
    case '1':
        cout<<"Addition (Enter 0 to exit)"<<"     Current value "<<getresult()<<endl;
        cout<<"================================================="<<endl;
        sum();
        return true;
        break;
    case '2':
        cout<<"Subtraction (Enter 0 to exit)"<<endl;
        cout<<"======================="<<endl;

        subtract();
        return true;
        break;
    case '3':
        cout<<"Multiplication (Enter 1 to exit)"<<endl;
        cout<<"======================="<<endl;
        multiplication();
        return true;
        break;
    case '4':
        cout<<"Division (Enter 1 to exit)"<<endl;
        cout<<"======================="<<endl;
        divide();
        return true;
        break;
    case '0':
        Goodbye(getresult());
        return true;
    default:
        cout<<"No operation selected..."<<endl;
        return false;
        break;
    }
}
void Goodbye(int result){
    cout<< "FINAL RESULT: "<<result<<endl;
    cout<<"Thank You for using Terminal Calculator :)"<<endl;
}