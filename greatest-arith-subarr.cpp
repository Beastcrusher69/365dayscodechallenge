#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[n];
    }

    int curr=2,ans=2;
     
     for(int i=0;i<(n-2);i++)
     {  
        curr=2;
        int d=a[i+1]-a[i];
        for(int j=i+1;j<(n-1);j++)
        {
            int diff=a[j+1]-a[j];

            if(diff==d)
            {
                curr+=1;
                ans=max(curr,ans);

            }
            else
            {
                break;
            }
        }
     }
     cout << ans;

return 0;
}