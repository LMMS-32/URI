#include <iostream>
using namespace std;
int main (){
	int A1, A2, A3;
		cin>> A1 >> A2 >> A3;
			if (A1 > A2 && A1 > A3){
				cout<<A2*1 + A3*2 + A1<<endl;
			}
			else if (A2 > A1 && A2 > A3){
				cout<<A1*1 + A3*1 + A2<<endl;
			}
			else {
				(A3 > A2 && A3 > A1);
				cout<<A2*1 + A1*2 + A3<<endl;
			}
	return 0;
}