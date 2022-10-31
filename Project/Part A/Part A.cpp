#include<iostream>
#include<vector>
using namespace std;



void setBoard(vector<string>FEN,int N){
    vector<string>parts(7);
    vector<string>pieces;
    string buffer;
    int temp=0;

     
     for (int i=0;i<N;i++){
        //parts.clear(); 
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
       string fenParts=parts[0];
       char current;
      
 /*     for (int i=0;i<7;i++){
          for (int j=0;j<fenParts.length();j++){
              current=fenParts[j];
                 if (isdigit(current)){
                     file=file+1;
                 } 
                 else {
                     pieces.push_back(current+to_string(file)+to_string(file));
                       
                 }
          }

      }
*/


    }   
 cout<<"hello";   
 cout<<parts[0]<<endl;
 cout<<parts[1]<<endl;
 cout<<parts[2]<<endl;
 cout<<parts[3]<<endl;
 cout<<parts[4]<<endl;
 cout<<parts[5]<<endl;
 cout<<parts[6]<<endl;


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
