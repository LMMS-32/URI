#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
	int main(){

		int maiorab, a, b, c;
			cin>>a;
			cin>>b;
			cin>>c;

			maiorab = (a + b + abs(a-b)) / 2;
			maiorab = (maiorab + c + abs(maiorab-c)) / 2;

			cout<< maiorab << " eh o maior"<<endl;



	return 0;
	}