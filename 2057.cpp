#include <iostream>
using namespace std;
int main (){
	int S, T, F;
		cin>> S >> T >> F;
			if (S + T >=24 ){
				cout<<S+T-24+F<<endl;
			}
			 else if (S==0)
		    {
		       cout<<24+T+F<<endl;
		    }
		    else if (S==24)
		    {
		       cout<<0+T+F<<endl;
		    }
			else {
				cout<<S+T+F<<endl;
			}
	return 0;
}