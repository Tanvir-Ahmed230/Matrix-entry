# Matrix-entry
Input of the matrix elements for the user
#include <iostream>
using namespace std;

int main() {
    int row,column,i,j;
    cout<<"Enter number of row : "<<endl;
    cin>>row;
cout<<"Enter number of column : "<<endl;
    cin>>column;
    int matrix[row][column];
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cout<<"Enter the element "<<" ["<<i+1<<"]"<<"["<<j+1<<"] : ";
            cin>>matrix[i][j];
        }
    }
    //input elements 
    cout<<"The entered matrix is "<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
