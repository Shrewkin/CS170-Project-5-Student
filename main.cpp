#include "List.h"
#include <iostream>

void TestPushFront(void)
{
	std::cout << "TestPushFront..." << std::endl;

	int size = 5;
	CS175::List list;
	for (int i = 1; i <= size; i++)
	{
		list.push_front(i);
	}

	std::cout << list;
	std::cout << "Items in the list: " << list.list_size() << std::endl;
	std::cout << std::endl;
}

void TestPushBack(void)
{
	std::cout << "TestPushBack..." << std::endl;

	int size = 5;
	CS175::List list;
	for (int i = 1; i <= size; i++)
	{
		list.push_back(i);
	}

	std::cout << list;
	std::cout << "Items in the list: " << list.list_size() << std::endl;
	std::cout << std::endl;
}

void TestPushFrontBack(void)
{
	std::cout << "TestPushFrontBack..." << std::endl;

	int size = 10;
	CS175::List list;
	for (int i = 1; i <= size; i++)
	{
		list.push_front(i);
		list.push_back(i * 5);
	}

	std::cout << list;
	std::cout << "Items in the list: " << list.list_size() << std::endl;
	std::cout << std::endl;
}

void TestPopFront(void)
{
	std::cout << "TestPopFront..." << std::endl;

	int size = 5;
	CS175::List list;
	for (int i = 1; i <= size; i++)
	{
		list.push_front(i);
	}

	std::cout << list;
	while (!list.empty())
	{
		int item = list.pop_front();
		std::cout << "First item was: " << item << std::endl;
		std::cout << "New list:";
		std::cout << list;
		std::cout << "Items in the list: " << list.list_size() << std::endl;
	}
	std::cout << std::endl;
}

void TestPopBack(void)
{
	std::cout << "TestPopBack..." << std::endl;

	int size = 5;
	CS175::List list;
	for (int i = 1; i <= size; i++)
	{
		list.push_front(i);
	}

	std::cout << list;
	while (!list.empty())
	{
		int item = list.pop_back();
		std::cout << "Last item was: " << item << std::endl;
		std::cout << "New list:";
		std::cout << list;
		std::cout << "Items in the list: " << list.list_size() << std::endl;
	}
	std::cout << std::endl;
}

void TestArray1(void)
{
	std::cout << "TestArray1..." << std::endl;

	int array[] = { 4, 7, 12, 5, 9, 23, 7, 11, 15, 2 };
	int size = static_cast<int>(sizeof(array) / sizeof(*array));

	// Construct from array
	CS175::List list(array, size);

	std::cout << list;
	std::cout << "Items in the list: " << list.list_size() << std::endl;
	std::cout << std::endl;
}

void TestArray2(void)
{
	std::cout << "TestArray2..." << std::endl;

	const int array[] = { 4, 7, 12, 5, 9, 23, 7, 11, 15, 2 };
	int size = static_cast<int>(sizeof(array) / sizeof(*array));

	// Construct from array
	CS175::List list(array, size);

	std::cout << list;
	std::cout << "Items in the list: " << list.list_size() << std::endl;
	std::cout << std::endl;
}

void TestCopyConstructor1(void)
{
	std::cout << "TestCopyConstructor1..." << std::endl;
	int size = 10;
	CS175::List list1;
	for (int i = 1; i <= size; i++)
	{
		list1.push_front(i * 3);
	}

	std::cout << "List 1: ";
	std::cout << list1;

	CS175::List list2(list1);
	std::cout << "List 2: ";
	std::cout << list2;

	std::cout << std::endl;
}

void TestCopyConstructor2(void)
{
	std::cout << "TestCopyConstructor2..." << std::endl;
	int size = 10;
	CS175::List list1;
	for (int i = 1; i <= size; i++)
		list1.push_front(i * 3);

	std::cout << "List 1: ";
	std::cout << list1;

	const CS175::List list2(list1);
	std::cout << "List 2: ";
	std::cout << list2;

	if (list2.empty())
	{
		std::cout << "List 2 is empty\n";
	}
	else
	{
		std::cout << "List 2 is not empty\n";
	}

	std::cout << "Items in List2: ";
	std::cout << list2.list_size();
	std::cout << std::endl;

	std::cout << std::endl;
}

