#include <iostream>
#include <cstdlib>
using namespace std;

int * selectionSort(int * vettore, int length) {
    for (int i = 0; i < (length -1); i++) {
        int posmin = i;
        for (int j = i+1; j < (length-1); j++) {
            if (vettore[j] < vettore[posmin]) {
                posmin = j;
            }
        }
        if (posmin != i) {
            int temp = vettore[i];
            vettore[i] = vettore[posmin];
            vettore[posmin] = temp;
        }
    }
    return vettore;
}

int main()
{
    int length = 7;
    int items[length] = {23, 4, 0, 2, 28, 1, 34};
    int * newItems = selectionSort(items, length);
    for (int i = 0; i < length; i++) {
        cout << newItems[i] << endl;
    }

}
