//Hi
//I am Angel Phang Ting Ting
//done
#include <iostream>
#include <string>
using namespace std;

int sum (int, int);  // function prototype
                     // describes the function (RT, Name, parameters)
int main(){
    int x = 5, y = 1;

    int total;
    total = sum(x,y);
    
    cout << total << endl;
    return 0;
}

int sum (int a, int y)  // value of main(x)--->sum(a)
                        // main(y)--->sum(y)
                        // at the end the retrun statement
                        // returns a value for main(total)
{
    return a+y;
}

