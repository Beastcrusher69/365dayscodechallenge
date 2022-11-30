#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the length of array:"<< endl;
    cin>> n;
    cout << "enter the elements:"<< endl;
    int a[n];

    for (int i=0;i<n;i++)
    {
        cin>> a[i];
    }

    cout << "\n";

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i ;j<n ;j++)
        {
            sum=sum+a[j];
            cout<< sum << endl;
        }
        cout << endl;
    }
return 0;
}