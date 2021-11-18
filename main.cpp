// Simulating a Normal Distribution and plotting in C++

#include <iostream>
#include <cmath>

using namespace std;

float normal_func (float mu, float sigma)
  {
    double pi = 3.14;
    float result;
    result = 1/sigma * 1/sqrt(2*pi) * exp(2*mu);
    return result;
  };

int main ()
{
  float mu , sigma;

  float final;

  cout << "Enter a mu: ";
  cin >> mu;

  cout << "\nEnter a sigma: ";
  cin >> sigma;

  final = normal_func(mu, sigma);

  cout << "\nResult is: " << final << endl;

  return 0;

}
