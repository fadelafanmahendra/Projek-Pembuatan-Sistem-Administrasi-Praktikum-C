#include <iostream>
#include "PStructure.h"

using namespace std;

int main() {
    PracticeStructure *Root = Create(1, "DOSEN PENGAMPU");
    Root->LeftChild = Create(2, "ASISTEN PRAKTIKUM");
    Root->RightChild = Create(3, "KELAS");
    LevelOrder(Root);
    cout << endl;
}