#include<stdio.h>
#include<iostream>
#include<math.h>

int main() {
        int x = -8, y = 4,z = 1;
        double t = 1 + x + (pow(x,2) / 2) - (pow(x,3) / 3), u = exp(x * z) + (sqrt(y / x));
        std::cout << "t = " << t << std::endl;
        std::cout << "u = " << u << std::endl << std::endl;

        std::cout << "x = "; std::cin >> x;
        std::cout << "y = "; std::cin >> y;
        std::cout << "z = "; std::cin >> z;
        t = t = 1 + x + (pow(x, 2) / 2) - (pow(x, 3) / 3); u = exp(x * z) + (sqrt(y / x));
        std::cout << "t = " << t << std::endl;
        std::cout << "u = " << u << std::endl<<std::endl;

        printf("x = "); scanf_s("%d", &x);
        printf("y = "); scanf_s("%d", &y);
        printf("z = "); scanf_s("%d", &z);
        t = t = 1 + x + (pow(x, 2) / 2) - (pow(x, 3) / 3), u = exp(x * z) + (sqrt(y / x));
        printf("t = %f \n", t);
        printf("u = %f \n", u);

        return 0;
}