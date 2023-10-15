#include <iostream>
using namespace std;
int main(){
    int num;
    int A, B;
    cin >> num;
    
    for(int i = 1; i <= num; i ++)
    {
        cin >> A >> B;
        cout << A + B << endl;
    }
    return 0;
}
