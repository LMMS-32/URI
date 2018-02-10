#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	double A, B, C, media;

	cin >> A;
	cin>> B;
	cin>> C;

	media=(A*2.0 + B*3.0 + C*5.0)/(2+3+5);
	
		cout<<setiosflags(ios::fixed)<<setprecision(1)<<"MEDIA = "<< media<<endl;

	return 0;
}