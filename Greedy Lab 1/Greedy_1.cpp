#include<bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;

int main(){
    
    int iNumber;
    cin >> iNumber;

    // array to store denominations
    int iDeno[iNumber];
    vector<int>arr;

    for(int i = 0 ; i < iNumber ; i++){
        cin >> iDeno[i]; 
    }
    
    int iCases;
    cin >> iCases;

    //finding minimum of coins for each test case
    while(iCases--){

        
        int iAmount;
        cin >> iAmount;

        // variable for storing the number of coins
        int iCoins = 0;
         
    for (int i=iNumber-1;i >=0;i--){
        while(iAmount >= iDeno[i]){
    

        iAmount = iAmount - iDeno[i];
        
            iCoins++;
      }
    }

cout << iCoins << endl;
}
return 0;
}
