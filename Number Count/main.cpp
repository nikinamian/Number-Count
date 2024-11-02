//
//  main.cpp
//  Number Count
//
//  Created by Niki Namian on 11/2/24.
//

#include <iostream>

using namespace std;

int main()

{
    int n = 0;
    
    //get a user input for n
    do{
        cout<< "Enter N: ";
        cin>>n;
        
        //printout every other number
        for (int i=1;i<=n;i+=2)
        {
            cout<<i;
            //printout a comma and space after a number but not the last one
            if (i<n-1)
            {
                cout << ",";
                
            }
        }
        cout<<"\n";
    }while (n>0); //repeat when n larger than 0
        cout<<"Goodbye!";
    
    return 0;
}
