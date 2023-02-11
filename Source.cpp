#include<iostream>
#include<string>
using namespace std;
class ArrayConcatenate {
private:
    float* floatArr;
    int floatArrSize;
    char* charArr;
    int charArrSize;
public:
    ArrayConcatenate(float* floatArr, int floatArrSize, char* charArr, int charArrSize) : floatArr(floatArr), floatArrSize(floatArrSize), charArr(charArr), charArrSize(charArrSize) {}

    string concatenateArrays() {
        string concatenatedString = "";
        for (int i = 0; i < floatArrSize; i++) {
            concatenatedString += to_string(floatArr[i]) + " ";
        }
        for (int i = 0; i < charArrSize; i++) {
            concatenatedString += charArr[i];
        }
        return concatenatedString;
    }
};
int main() {
    float floatArr[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    int floatArrSize = sizeof(floatArr) / sizeof(floatArr[0]);
    char charArr[] = { 'a', 'b', 'c', 'd', 'e' };
    int charArrSize = sizeof(charArr) / sizeof(charArr[0]);

    ArrayConcatenate arrayConcatenate(floatArr, floatArrSize, charArr, charArrSize);

    string concatenatedString = arrayConcatenate.concatenateArrays();
    cout << concatenatedString << endl;

    return 0;
}
