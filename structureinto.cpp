#include <iostream>
using namespace std;

struct employee 
    {
        int id; 
        char favchar;
        float salary;
    };

int main(){

    struct employee jay,gaurav;
   
    

    jay.id=9;
    jay.salary=70000;
    gaurav.id=71;
    jay.favchar='a';
    gaurav.favchar='h';
    gaurav.salary=30000;

    cout << "jay's id is " << jay.id << endl;
    cout << "jay's favourite character is " <<"'"<< jay.favchar<<"'"<< endl;
    cout << "jay's salary is " << jay.salary << endl;
    cout << "gaurav's id is " << gaurav.id << endl;
    cout << "gaurav's favourite character is "<<"'" << gaurav.favchar<<"'" << endl;
    cout << "gaurav's salary is " << gaurav.salary << endl;
    


}