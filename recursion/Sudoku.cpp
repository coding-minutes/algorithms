	#include<bits/stdc++.h>
using namespace std;
bool isSafe(int mat[][9],int i,int j,int n,int no)
{
	for(int k=0;k<n;k++)
	{
		if(mat[i][k]==no or mat[k][j]==no)
			return false;
	}
	int sx=(i/3)*3;
	int sy=(j/3)*3;
	for (int a=sx; a <sx+3 ; ++a)
	{
		for (int b = sy; b <sy+3 ; ++b)
		{
			if(mat[a][b]==no)
				return false;
		}
	}
	return true;
}
bool sudoku(int mat[][9],int i,int j,int n)
{
	// Base condition for the Sudoku problem.
	if(j==n){
		return sudoku(mat,i+1,0,n);
	}
	if(i==n)
	{
		for (int a = 0; a < n; ++a)
		{
			for (int b = 0; b < n; ++b)
			{
				cout<<mat[a][b]<<" ";
			}
			cout<<endl;
		}
		return true;

	}
	
	// If current no is not zero then skip to the next column.
	if(mat[i][j]!=0){
		return sudoku(mat,i,j+1,n);
	}

	// check for every case 
	for(int no=1;no<=9;no++)
	{
		if(isSafe(mat,i,j,n,no))
		{
			mat[i][j]=no;
			bool subProblem=sudoku(mat,i,j+1,n);
			if(subProblem==true){
				return true;
			}
		}
	}
	mat[i][j]=0;
	return false;
}
int main()
{
	int n=9;
	int mat[n][9]={
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,0,8},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};
	if(!sudoku(mat,0,0,n)){
		cout<<"No Solution exist\n";
	}
}