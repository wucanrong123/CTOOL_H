#ifndef CTOOL_H
#define CTOOL_H
#include <iostream>
#include <math.h>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdio.h>
#include <time.h>
#include <ctime>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <windows.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define ld long double
#define F1(i, l, r) for (int i = l; i <= r; i++)
#define F2(i, r, l) for (int i = r; i >= l; i--)
#define W while
#define mp make_pair
#define pq1<int> priority_queue<int>
#define pq2<int> priority_queue< int, vector<int>, greater<int> >
#define pq1<ll> priority_queue<long long>
#define pq2<ll> priority_queue< long long, vector<long long>, greater<long long> >
#define pq1<ull> priority_queue<unsigned long long>
#define pq2<ull> priority_queue< unsigned long long, vector<unsigned long long>, greater<unsigned long long> >
#define pq1<uint> priority_queue<unsigned int>
#define pq2<uint> priority_queue< unsigned int, vector<unsigned int>, greater<unsigned int> >
#define pq1<double> priority_queue<double>
#define pq2<double> priority_queue< double, vector<double>, greater<double> >
#define pq1<ld> priority_queue<long double>
#define pq2<ld> priority_queue< long double, vector<long double>, greater<long double> >
#define pq1<float> priority_queue<float>
#define pq2<float> priority_queue< float, vector<float>, greater<float> >
#define CLS system("cls")
#define PAUSE system("pause")
#define Clear(Array) memset(Array, 0, sizeof(Array))
int max(int A, int B, int C) {
	return max(A, max(B, C));
}
double max(double A, double B, double C) {
	return max(A, max(B, C));
}
float max(float A, float B, float C) {
	return max(A, max(B, C));
}
ll max(ll A, ll B, ll C) {
	return max(A, max(B, C));
}
ull max(ull A, ull B, ull C) {
	return max(A, max(B, C));
}
uint max(uint A, uint B, uint C) {
	return max(A, max(B, C));
}
ld max(ld A, ld B, ld C) {
	return max(A, max(B, C));
}
int min(int A, int B, int C) {
	return min(A, min(B, C));
}
double min(double A, double B, double C) {
	return min(A, min(B, C));
}
float min(float A, float B, float C) {
	return min(A, min(B, C));
}
ll min(ll A, ll B, ll C) {
	return min(A, min(B, C));
}
ull min(ull A, ull B, ull C) {
	return max(A, min(B, C));
}
uint min(uint A, uint B, uint C) {
	return min(A, min(B, C));
}
ld min(ld A, ld B, ld C) {
	return min(A, min(B, C));
}
#endif
