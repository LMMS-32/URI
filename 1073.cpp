#include <iostream>
#include <math.h>
//#include <iomanip>
using namespace std;
	int main(){

		/*problem 1073 
			Leia um valor inteiro N. 
			Apresente o quadrado de cada um dos valores pares, 
			de 1 até N, inclusive N, se for o caso.
			*/

		int N, bicho;

		cin>>N;

		while (bicho < N )
			bicho = (pow(N, 2));
				if (N%2 == 0){

				cout << bicho <<endl;
				}
				bicho++;

	return 0;
	}