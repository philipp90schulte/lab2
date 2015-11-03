/**
Author(s): Philipp Schulte, Philipp Wachenfeld
Date: 03.11.2015 


*/

#include <iostream>




using namespace std;

int main() {

// Constants:
int N = 100; // Number of x value iterations
double deltar = 0.01; // r iteration step size
double r = 3.9;
int l = 20; // start value of n 

// for loop to iterate r
for (r = 0; r<= 4; r+= deltar) {

  /* for loop to iterate the x values for one r value */
  double xbefore = 0.5;
  double xcurrent = 0;

  //cout << xbefore << endl;

  for (int i = 1; i<= N; i++) {
    xcurrent = xbefore * r * (1-xbefore);

    if (i >= l) {
      cout << r << "	" << xcurrent << endl;
    }
    xbefore = xcurrent;}

  } 

  return 0;
}
