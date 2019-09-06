#include<iostream>
#include<stdlib.h>
using namespace std;

void pathHelper(int** matrix, int n, int row, int col, int** isVisited){

  //Check in the starting itself
  if(row == n-1 && col == n-1){
    //Mark as visited, because nowhere else it is being marked
    isVisited[row][col] = 1;
    cout<<"reached"<<endl;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cout<<isVisited[i][j]<<" ";
      }
      cout<<endl;
    }
    return;
  }
  /*
  When checking, first check whether index are valid before checking the value in matrix
  */
  if(row <0 || row >= n || col < 0 || col >= n|| isVisited[row][col] == 1 || matrix[row][col] == 0)
    return;

  //Mark as visited
  isVisited[row][col] = 1;

  //Now, go in all the directions
  pathHelper(matrix, n, row-1, col, isVisited);
  pathHelper(matrix, n, row, col-1, isVisited);
  pathHelper(matrix, n, row+1, col, isVisited);
  pathHelper(matrix, n, row, col+1, isVisited);

  //Before moving out from this point, mark it as not travelled
  isVisited[row][col] = 0;
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int** matrix = new int*[n];
  for(int i = 0; i < n; i++){
    matrix[i] = new int[n];
    for(int j = 0; j < n; j++){
      cin>>matrix[i][j];
    }
  }
  int** isVisited = new int*[n];
  for(int i = 0; i < n; i++){
    isVisited[i] = new int[n];
    for(int j = 0; j < n; j++){
      isVisited[i][j] = 0;
    }
  }
  pathHelper(matrix, n, 0, 0, isVisited);

  for(int i = 0; i < n; i++){
    delete[] matrix[i];
    delete[] isVisited[i];
  }

  delete[] matrix;
  delete[] isVisited;

  return 0;
}
