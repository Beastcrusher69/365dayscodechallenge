#include <iostream>
using namespace std;
 
typedef union people
{
    float rice;
    int money;
    char car;

} people ;

int main(){
    people rajat;
     rajat.car='t';
     rajat.money=10;

     cout << rajat.car ;
return 0;
}