void TestRemoveNode(void)
{
	std::cout << "TestRemoveNode..." << std::endl;

	int size = 5;
	CS175::List list1;
	for (int i = 1; i <= size; i++)
	{
		list1.push_front(i);
	}

	std::cout << "Original List:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.remove_node_by_value(3);
	std::cout << "After removing value 3:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.remove_node_by_value(1);
	std::cout << "After removing value 1:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.remove_node_by_value(5);
	std::cout << "After removing value 5:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.remove_node_by_value(10);
	std::cout << "After removing value 10:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.remove_node_by_value(2);
	std::cout << "After removing value 2:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.remove_node_by_value(4);
	std::cout << "After removing value 4:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.remove_node_by_value(5);
	std::cout << "After remove attempt in empty list:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	std::cout << "Items in the list: " << list1.list_size() << std::endl;
	std::cout << std::endl;
}

void TestInsertNodeAt(void)
{
	std::cout << "TestInsertNodeAt..." << std::endl;

	CS175::List list1;

	list1.insert_node_at(0, 4);
	std::cout << "After inserting value 4 at location 0:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.insert_node_at(0, 3);
	std::cout << "After inserting value 3 at location 0:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.insert_node_at(10, 5);
	std::cout << "After inserting value 5 at location 10:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.insert_node_at(3, 6);
	std::cout << "After inserting value 6 at location 3:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.insert_node_at(-5, 1);
	std::cout << "After inserting value 1 at location -5:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	list1.insert_node_at(1, 2);
	std::cout << "After inserting value 2 at location 1:" << std::endl;
	std::cout << "List: ";
	std::cout << list1;

	std::cout << "Items in the list: " << list1.list_size() << std::endl;
	std::cout << std::endl;
}


void TestAssignment1()
{
	std::cout << "TestAssignment1..." << std::endl;
	int size = 10;
	CS175::List list1, list2;
	for (int i = 1; i <= size; i++)
		list1.push_front(i * 2);

	std::cout << "Before assignment:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;

	list2 = list1;
	std::cout << "After assignment:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;

	std::cout << std::endl;
}

void TestAssignment2()
{
	std::cout << "TestAssignment2..." << std::endl;
	int size = 10;
	CS175::List list1, list2, list3;
	for (int i = 1; i <= size; i++)
		list1.push_front(i * 2);

	std::cout << "Before assignment:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;
	std::cout << "List 3: ";
	std::cout << list3;

	list3 = list2 = list1;
	std::cout << "After assignment:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;
	std::cout << "List 3: ";
	std::cout << list3;

	std::cout << std::endl;
}

void TestAddition1()
{
	std::cout << "TestAddition1..." << std::endl;

	int size = 5;
	CS175::List list1, list2;
	for (int i = 1; i <= size; i++)
	{
		list1.push_front(i);
		list2.push_front(i * 10);
	}

	std::cout << "Before addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;

	CS175::List list3;
	list3 = list1 + list2;
	std::cout << "After addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;
	std::cout << "List 3: ";
	std::cout << list3;
	std::cout << std::endl;
}

void TestAddition2()
{
	std::cout << "TestAddition2..." << std::endl;

	int size = 5;
	CS175::List list1, list2;
	for (int i = 1; i <= size; i++)
	{
		list1.push_front(i);
		list2.push_front(i * 10);
	}

	std::cout << "Before addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;

	const CS175::List list3(list1 + list2);
	std::cout << "List 3: ";
	std::cout << list3;

	CS175::List list4;
	list4 = list1 + list2 + list3;
	std::cout << "After addition:" << std::endl;
	std::cout << "List 4: ";
	std::cout << list4;
	std::cout << "Items in the list: " << list4.list_size() << std::endl;
	std::cout << std::endl;
}

void TestAddAssign1()
{
	std::cout << "TestAddAssign1..." << std::endl;

	int size = 5;
	CS175::List list1, list2;
	for (int i = 1; i <= size; i++)
	{
		list1.push_front(i);
		list2.push_front(i * 10);
	}

	std::cout << "Before addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;

	list1 += list2;
	std::cout << "After addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;
	std::cout << "Items in the list: " << list1.list_size() << std::endl;
	std::cout << std::endl;
}

