#include "operations.h"
#include "menu.h"
#include <iostream>

using namespace std;

int result=0;

int sum(){
    int value;
    do
    {
        cout<<"Enter a Value: ";
        cin>>value;
        result+=value; 
    } while (value!=0);

        cout<<"Final Result: ";
        cout<<result<<endl;
        OperationSelect();  
    return result;

}

int subtract(){
    int value;
    do
    {
        if(result==0){
        cout<<"This is working... ";
        cin>>value;
        result=value;
        }else{
            cout<<"Subract Value:  ";
            cin>>value; 
            result=result-value;
        }
    } while (value!=0);

        cout<<"Final Result: ";
        cout<<result<<endl;
        OperationSelect(); 
    return result;

}

int multiplication(){
    int value;
    do
    {
        cout<<"Enter a Value: ";
        cin>>value;
        result*=value; 
    } while (value!=1);

        cout<<"Final Result: ";
        cout<<result<<endl;
       OperationSelect(); 
    return result;

}

int divide(){
    int value;
    do
    {
        if(result==0){
        cout<<"This is working... ";
        cin>>value;
        result=value;
        }else{
            cout<<"Enter a Value:  ";
            cin>>value; 
            result=result/value;
        }
    } while (value!=1);

        cout<<"Final Result: ";
        cout<<result<<endl;
        OperationSelect();  
    return result;

}
int getresult(){
    return result;
}