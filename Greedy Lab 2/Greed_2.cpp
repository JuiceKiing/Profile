#include <iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    
    int *knights, *dragons;
    int iKnights, iDragons, minTotalHeight = 0;
    bool *knightUsed; 
    

    cin >> iDragons;
    
    dragons = new int[iDragons];
    //int dragons[iDragons];


    // read dragon head diameter
    for(int i=0;i<iDragons;i++){
        cin >> dragons[i];
    }
    
     cin>>iKnights;

    knights = new int[iKnights];
    //int knights[iKnights];
    //bool knightUsed[iKnights];

    // array of knights bools(used/not Used)
    knightUsed = new bool[iKnights];

    //read knight height and set bool array values to false
    for(int i=0;i<iKnights;i++){
        cin >> knights[i];
        knightUsed[i] = false;
    }

    for(int i=0;i<iDragons;i++)
    {
        int mth = -1; 
        
        for(int j=0;j<iKnights;j++)
            {
                
                if(!knightUsed[j] && (knights[j] >= dragons[i]) && (mth == -1 || knights[j] < knights[mth]))
                mth = j; 
             }
         
        minTotalHeight = minTotalHeight+knights[mth];
        knightUsed[mth] = true; 
}
// display the minimum total height
cout << minTotalHeight;

return 0;
}