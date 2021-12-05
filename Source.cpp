#include "Header.h"
int main() {
	 int n = 5;
	 int m = 5;
	 int** mas;
	 mas = new int* [n]; //выделение памяти под одномерный массив
	 //выделение памяти
	 for (int i = 0; i < n; i++) {
		 mas[i] = new int[m];
	 }
	 randm(mas, n, m);
	 darand(mas, n, m);
	 //cout << "kol polozit " << poloz(mas, n, m) << endl;
	 //cout << "kol chet " << chet(mas, n, m) << endl;
	
	 //cout << "arifmet" << ari(mas, n) << endl;
	 //chispro(mas, n, m, 2);
	 //darand(mas, n, m);
	 cout << "sred arifmet " <<aga(mas, n, m);
	 reverse_row(mas, n, m);
}