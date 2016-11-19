#include <iostream>
using namespace std;

int main() {
    int n, q;
    
    cin >> n;
    cin >> q;
    
    int *array[n];

    int i;

    for (i = 0; i < n; i++) {
        int size;
        cin >> size;
        //cout << size << "\n";
        
        
        int j;
        int *array1 = new int[size];
        
        for  (j = 0; j < size; j++) {
             cin >> array1[j];
        }
        
        /*for (j = 0; j < size; j++) {
            cout << array1[j] << " ";
        }*/
        
        array[i] = array1;
        
        //cout << "\n";
    }

    for (i = 0; i < q; i++) {
        int q, val;
        cin >> q;
        cin >> val;
        cout << array[q][val] << "\n";
    }

	return 0;
}
