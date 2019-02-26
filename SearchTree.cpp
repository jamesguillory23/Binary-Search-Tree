#include <iostream>
#include "Binary.h"

using namespace std;



//Int main
int main()
{
	BSearchTree<int> TestTree;
	TestTree.Insert(10);
	TestTree.Insert(15);
	TestTree.Insert(17);
	TestTree.Insert(13);
	TestTree.Insert(5);
	TestTree.Insert(7);
	TestTree.Insert(3);

	cout << "Node containing 10 found at " << TestTree.Find(10) << endl;
	cout << "Node containing 15 found at " << TestTree.Find(15) << endl;
	cout << "Node containing 17 found at " << TestTree.Find(17) << endl;
	cout << "Node containing 13 found at " << TestTree.Find(13) << endl;
	cout << "Node containing 05 found at " << TestTree.Find(5) << endl;
	cout << "Node containing 07 found at " << TestTree.Find(7) << endl;
	cout << "Node containing 03 found at " << TestTree.Find(3) << endl;

	cout << "\nMaximum value: " << TestTree.Maximum() << endl;
	system("pause");
	return 0;
}
