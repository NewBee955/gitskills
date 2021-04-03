#include <iostream>
using namespace std;

int main(){
	int n = 4;
	int fib(int a);		//function declarition
	cout <<  fib(n) << endl;

	return 0;
}

int fib(int a){
	if(a == 0 || a == 1)	return a;
	return fib(a-1) + fib(a-2);
}
