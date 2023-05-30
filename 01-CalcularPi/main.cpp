#include<iostream>
#include<math.h>
#include <iomanip>

using namespace std;

int main() {
    double pi = 0 ;
    int i ;

    for(i = 0; i <= 1000000; i++){
        pi = (pow((-1), i)) / ((2 * i) + 1) + pi ;
    }
	
    cout << fixed << setprecision(6) ;
    
    cout<< (pi * 4) << endl ;

	return 0;
}
