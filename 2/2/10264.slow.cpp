/**
 * Guilherme de Novais Bordignon - UVA Judge Online Solution
 *
 * 10264 - The Most Potent Corner
**/

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef unsigned char byte;
typedef unsigned long long ull;
typedef long long ll;

inline bool isPowerOfTwo(uint value)
{
  return (!(value & (value - 1))) && value;
}

int main()
{
  string output = "";
  string line;

  output.reserve(500000);

  while(!cin.eof())
  {
    uint n;
    cin >> n;

    if (cin.fail()) break;

    uint size = 1u << n;
    uint sumPairs = 0;
    vector<uint> v(size), sum(size);

    for (uint ii = 0; ii < size; ii++)
    {
      cin >> v[ii];
    }

    for (uint ii = 0; ii < size; ii++)
    {
      for (uint jj = 0; jj < size; jj++)
      {
        sum[ii] += isPowerOfTwo(ii ^ jj) * (v[jj]);
      }
    }

    for (uint ii = 0; ii < size; ii++)
    {
      for (uint jj = 0; jj < size; jj++)
      {
        if (isPowerOfTwo(ii ^ jj))
        {
          sumPairs = max(sumPairs, sum[ii] + sum[jj]);
        }
      }
    }

    output += to_string(sumPairs) + "\n";
  }

  printf("%s", output.c_str());

  return(0);
}