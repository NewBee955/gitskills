#include <iostream>
using namespace std;

int main(){
	cout << "input the num: " << endl;
	if(n < 0){		//check the incorrect input
		cout << "error!" << endl;
		return 0;
	}
	int n=0; 
	cin >> n;
	int fib(int a);		//function declarition
	cout <<  fib(n) << endl;

	return 0;
}


int fib(int a){			//calculate fibonacci outcome of a
	if(a == 0 || a == 1)	return a;
	return fib(a-1) + fib(a-2);
}
