#include <stdio.h>

int main() {

  // Declare variables
  const int k = 1;
  int q1 = 171, q2 = -11, r = 1;

  // Print description
  printf("This program uses Coulomb's Law to calculate the electrostatic force (N) between two charged\nparticles, q1 and q2, which are r distance apart.\n\n");
  printf("+N entails repulsion whereas -N entails attraction.\n");
  printf("e = 1.602×10^−19 C. (The program can't store a value with that precision.)\n");
  printf("k, Coulomb's Constant, is a proportionality constant which describes the unit of charge.\n\n");

  // Print variables
  printf("q1 = %d e.\n", q1);
  printf("q2 = %d e.\n", q2);
  printf("r = %d m.\n\n", r);

  // Calculate and print result
  printf("F = %.2f N.", k * ((float) q1 * q2 / (r * r)));

  return 0;
}
