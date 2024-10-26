#include <iostream>
using namespace std;
int main(){
 int number;
cout<<"Enter a number: ";
    cin >> number;
    cout<<"you entered "<<number<<endl;
    int sum = 0;
    for (int i = 1; i <= number; i++) {
        cout << i<<endl;
        sum += i;

    }
	
	cout <<"sum of all the number is:"<< sum << endl;
return 0;
}
