#include <iostream>
#include <cstdio>
using namespace std;




//function to give the size of the 1d array depending on the lenght of the 2d array
//the size of the 1d array is the sum of integers from the size of the 2d to 0
const int consecutiveSum(int size){
	const int index = ((size +1)*size)/2;
	return index;
}


int twoDimArray[128][128] = {}; //two dimensional array generated by function
int oneDimArray[12672] = {}; //one dimensional array from transfer of two dimentional array
int translatedTwoDimArray[0][0] = {}; //two dimensional array from the transpose of one dimensional array





//function to generate the triangular 2d array from the passed size
void genArray(  int size){
for (int row = 0; row < size; row++){
	for (int column = 0; column <= row; column++){
		twoDimArray[row][column] = (rand()%1000)+1;
	}
}

}



//method to list out all the elements in the two dimensional array
void display2array(int size){
	for (int row = 0; row <size; row++){
		for (int column = 0; column < size; column++){
		cout << twoDimArray[row][column];
		}
		cout << endl; // move to next line
	}
}



//function to determine a 1d array's cell corresponding index in a 2d triangular array
void InverseIndex(int index, int row, int column){

	while (row <= column){
		column -= row;
		row ++;
	}

}

//function to turn a 2d triangualr array into a 1d array
void make1dim(int size){

	for(int index = 0; index <size; index++){
		int row = 0;
		int column = index;
		 InverseIndex(index, row, column);
		oneDimArray[index] = twoDimArray[row][column];
	}
}


//function to display elements in a 1d array
void display1array(int size){
	for (int i = 0; i < consecutiveSum(size); i++){
		cout << oneDimArray[i];
	}
}







//main function
int main(){
	int list[3] = {8, 32, 128};//list of the lengths that the 2d array will take


	genArray(128);
	display2array(128);
	make1dim(128);
	display1array(128);


	return 0;
}
