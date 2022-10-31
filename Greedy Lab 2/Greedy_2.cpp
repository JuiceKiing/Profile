#include <iostream>

using namespace std;

int main()
{
    // create pointers to arrays to store the dragons head diameter and knights height
    int *knights, *dragons;
    //int knights,dragons;
    // variables to store number of knights, dragons and minimum total height
    int nKnights, nDragons, minTotalHeight = 0;
    bool *knightUsed; // bool array to store status of each knight(used/not used)
    // read the number of dragons
    cin >> nDragons;
    // create an array of nDragons integers
    
    dragons = new int[nDragons];
    //int dragons[nDragons];


    // loop to read each dragon head diameter
    for(int i=0;i<nDragons;i++){
        cin >> dragons[i];
    }
    
     cin>>nKnights;

    knights = new int[nKnights];
    //int knights[nKnights];
    //bool knightUsed[nKnights];
    // create an array of nKnights booleans
    knightUsed = new bool[nKnights];

    // loop to read each knight height and set status of each knight to false
    for(int i=0;i<nKnights;i++){
        cin >> knights[i];
        knightUsed[i] = false;
    }
    // loop over each dragon
    for(int i=0;i<nDragons;i++)
    {
        int idx = -1; // set index of minimum knight height to -1
        // loop over the knights array
        for(int j=0;j<nKnights;j++)
            {
                // jth knight is not used and its height is >= dragon's diameter and min index is -1 or this knight's height is less than current minimum
                if(!knightUsed[j] && (knights[j] >= dragons[i]) && (idx == -1 || knights[j] < knights[idx]))
                idx = j; // update idx to j
             }
        // add the height of the idx knight to minTotalHeight 
        minTotalHeight += knights[idx];
        knightUsed[idx] = true; // set idx of knightUsed to true
}
// display the minimum total height
cout << minTotalHeight;
// delete the dynamic arrays created
//delete dragons;
//delete knights;
//delete knightUsed;
return 0;
}

