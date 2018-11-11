#include <iostream>
using namespace std;
	int main(){

		int N;
		cin>>N;

		//3600 segundos equivale a 1hr (60 seg X 60 min)

		cout << N/3600 << ":" << (N%3600)/60 << ":" << N%60 <<endl;

	return 0;
	}