void TestAddAssign2()
{
	std::cout << "TestAddAssign2..." << std::endl;

	int size = 5;
	CS175::List list1, list2;
	for (int i = 1; i <= size; i++)
		list1.push_front(i);

	std::cout << "Before addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;

	list1 += list2;
	std::cout << "After addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;
	std::cout << "Items in the list: " << list1.list_size() << std::endl;
	std::cout << std::endl;
}

void TestAddAssign3()
{
	std::cout << "TestAddAssign3..." << std::endl;

	int size = 5;
	CS175::List list1, list2;
	for (int i = 1; i <= size; i++)
		list1.push_front(i);

	std::cout << "Before addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;

	list2 += list1;
	std::cout << "After addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;
	std::cout << "Items in the list: " << list1.list_size() << std::endl;
	std::cout << std::endl;
}

void TestAddAssign4()
{
	std::cout << "TestAddAssign4..." << std::endl;

	int size = 5;
	CS175::List list1, list2, list3;
	for (int i = 1; i <= size; i++)
	{
		list1.push_front(i);
		list2.push_front(i * 2);
		list3.push_front(i * 5);
	}

	std::cout << "Before addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;
	std::cout << "List 3: ";
	std::cout << list3;

	list1 += list2 += list3;
	std::cout << "After addition:" << std::endl;
	std::cout << "List 1: ";
	std::cout << list1;
	std::cout << "List 2: ";
	std::cout << list2;
	std::cout << "List 3: ";
	std::cout << list3;
	std::cout << "Items in the list: " << list1.list_size() << std::endl;
	std::cout << std::endl;
}

void RunTest(void(*pf)(), const char * function_name)
{
	try {
		pf();
	}
	catch (...) {
		std::cout << "***" << function_name;
		std::cout << "revealed something bad in the List class" << std::endl;
	}

	std::cout << "============================================\n";
	std::cout << "Total number of Lists created: ";
	std::cout << CS175::List::created_list_count();
	std::cout << std::endl;
	std::cout << "============================================\n";
	std::cout << std::endl;

	std::cout << "============================================\n";
	std::cout << "Total number of nodes alive: ";
	std::cout << CS175::List::alive_node_count();
	std::cout << std::endl;
	std::cout << "============================================\n";
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	struct Test
	{
		void(*pf)();
		const char* name;
	};
	
	Test tests[] =
	{
		{ TestPushFront, "TestPushFront" },
		{ TestPushBack, "TestPushBack" },
		{ TestPushFrontBack, "TestPushFrontBack" },
		{ TestPopFront, "TestPopFront" },
		{ TestPopBack, "TestPopBack" },
		{ TestCopyConstructor1, "TestCopyConstructor1" },
		{ TestCopyConstructor2, "TestCopyConstructor2" },
		{ TestArray1, "TestArray1" },
		{ TestArray2, "TestArray2" },
		{ TestAssignment1, "TestAssignment1" },
		{ TestAssignment2, "TestAssignment2" },
		{ TestAddition1, "TestAddition1" },
		{ TestAddition2, "TestAddition2" },
		{ TestAddAssign1, "TestAddAssign1" },
		{ TestAddAssign2, "TestAddAssign2" },
		{ TestAddAssign3, "TestAddAssign3" },
		{ TestAddAssign4, "TestAddAssign4" },
		{ TestRemoveNode, "TestRemoveNode" },
		{ TestInsertNodeAt, "TestInsertNodeAt" },
	};
	
	// Determine which test to run
	int testNum = 0;
	if(argc > 0)
		testNum = atoi(argv[argc - 1]);
	
	// Run all tests
	if(testNum == 0)
	{
		unsigned numTests = sizeof(tests) / sizeof(Test);
		for(unsigned i = 0; i < numTests; ++i)
			RunTest(tests[i].pf, tests[i].name);
	}
	// Run specific test
	else if(testNum > 0)
	{
		RunTest(tests[testNum - 1].pf, tests[testNum - 1].name);
	}
	// Do nothing if test number is negative

	return 0;
}
