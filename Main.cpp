#include "TablePrinter.h"

int main()
{
	TablePrinter ct("Test Table", 2,2, "test.txt");
	ct.SetColHeader(0, "col1")
		.SetColHeader(1, "Col2's header is very long")
		.SetHaveLineDiv(true);
	ct.Print(3);
	ct.Print(4.6);
	ct.Print("hi");
	ct.Print(6);
	getchar();
	return 0;
}