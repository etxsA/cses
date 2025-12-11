	#include <fstream>
using namespace std;

int main() {
	ifstream fin("problemname.in");
	ofstream fout("problemname.out");

	int a;
	int b;
	int c;
	fin >> a >> b >> c;
	fout << "The sum of these three numbers is " << a + b + c << "\n";
}