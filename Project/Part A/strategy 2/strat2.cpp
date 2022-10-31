#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<string> getPieces(vector<string>pieces,char c){
    string sString,temp;
    vector<string>v;
    string buffer;
    //print white pawns
    v.clear();
    
    for(size_t p=0;p<pieces.size();p++){
        buffer=pieces[p];
        if(buffer[0]==c){
            temp=buffer.substr(1,2);
            v.push_back(temp);   
        }       
      }
      if (v.empty()){
          v.clear();
          return {};
          
      } else
 //v.clear();     
return v;

}

void printPieces(vector<string>pieces){
    string s1,s2,buffer;
    vector<string>see;

    //white pawn
    see=getPieces(pieces,'P');
    if (see.empty()){
        cout<<"white pawn:"<<endl;
    }else
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        
        s1=s1+" "+see[p];
      } 
 cout<<"white pawn:"<<s1<<endl;
 s1.clear();

 //black pawn
    see=getPieces(pieces,'p');
    if(see.empty()){
      cout<<"black pawn:"<<endl;
    }else {
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        
        s1=s1+" "+see[p];
      } 
 cout<<"black pawn:"<<s1<<endl;
 s1.clear();
    }

//white superpawn   
    see=getPieces(pieces,'S');
    if(see.empty()){
        cout<<"White superpawn:"<<endl;
    } else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){  
        s1=s1+" "+see[p];
      } 
 cout<<"white superpawn:"<<s1<<endl; 
 s1.clear();
    }

//black superpawn   
    see=getPieces(pieces,'s');
    if(see.empty()){
        cout<<"black superpawn:"<<endl;
    } else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){  
        s1=s1+" "+see[p];
      } 
 cout<<"black superpawn:"<<s1<<endl; 
    }    

//white giraffe
    see=getPieces(pieces,'G');
    if(see.empty()){
       cout<<"white giraffe:"<<endl; 
    } else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        
        s1=s1+" "+see[p];
      } 
 cout<<"white giraffe:"<<s1<<endl;
    }

//black giraffe
    see=getPieces(pieces,'g');
    if(see.empty()){
        cout<<"black giraffe:"<<endl;
    }else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        //s1=bPawns[p];
        s1=s1+" "+see[p];
      } 
 cout<<"black giraffe:"<<s1<<endl;
    }

//white monkey
    see=getPieces(pieces,'M');
    if(see.empty()){
        cout<<"white monkey:"<<endl;
    } else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        //s1=bPawns[p];
        s1=s1+" "+see[p];
      } 
 cout<<"white monkey:"<<s1<<endl;
    }


//black monkey
    see=getPieces(pieces,'m');
    if (see.empty()){
        cout<<"black monkey:"<<endl;
    }else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        //s1=bPawns[p];
        s1=s1+" "+see[p];
      } 
 cout<<"black monkey:"<<s1<<endl;
    }
    
//white elephant
    see=getPieces(pieces,'E');
    if(see.empty()){
        cout<<"white elephant:"<<endl;
    }else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        //s1=bPawns[p];
        s1=s1+" "+see[p];
      } 
       cout<<"white elephant:"<<s1<<endl;
    }

//black elephant
    see=getPieces(pieces,'e');
    if(see.empty()){
        cout<<"black elephant:"<<endl;
    }else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        //s1=bPawns[p];
        s1=s1+" "+see[p];
      } 
 cout<<"black elephant:"<<s1<<endl;
    }

 //white lion
    see=getPieces(pieces,'L');
    if(see.empty()){
        cout<<"white lion:"<<endl;
    }else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        s1=s1+" "+see[p];
      } 
 cout<<"white lion:"<<s1<<endl;
    }

 //black lion
    see=getPieces(pieces,'l');
    if(see.empty()){
        cout<<"black lion:"<<endl;
    }else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        //s1=bPawns[p];
        s1=s1+" "+see[p];
      } 
 cout<<"black lion:"<<s1<<endl;
    }
 //white crocodile
    see=getPieces(pieces,'C');
    if(see.empty()){
        cout<<"white crocodile:"<<endl;
    }else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        
        s1=s1+" "+see[p];
      } 
 cout<<"white crocodile:"<<s1<<endl;
    }
//black crocodile
    see=getPieces(pieces,'c');
    if(see.empty()){
        cout<<"black crocodile:"<<endl;
    }else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        s1=s1+" "+see[p];
      } 
 cout<<"black crocodile:"<<s1<<endl;
    }
//white zebra
    see=getPieces(pieces,'Z');
    if (see.empty()){
        cout<<"white zebra:"<<endl;
    }else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        //s1=bPawns[p];
        s1=s1+" "+see[p];
      } 
 cout<<"white zebra:"<<s1<<endl;
    }
 //black zebra
    see=getPieces(pieces,'z');
    if (see.empty()){
        cout<<"black zebra:"<<endl;
    }else{
    s1.clear();
    sort(see.begin(),see.end());
    buffer=see[0];
    for(size_t p=0;p<see.size();p++){
        //s1=bPawns[p];
        s1=s1+" "+see[p];
      } 
 cout<<"black zebra:"<<s1<<endl;

    }
  see.clear();
  pieces.clear();

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
    vector<string>final;
    vector<string>wPawns;
    string buffer;
    int temp;
     buffer=FEN[0]; 
     
     for (int i=0;i<N;i++){
         
        buffer=FEN[i];
        temp=0;
        //pieces.clear();
        parts.clear();
        
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
    parts.clear();
     final=convert(pieces);
     pieces.clear();
     //bPawns=getBlack(pieces);
     //wPawns=getWhite(pieces);
     //sort(bPawns.begin(),bPawns.end());
     //sort(wPawns.begin(),wPawns.end());
     printPieces(final);
     pieces.clear();
     
     temp=0;
     cout<<endl;
    }   
 
 

 

 



 

 

 




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