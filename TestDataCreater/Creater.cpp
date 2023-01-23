#include <iostream>
#include <math.h>
#include <time.h>
#include <random>
using namespace std;
// #pragma GCC optimize(2)
// #pragma G++ optimize(2)
void gaosi(double x, double a, double b, double c) {
	double y, flag = -(x - b) * (x - b) / (2 * c * c);
	y = a * exp(flag);
	cout << x << " " << y << "\n";
}
int main() {
	default_random_engine e(time(0));
	uniform_real_distribution<double> u(0.1, 20.1); //可以调节范围，最小值不超过0，最大值不超过最大转动时间 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	double a, b, c;
	cin >> a >> b >> c;
	double mod = c * 5, index = b - 2.5 * c;
	for (int i = 0; i < 20; i++) {
		double swap = u(e);
		while (swap > mod) {
			swap -= mod;
		}
		swap += index;
		gaosi(swap, a, b, c);
	}
	return 0;
}
