// Simulating a Normal Distribution and plotting in C++

float normal_func (float mu, float sigma)
  {
    float result;
    result = 2*mu*sigma;
    return result;
  };

int main ()
{
  float final;

  cout << "Enter a mu: " << endl;
  cin >> mu;

  cout << "Enter a sigma: " << endl;
  cin >> sigma;

  final = normal_func(mu, sigma);

  cout << "Result is: " << final << endl;

  return 0;

}
