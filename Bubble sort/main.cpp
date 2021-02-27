#include <iostream>
#include <cstdlib>
using namespace std;

int * bubbleSort(int * vettore, int length) {
    for (int i = 0; i < (length-1); i++) {
        for (int j = i+1; j < (length-1); j++) {
            if (vettore[i] > vettore[j]) {
                int temp = vettore[i];
                vettore[i] = vettore[j];
                vettore[j] = temp;
            }
        }
    }
    return vettore;
}

int main()
{
    int length = 7;
    int items[length] = {23, 89, 1, 54, 3, 2, 0};
    int * sortedItems = bubbleSort(items, length);
    for (int i = 0; i < length; i++) {
        cout << sortedItems[i] << endl;
    }


}
