#include<iostream>
using namespace std;
int main()
{
    int Testcases; //number of Testcases
    cin>>Testcases;
    
    while(Testcases--)
    {
        int Noofcoin,Kpeople,maximum,i; //declaration of variables
        cin>>Noofcoin>>Kpeople;
        fflush(stdin);
        maximum=0;
        
        for(i=1;i<=Kpeople;i++)
        {
            if(Noofcoin%i>maximum)
            {
                maximum=Noofcoin%i;
            }
        }
        cout<<maximum<<endl;
        
    }
    return 0;
}
//code by bhumika nayak