#include <iostream>
using namespace std;

int main()
{
    string a[9]={"1","2","3","4","5","6","7","8","9"};
    int n,count=1;


    do{
    cout <<"\n\n\t\t\t\t    TIC TAC TOE"<< endl << "\t\tplayer1:  O"<< endl << "\t\tplayer2:  X\n\n";

    cout << "\t\t\t\t      |     |     " << endl;
    cout << "\t\t\t\t __"<<a[0]<<"__|__"<<a[1]<<"__|__"<<a[2]<<"__" << endl;
    cout << "\t\t\t\t      |     |     " << endl;
    cout << "\t\t\t\t __"<<a[3]<<"__|__"<<a[4]<<"__|__"<<a[5]<<"__" << endl;
    cout << "\t\t\t\t      |     |     " << endl;
    cout << "\t\t\t\t   "<<a[6]<<"  |  "<<a[7]<<"  |  "<<a[8]<<"  " << endl;

    

    if(((a[0]==a[1]) && (a[1]==a[2])) || 
       ((a[3]==a[4]) && (a[4]==a[5])) ||
       ((a[6]==a[7]) && (a[7]==a[8])) ||
       ((a[0]==a[3]) && (a[3]==a[6])) ||
       ((a[1]==a[4]) && (a[4]==a[7])) ||
       ((a[2]==a[5]) && (a[5]==a[8])) ||
       ((a[0]==a[4]) && (a[4]==a[8])) ||
       ((a[2]==a[4]) && (a[4]==a[6])) )
       {
        
        if((count%2) ==0)
        {  cout << "\n\t\t\t\t\t*************"<< endl;
           cout << "\t\t\t\t\tplayer 1 wins"<< endl;
           cout << "\t\t\t\t\t*************"<< endl;         
        }
        else
        {  cout << "\n5\t\t\t\t\t*************" << endl;
           cout << "\t\t\t\t\tplayer 2 wins" << endl;
           cout << "\t\t\t\t\t*************" << endl;
        }
        return 0;
       
        
       }
       else{
                if((count%2)!=0){
                cout << "\t\tplayer 1's turn (O)" << endl;
                cout << "\t\tenter the cell no:" << endl;
                cin >> n;
                a[n-1]="O";

                }
                else{
                        cout << "\t\tplayer 2's turn (X)" << endl;
                        cout << "\t\tenter the cell no:";
                        cin>> n;
                        a[n-1]="X";
                        }
       }

    count++;
    }while(true);
}