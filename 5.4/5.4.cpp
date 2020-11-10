// Лабораторна робота № 5.4
#include <iostream>
#include <cmath>
using namespace std;
double S0(const int K)
{
	double s = 1;
	for (int i = K; i <= 10; i++)
		s *= (i + 1. / (i * i)) /sqrt(1+exp(1./i));
	return s;
}
double S1(const int K, const int i)
{
	if (i > 10)
		return 1;
	else
		return (i + 1. /( i * i)) / sqrt(1 + exp(1. / i)) * S1(K, i + 1);
}
double S2(const int K, const int i)
{
	if (i < K)
		return 1;
	else
		return (i + 1. / (i * i)) / sqrt(1 + exp(1. / i)) * S2(K, i - 1);
}
double S3(const int K, const int i, double t)
{
	t = t * (i + 1. / (i * i)) / sqrt(1 + exp(1. / i));
	if (i >= 10)
		return t;
	else
		return S3(K, i + 1, t);
}
double S4(const int K, const int i, double t)
{
	t = t * (i + 1. / (i * i)) / sqrt(1 + exp(1. / i));
	if (i <= K)
		return t;
	else
		return S4(K, i - 1, t);
}

int main()
{
	int K;
	cout << "K = "; cin >> K;
	cout << "(iter) S0 = " << S0(K) << endl;
	cout << "(rec up ++) S1 = " << S1(K, K) << endl;
	cout << "(rec up --) S2 = " << S2(K, 10) << endl;
	cout << "(rec down ++) S3 = " << S3(K, K, 1) << endl;
	cout << "(rec down --) S4 = " << S4(K, 10, 1) << endl;
	return 0;
}
