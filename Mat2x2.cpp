#include "Mat2x2.h"
#include <cstdio>
#include <string>
#include <iostream>

using namespace std;


Mat2x2::Mat2x2(){
	cout.precision(2);
	cout.setf(cout.fixed);
	readMat2x2();
}
Mat2x2::Mat2x2(float a,float b,float c,float d){
	mat2x2[0][0]=a;
	mat2x2[0][1]=b;
	mat2x2[1][0]=c;
	mat2x2[1][1]=d;
}
void Mat2x2::readMat2x2(){
int i,j;	
	cout << "----Fill Matrix 2x2----"<< endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		cout << "Enter the value to the position " << i << "," << j <<endl;
		cin >> mat2x2[i][j];
		}
	}
}
void Mat2x2::fillMat2x2(float a,float b,float c,float d){
	mat2x2[0][0]=a;
	mat2x2[0][1]=b;
	mat2x2[1][0]=c;
	mat2x2[1][1]=d;
}
void Mat2x2::transMat2x2(void){
int i,j;
float aux;	
//for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	aux = mat2x2[j][0];
	mat2x2[j][0] = mat2x2[0][j];
	mat2x2[0][j] = aux;
	}
//}
}
float Mat2x2::detMat2x2(){
	return ((mat2x2[0][0]*mat2x2[1][1])-(mat2x2[0][1]*mat2x2[1][0]));
}
Mat2x2 Mat2x2::invMat2x2(){
float det = detMat2x2();
Mat2x2 ansMat2x2(0,0,0,0);	
	if(det != 0){
	det = 1/det;//aqui deja de ser el determinante
	//ansMat2x2.fillMat2x2(det*mat2x2[1][1],(-1)*det*mat2x2[0][1],(-1)*det*mat2x2[1][0],det*mat2x2[0][0]);	//estas lineas hacen lo mismo
	ansMat2x2 = Mat2x2(det*mat2x2[1][1],(-1)*det*mat2x2[0][1],(-1)*det*mat2x2[1][0],det*mat2x2[0][0]);	
	return ansMat2x2;
	}else{
	cout <<"Matrix without inverse"<< endl;
	return ansMat2x2;
	}
}
Mat2x2 Mat2x2::mulMat2x2(Mat2x2 matrix){
float a=matrix.mat2x2[0][0]*mat2x2[0][0] + matrix.mat2x2[0][1]*mat2x2[1][0];float b=matrix.mat2x2[0][0]*mat2x2[0][1] + matrix.mat2x2[0][1]*mat2x2[1][1];
float c=matrix.mat2x2[1][0]*mat2x2[0][0] + matrix.mat2x2[1][1]*mat2x2[1][0];float d=matrix.mat2x2[1][0]*mat2x2[0][1] + matrix.mat2x2[1][1]*mat2x2[1][1];

Mat2x2 ansMat2x2(a,b,c,d);
	return ansMat2x2;
}
void Mat2x2::printMat2x2(void){
	cout << "- \t -" << endl;
	cout << "|"<<mat2x2[0][0] <<"\t"<<mat2x2[0][1]<<"|\n"<<"| \t |"<<endl <<"|"<<mat2x2[1][0] <<"\t"<<mat2x2[1][1]<< "|"<<endl;
	cout << "- \t -" << endl;
}


