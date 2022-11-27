#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
       vector<int> v;
   for(int col=0;col<mCols;col++){
       if(col %2 != 0){
           for(int row=nRows-1;row>=0;row--){
               v.push_back(arr[row][col]);
           }
       }
       else{
           for(int row=0;row<nRows;row++){
               v.push_back(arr[row][col]);
           }
       }
   }
   return v;
}