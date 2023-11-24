#include <iostream>
#include <chrono>

int main()
{
  /* 
   * 1. Benchmark Your System
   * 2. Implement Test Kernels
   * 3. Measure Kernel Performance
   * 4. Plot the Results
   */
  const int size = 100000;
  float *a = new float[size];
  float *b = new float[size];
  float *c = new float[size];

  for (int i = 0; i < size; i++) {
    a[i] = static_cast<float>(i);
    b[i] = static_cast<float>(i);
  }

  auto start = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < size; i++) { c[i] = a[i] + b[i]; }

  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> tdiff = end - start;
  std::cout << "Runtime: " << tdiff.count() << "s" << std::endl;

  delete[] a;
  delete[] b;
  delete[] c;
        
	return 0;
}
