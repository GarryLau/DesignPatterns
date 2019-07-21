#include "Application.h"

int main() {
    WordApplication wordapp;
    wordapp.NewDocument("foo1");
    wordapp.NewDocument("foo2");
    wordapp.ShowInfo();

    ExcelApplication excelapp;
    excelapp.NewDocument("bar1");
    excelapp.NewDocument("bar2");
    excelapp.ShowInfo();

    return 0;
}