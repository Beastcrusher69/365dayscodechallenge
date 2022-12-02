#include <iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<< "enter the number of days:"<< endl;
    cin>> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n; i++)
    {   
        if(i==0)
        {
            if(a[0]>a[1])
                {
                    count++;
                }
        }

        else if(i=(n-1))
        {   
            for(int j=0;j<(n-1);j++)
            {

            if(a[n-1]<a[j])
                {
                    break;
                }
            if(j==(n-2))
            {
                count++;
            }
            }
        }

        else
        {
        for(int j=0;j<i;j++)
        {
            
            if(a[i]<a[j])
                {
                    break;
                }
            if(j==(i-1))
            {
                count++;
            }
        }
        }
        
    }

    cout<< "the number of record breaking days is " << count;


return 0;
}