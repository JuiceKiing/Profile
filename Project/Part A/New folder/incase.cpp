#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void printPieces(vector<string>bPawns,vector<string>wPawns,vector<string>pieces){
    string s1,s2,buffer;
    //print white pawns
    buffer=wPawns[0];
    for(size_t p=0;p<wPawns.size();p++){
        //s1=bPawns[p];
        s2=s2+" "+wPawns[p];     
      }
 cout<<"White Pawn:"<<s2<<endl;

    //print black pawns
    buffer=bPawns[0];
    for(size_t p=0;p<bPawns.size();p++){
        //s1=bPawns[p];
        s1=s1+" "+bPawns[p];
     
      } 
 cout<<"black pawn:"<<s1<<endl;
 
//white giraffe
for(size_t p=0;p<pieces.size();p++){
    buffer=pieces[p];
        if(buffer[0]=='G'){
            
        }
        cout<<"white giraffe: "<<pieces[p].substr(1,2)<<endl;
  }

//black giraffe
for(size_t p=0;p<pieces.size();p++){
    buffer=pieces[p];
        if(buffer[0]=='g'){
            cout<<"black giraffe: "<<pieces[p].substr(1,2)<<endl;
        }
  }

//white monkey
for(size_t p=0;p<pieces.size();p++){
    buffer=pieces[p];
        if(buffer[0]=='M'){
            cout<<"white monkey: "<<pieces[p].substr(1,2)<<endl;
        }
  }

//black monkey
for(size_t p=0;p<pieces.size();p++){
    buffer=pieces[p];
        if(buffer[0]=='m'){
            cout<<"black monkey: "<<pieces[p].substr(1,2)<<endl;
        }
  }    




 

}

vector<string> getBlack(vector<string>pieces){
    vector<string>bPawns;
    string buffer,temp;

    for(size_t p=0;p<pieces.size();p++){
      buffer=pieces[p];
      if (buffer[0]=='p'){
          temp=buffer.substr(1,2);
          bPawns.push_back(temp);

      }

    }

return bPawns;
}

vector<string> getWhite(vector<string>pieces){
    vector<string>wPawns;
    string buffer,temp;

    for(size_t p=0;p<pieces.size();p++){
      buffer=pieces[p];
      if (buffer[0]=='P'){
          temp=buffer.substr(1,2);
          wPawns.push_back(temp);

      }

    }

return wPawns;
}

vector<string> convert(vector<string>pieces){
string buffer;

    for(size_t p=0;p<pieces.size();p++){
      buffer=pieces[p];

      if(buffer[1]=='0'){
        buffer[1]='a';
        pieces[p]=buffer;

    }
    else if(buffer[1]=='1'){
        buffer[1]='b';
        pieces[p]=buffer;

    }
     else if(buffer[1]=='2'){

        buffer[1]='c';
        pieces[p]=buffer;
    }
     
     else if(buffer[1]=='3'){

        buffer[1]='d';
        pieces[p]=buffer;
    }

    else if(buffer[1]=='4'){

        buffer[1]='e';
        pieces[p]=buffer;
    }

    else if(buffer[1]=='5'){

        buffer[1]='f';
        pieces[p]=buffer;
    }

    else if(buffer[1]=='6'){

        buffer[1]='g';
        pieces[p]=buffer;
    }

     }
     
    return pieces;
}



void setBoard(vector<string>FEN,int N){
    vector<string>parts(7);
    vector<string>pieces;
    vector<string>bPawns;
    vector<string>wPawns;
    string buffer;
    int temp=0;

     
     for (int i=0;i<N;i++){
         
        buffer=FEN[i];
        //splitting FEN string into parts
        for (int j=0;j<buffer.length();j++){
            if(buffer[j]=='/'){
                ++temp;
            } else{
                if (buffer[j] != '/'){
                    parts[temp]=parts[temp]+buffer[j];
                }
            }
        }
        
       //settinh up the board
       int rank=7;
       int file=0;
       string fenParts;
       char current;
      
      for (int k=0;k<7;k++){
          fenParts=parts[k];
          

          for (int j=0;j<fenParts.length();j++){
              current=fenParts[j];
              

                 if (isdigit(current)){
                     file=file+(int)current-'0';
                 } 
                 else {
                     pieces.push_back(current+to_string(file)+to_string(rank));
                     file=file+1;
                       
                 }

          }
          file=0;
          rank=rank-1;
          

      }



    }   
 
 

 

 pieces=convert(pieces);
 bPawns=getBlack(pieces);
 wPawns=getWhite(pieces);
 sort(bPawns.begin(),bPawns.end());
 sort(wPawns.begin(),wPawns.end());



 

 for(size_t p=0;p<bPawns.size();p++){
     cout<<bPawns[p]<<endl;
 }
  cout<<endl;

for(size_t p=0;p<wPawns.size();p++){
    cout<<wPawns[p]<<endl;
    
 }

 printPieces(bPawns,wPawns,pieces);




}

int main(){
int N;
string s;


cin>>N;
vector<string> FEN(N);
//cin>>s;
for (int i=0;i<N;i++){
   cin>>s;
   FEN[i]=s;
}
setBoard(FEN,N);


return 0;
}
