#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
void randm(int** mas, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 21 - 10;
		}
	}
}

void darand(int** mas, int n, int m) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}

int poloz(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] > 0) k++;


		}

	}
	return k;
}

int chet(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] % 2 == 0) k++;


		}

	}
	return k;
}

double ari(int** mas, int n) {
	int k;
	double g = 0;
	cin >> k;
	for (int p = 0; p < n; p++) {
		cout << mas[k][p] << ' ';
		g += mas[k][p];
	}
	g = g / n;
	return g;
}

void chispro(int** mas, int n, int m, int b) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] *= b;
		}
	}
}

double aga(int** mas, int n, int m){
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += mas[i][i];
	}
	return static_cast<double>(sum) / n;
}

int aaga(int** mas, int n, int m) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += mas[i][i];
	}
	return s;
}

void reverse_row(int** mas, int k, int m) {
	int s = m / 2;
	for (int j = 0; j<s; j++) {
		swap(mas[k][j], mas [k][m-1-j])
	}
}