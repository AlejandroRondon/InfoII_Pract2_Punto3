#include <cstdio>
#include <string>
#include <iostream>
#include "Mat2x2.h"
#include <stdlib.h>
//#include <conio.h> 
using namespace std;
int main( void ){
	system("clear");
	cout<< "Matrix Manager INIT" << endl;
	Mat2x2 my_matrix;
	Mat2x2 inv_matrix(0,0,0,0);
	Mat2x2 mult_matrix(0,0,0,0);
	cout<< "det[] = " << my_matrix.detMat2x2() << endl;
	cout<< "Matrix" << endl;	
	my_matrix.printMat2x2();	
	cout<< "trans[Matrix]" << endl;
	my_matrix.transMat2x2();
	my_matrix.printMat2x2();
	inv_matrix=my_matrix.invMat2x2();
	cout<< "inv[Matrix]" << endl;
	inv_matrix.printMat2x2();
	mult_matrix = my_matrix.mulMat2x2(inv_matrix);	
	cout<< "mult[Matrix]" << endl;
	mult_matrix.printMat2x2();
	cout<< "Matrix Manager  END" << endl;
	
}

//$ g++ -Wall prac1.cpp -o prac1.out
//$ ./prac1.out
//g++ -c archivo.cpp para compilar un no main
//g++ main.cpp archivo.o ... para compilar completo
