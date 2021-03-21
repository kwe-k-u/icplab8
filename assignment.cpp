#include <iostream>
using namespace std;


//Function that takes the row and column index from the 2dimensional array to return the corresponding index in a 1dimensional array


//returns the maximum linear index for the given 2dimensional row index
int maxIndx(int num){
	int sum = 2 * num;
	for (int i = 1; i <num; i++){
		sum+= i;
	}

	return sum;
}

int LinearIndx(int i, int j, int size){
	return maxIndx(i) - (i-j);
}

int InverseIndx(int I, int size){
	int row = 0;
	int column = I;
	while (row < column){
		column -=row;
		row++;
	}
	row--;

	cout << row << "," << column <<endl;

	return row,column;
}


//main function
int main(){
	//cout<< InverseIndx(3,3)<< endl;
	cout<<InverseIndx(11,8)<< endl;
	cout <<LinearIndx(0,0,8) <<endl;
	cout << LinearIndx(4,3,8) <<endl;
}
