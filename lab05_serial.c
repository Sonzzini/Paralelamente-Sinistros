#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>

double f(double x) {
		return exp(x);
}

double calculate_integral_serial(double a, double b, int n) {
		double h = (b - a) / n;
		double integral = 0.5 * (f(a) + f(b));

		for (int i = 1; i < n; i++) {
				double x = a + i * h;
				integral += f(x);
		}

		integral *= h;
		return integral;
}


int main() {
		double a = 0.0;
		double b = 1.0;
		int n = 1000000; // Number of trapezoids

		// Serial calculation
		double start_time_serial = omp_get_wtime();
		double integral_serial = calculate_integral_serial(a, b, n);
		double end_time_serial = omp_get_wtime();

		printf("Serial Integral: %f\n", integral_serial);
		printf("Serial Execution Time: %f seconds\n", end_time_serial - start_time_serial);

		return 0;
}
