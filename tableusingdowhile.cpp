#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "choose the number whose multiplication table you want:";
    int n;
    cin >> n;

    int i=1;
    do{
        // cout << n <<" " << "x " << i << " "  << "= " << (n*i) << endl;
        cout << n  <<" "<< "x " <<setw(2)<< i << " "  << "= " << setw(2) << (n*i) << endl;

        i++;
    }while(i<=10);
}