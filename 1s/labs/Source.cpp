#include<math.h>
#include<stdio.h>
#include <iostream>

int main() {
	int x= 1, y = 2, z = 4;
	double t = 1 + x + (pow(x, 2) / 2) - (pow(x, 3) / 3);
	double u = exp(z * x) + (sqrt(y / x));
	std::cout << "t=" << t << std::endl;
	std::cout << "u=" << u << std::endl;

	std::cout << "x="; std::cin >> x;
	std::cout << "y="; std::cin >> y;
	std::cout << "z="; std::cin >> z;
	t = 1 + x + (pow(x, 2) / 2) - (pow(x, 3) / 3);
    u = exp(z * x) + (sqrt(y / x));
	std::cout << "t=" << t << std::endl;
	std::cout << "u=" << u << std::endl;

	printf("x=");
	scanf_s("%d", &x);
	printf("y=");
	scanf_s("%d", &y);
	printf("z=");
	scanf_s("%d", &z);
	t = 1 + x + (pow(x, 2) / 2) - (pow(x, 3) / 3);
	u = exp(z * x) + sqrt(y / x);
	printf_s("t=%lf", t);
	printf_s("u= %lf", u);
}