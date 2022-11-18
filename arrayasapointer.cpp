#include <iostream>
using namespace std;

int main(){

    int marks[6]={67,54,71,51,84,26};
    //WRONG
    // cout << &marks << endl ;
    //RIGHT
    // cout << marks << endl ;
     
    
    // cout << &marks<< endl;  //0x61fef8
    // cout << marks <<endl;  //0x61fef8

    int* p=marks;
    // cout << p+2 << endl;         //0x61fefc
    // cout << marks+2 <<endl; //0x61fefc
    // cout << &marks[2] << endl;   //0x61fefc

    // cout << *(p+2) << endl ; //71
    // cout << marks[2] << endl; //71
    // cout << *(marks+2) << endl ; //71


    // cout << &(marks) ; //0x61fef4
    // cout << &p; //0x61fef4

return 0;
}