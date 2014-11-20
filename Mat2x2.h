#ifndef MAT2X2_H
#define MAT2X2_H
#include <string>
#include <cstdio>
#include <iostream>

using namespace std;
class Mat2x2
{

private:
	float mat2x2[2][2];
	//float mat2x2B[2][2];
	//float mat2x2C[2][2];
public:
	Mat2x2();
	Mat2x2(float ,float ,float ,float );
	void readMat2x2(void);
	void fillMat2x2(float ,float ,float ,float );
	float detMat2x2(void);
	void transMat2x2(void);	
	Mat2x2 invMat2x2(void);
	Mat2x2 mulMat2x2(Mat2x2);
	void printMat2x2(void);
};

#endif // MAT2X2_H

/*
Dise ̃ne la clase Mat2x2 para representar una matriz cuadrada de dos filas por dos colum-
nas. El constructor por defecto de la clase Mat2x2 debe permitir inicializar cada uno de los
atributos de la clase (elementos de la matriz) expl ́ıcitamente, en caso contrario, si no se especi-
fica ning ́un valor inicial para los elementos de la matriz, estos deben inicializarse en 0. La clase
Mat2x2 debe contar con los siguientes m ́etodos:
a) El m ́etodo determinant, por medio del cual se puede calcular el determinante de la
matriz.
b) El m ́etodo inverse que retorna la inversa de la matriz actual.
c) El m ́etodo transpose que transpone la matriz actual.
d) El m ́etodo multiplyByMat2x2 que permite multiplicar la matriz actual por otra matriz
2x2.
e) Finalmente, el m ́etodo printMat2x2 que imprime la matriz en la terminal.
Escriba un programa de prueba, empleando todos los m ́etodos de la clase Mat2x2, que produz-
ca la siguiente salida en la terminal:

*/
