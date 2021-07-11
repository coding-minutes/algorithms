#include<bits/stdc++.h>
using namespace std;
void solution( vector < vector < bool >> board, int row, int cols, int ndiag, int rdiag, string asf) {
    if(row==board.size()){
        cout<<asf<<"."<<endl;
        return;
    }
   for(int col=0;col<board.size();col++){
       if( ((cols&(1<<col))==0)&&
           ((ndiag&(1<<(row+col)))==0)&&
           ((rdiag&(1<<(row-col+board.size()-1)))==0)
           ){
               board[row][col]=true;
               cols^=(1<<col);
               ndiag^=(1<<(row+col));
               rdiag^=(1<<(row-col+board.size()-1));
            solution(board, row+1, cols, ndiag, rdiag,asf+to_string(row)+"-"+to_string(col)+", ");
               board[row][col]=false;
               cols^=(1<<col);
               ndiag^=(1<<(row+col));
               rdiag^=(1<<(row-col+board.size()-1));
           }
   }
  }

int  main() {
    
    int n;
    cin>>n;
   
    vector < vector < bool >> board(n, vector < bool > (n));
  
    int cols = 0;
    int ndiag = 0;
    int rdiag = 0;
    solution(board, 0, cols, ndiag, rdiag, "");
  }