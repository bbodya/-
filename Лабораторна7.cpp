#include<iostream>
#include<ctime>
using namespace std;
void gener_mass(int*, int);
void output(int*, int);


int main() {

	int n;
	int a[10];
	int F[10];
	int G[10];
	cout << "input size of array(1-10):" << endl; cin >> n;
	cout << "Array F :" << endl; gener_mass(F, n);
	cout << "Array :" << endl; gener_mass(G, n);
	
	return 0;
}

void gener_mass(int* a, int n) {
	

	srand(time(NULL));

	for (int i=0; i < n; i++) {
		a[i] = (rand() % 1000) - 500;
	}

	output(a, n);

	
}

void output(int* a, int n)
{
	for (int i=0; i < n; i++) {
		cout << a[i] << " ";
	}

	cout << endl;
}