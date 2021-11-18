#include <iostream>
int main()
{
    using std::cout, std::cin, std::endl;
    int longNum, yards;
    cout << "多少long？" << endl;
    cin >> longNum;
    yards = longNum * 220;
    cout << longNum << " long 等于 " << yards << "码。" << endl;
    return 0;
}