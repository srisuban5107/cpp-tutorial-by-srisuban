#include <iostream>
using namespace std;

int main() {
    int mat[2][2] = {{1,2},{3,4}};
    int trans[2][2];

    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            trans[j][i] = mat[i][j];

    cout << "Transpose Matrix:" << endl;
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++)
            cout << trans[i][j] << " ";
        cout << endl;
    }

    return 0;
}
