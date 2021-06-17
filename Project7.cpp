#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Function.h"

#define answer if(0<=a && a<b)\
{\
cout << "true";\
}\
else\
{\
cout << "false";\
}
#define Array_Size 5

using namespace std;

#pragma pack(push, 1)
struct Worker {
	int ID;
	int Salary;
	string Name; 
	int Age;
};
 #pragma pack(pop)

int main()
{
    cout << "WorkItem 1 and 5" << endl;
    const unsigned int SIZE=13;
    float arr1[SIZE];
	MyFunc::PrintArrayFloat(MyFunc::InitArrayFloat(arr1, SIZE), SIZE);
	MyFunc::CounterElementsArr(arr1, SIZE);

	cout << "WorkItem 2" << endl;
	int a, b;
	cout << "Enter two integer" << endl;
	cin >> a;
	cin >> b;
	answer
	cout << endl;

	cout << "WorkItem 3" << endl;
	int arr2[Array_Size];
	for (size_t i = 0; i < Array_Size; i++)
	{	
		cout << "enter i element array ";
		cin >> arr2[i];
	}
	int n = sizeof(arr2) / sizeof(arr2[0]);
	bubbleSort(arr2, n);
	PrintArr2(arr2, Array_Size);

	cout << "WorkItem 4" << endl;
	cout << sizeof(Worker);
	
	Worker * pSot1 = new Worker;
	pSot1->Name = "Aleks";
	pSot1->ID = 123123123;
	pSot1->Age = 29;
	pSot1->Salary = 290'000;
	cout << sizeof(Worker) << endl; 
	cout << pSot1->ID <<" " << pSot1->Salary << " " << pSot1->Name << " " << pSot1->Age << " ";
	cout << endl;
	ofstream fout("Struct.txt");
	fout << pSot1->ID << " " << pSot1->Salary << " " << pSot1->Name << " " << pSot1->Age << " ";
	fout.close();
	delete pSot1;

	return 0;
}
/*
Сделайте для нее побайтовое выравнивание с помощью
директивы pragma pack. Выделите динамически переменную
этого типа. Инициализируйте ее. Выведите ее на экран и ее
размер с помощью sizeof. Сохраните эту структуру в текстовый
файл.
*/