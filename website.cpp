#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int y=-n; y<=n; y++) {
    	for (int x=-n; x<=n; x++) {
    	    if (abs(x) == abs(y)) cout << "* ";
    	    else cout << ". ";
    			}
    	cout << endl;
    }

    return 0;
}


