#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5][4] = {{1,2,3,5},
    {6,8,9,10},{11,12,14,16},
    {18,20,21,22},{23,24,25,26}};
    int l1 = 1, r1 = 1;
    int l2 = 4, r2 = 2;

    int sum = 0;

    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum += arr[i][j];
        }
    }
    cout<<"The Rectangle of matrix is : "<<sum;
}