#include <iostream>
using namespace std;

int main(){
    
    int a, b, x, i;
    
    cin >> x;
    
    for(i = 1; i <= x; i++)
    {
        cin >> a >> b;
        
        cout << "Case #" << i << ": " << a + b << endl;
    }
    return 0;
}
