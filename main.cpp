#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int N = A + B + C;
    string S;
    cin >> S;

    cout << to_string(N) + " " + S << std::endl;
    return 0;
}

