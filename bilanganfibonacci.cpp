#include <iostream>
using namespace std;

int main()
{
    int n, f1 = 0, f2 = 1, selanjutnya = 0;

    cout << "Masukan Batas Deretan Bilangan Fibonacci ke :  ";
    cin>> n;
    	cout<< "\n";
    cout << "Deret Bilangan Fibonacci: ";

	
    for (int a = 1; a <= n; ++a)
    {
       
        if(a == 1)
        {
            cout << " " << f1 <<" ";
            continue;
        }
        if(a == 2)
        {
            cout << f2 << " ";
            continue;
        }
        selanjutnya = f1 + f2;
        f1 = f2;
        f2 = selanjutnya;
        
        cout << selanjutnya << " ";
    }
    return 0;
}
