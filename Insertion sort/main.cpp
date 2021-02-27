#include <iostream>
#include <cstdlib>
using namespace std;

int * insertionSort(int * vettore, int length) {
    for (int i = 1; i < (length); i++) {
        int value = vettore[i];
        int index = i;
        while (index > 0 && vettore[index-1] > value) {
            vettore[index] = vettore[index-1];
            index = index-1;
        }
        vettore[index] = value;
    }
    return vettore;
}

int main()
{
    int length = 7;
    int items[length] = {23, 89, 34, 92, 2, 13, 1};
    int * sortedItems = insertionSort(items, length);
    for (int i = 0; i < length; i++) {
        cout << sortedItems[i] << endl;
    }
}
