#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


void test_01(){
    int val = 1023;
    int &ref = val;
    ref += 2;
    cout << "ref: " << ref << endl << "val: "<< val << endl;
}

int main(){
    test_01();
	return 0;
}
