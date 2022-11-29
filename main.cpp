// =================================================================
//
// File: main.cpp
// Author: Ricardo Navarro Gómez - A01708825
//		   Alain Vicencio Arizabalo - A01620758
//		   Fernando Josue Matute Soto - A00833375
// Date:
//
// =================================================================
#include <iostream>
#include <map>

using namespace std;

int main(int argc, char* argv[]) {
  int m, n, valor; 
  string palabra, p;
  map<string, int>diccionario; 
  cin >> m; 
  cin >> n; 

  // Dictionary creation.
  for(int i  = 0; i < m; i++) {
    cin >> palabra; 
    cin >> valor;
    diccionario.insert(pair<string, int>(palabra, valor));  
  }

  // Word reading and salary calculation. 
  for(int i = 0; i < n; i++) {
    int salario = 0;
    while(true) {
      cin >> p; 
      if (p == ".") {
        break;
      }
      salario += diccionario[p]; 
    } cout << salario << endl;
	}
	return 0;
}
