#include <iostream>
using namespace std;
void decToHexa(int n)
{
    char hexaDeciNum[100];
    int i = 0;
    while (n != 0) {
        int rem = 0;
        rem = n % 16;
        if (rem < 10) {
            hexaDeciNum[i] = rem + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = rem + 55;
            i++;
        }
        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}
int main()
{
    int n;
    cin>>n;
    decToHexa(n);
    return 0;
}