#include<stdio.h>
#include<string.h>
#include<vector>
#include<string>

using namespace std;

int fib(int n) {
	if (n<=2)
		return 1;
	int l = fib(n-1);
	int r = fib(n-2);
	return  l + r;
}

int main(){

	int n;
	n = fib(40);
	printf("Fib = %d\n",n);
	int a = 0;
	printf("Done\n");
	system("pause");
	return 0;

}