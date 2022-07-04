#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double vector[] = {1., 2., 3., 4., 5.};
  double n = sizeof(vector) / sizeof(vector[0]);

  double ArithmeticMean;
  double HarmonicMean;
  double GeometricMean;
  double RootMeanSquare;

  double base, power;
  double numerator = 0.;
  double denominator = 0.;
  double product = 1.;
  double sum = 0.;
  int num;

  for(int i = 0; i < 5; i++ ){
    numerator += vector[i];
    denominator += 1 / vector[i];
    num = vector[i];
    product *= num;
    sum += num * num;
  }

  // Arithmetic Mean
  ArithmeticMean = numerator / n;

  // Harmonic Mean
  HarmonicMean = n / denominator;

  double nExponent = pow(base, power);
  double nRoot = pow(product, 1 / n);
  double root = sqrt(sum / n);

  // Geometric Mean
  GeometricMean = nRoot;

  // Root Mean Square
  RootMeanSquare = root;

  cout << "Arithmetic Mean = " << ArithmeticMean << endl;
  cout << "Harmonic Mean = " << HarmonicMean << endl;
  cout << "Geometric Mean = " << GeometricMean << endl;
  cout << "Root Mean Square = " << RootMeanSquare << endl;

  cout << endl;
  return 0;
} 