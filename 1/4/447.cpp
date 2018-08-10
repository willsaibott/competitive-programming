/**
 * Guilherme de Novais Bordignon - UVA Judge Online Solution ${filename}
 *
 * This is a template file for C++ Solutions of UVA Judge Online problems
**/

#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  int k = 0;
  int N;
  string output = "";
  string line;
  bool begin = true;

  getline(cin, line);
  N = stoi(line);

  while(getline(cin, line))
  {
    if (!line.compare("0") || k++ >= N) break;

    if (!begin) output += "\n", begin = false;

    output += line + "\n";
  }

  printf("%s", output.c_str());

  return(0);
}