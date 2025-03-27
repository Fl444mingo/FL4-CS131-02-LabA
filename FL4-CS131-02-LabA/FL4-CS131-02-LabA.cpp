#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Grade Checker\nInput your grade percentage: ";
    cin >> num;
    // If else method
    if (num >= 90)
        cout << "\nYou have an A\n\n";
    else if (num >= 80)
        cout << "\nYou have a B\n\n";
    else if (num >= 70)
        cout << "\nYou have a C\n\n";
    else if (num >= 60)
        cout << "\nYou have a D\n\n";
    else if (num >= 0)
        cout << "\nYou have an F\n\n";
    else
        cout << "\nYour teacher must hate you. Super F\n";
    // Smarter, math-based method (incomplete)
    // lGrade works for A-D, but skipping E and not going beyond A requires a lot more math
    char lGrade = (num / -10) + 74;
    // sign is missing more math to determine if space, minus, or plus is printed depending on the remainder
    char sign = (num % 10);
    cout << "\n" << "Grade: " << sign << lGrade << "\n\n";
    system("pause");
    return 0;
}