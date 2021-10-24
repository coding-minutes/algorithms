#include <iostream>
#define ROWS 3
#define COLS 3
using namespace std;

void inputMatrix(int mat[][COLS], int rows, int cols);
void printMatrix(int mat[][COLS], int rows, int cols);
void accessMatrix(int mat[][COLS], int rows, int cols);

int main()
{
    int mat[ROWS][COLS];
    //int (*ptr)[][COLS];
    //ptr=mat;
    int i,j;

    cout<<"Enter the elements in "<<ROWS<<"x"<<COLS<<" matrix:"<<endl;
    inputMatrix(mat, ROWS, COLS);

    cout<<"Elements of "<<ROWS<<"x"<<COLS<<" matrix:"<<endl;
    printMatrix(mat, ROWS, COLS);

    
    accessMatrix(mat, ROWS, COLS);

}

void inputMatrix(int (*mat)[COLS], int rows, int cols)
{
    int i,j;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            //scanf("%d",(*(mat+i)+j));
            //int *r = *(mat+i)
            //cin>>&(*(mat+i)+j);//&mat[i][j]
            cin>>*(*(mat+i)+j);
        }
    }
}

void printMatrix(int (*mat)[COLS], int rows, int cols)
{
    int i,j;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cout<<*(*(mat+i)+j)<<" ";//mat[i][j]
        }
        cout<<endl;
    }
}

void accessMatrix(int (*mat)[COLS], int rows, int cols)
{
    int i,j;
    int row, col;
    cout<<"Enter the i and j of the element:"<<endl;
    cin>>row;
    cin>>col;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            if(i==row&&j==col)
            {
                cout<<"The element at the place: "<<mat[i][j]<<endl;
            }
        }
    }
}
