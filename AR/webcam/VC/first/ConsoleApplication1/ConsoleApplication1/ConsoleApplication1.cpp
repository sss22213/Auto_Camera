// ConsoleApplication1.cpp : main project file.

#include "stdafx.h"
#include "MyForm.h"
#include "MyForm1.h"
using namespace System;
using namespace ConsoleApplication1;

int main(array<System::String ^> ^args)
{
    //Console::WriteLine(L"Hello World");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());

    return 0;
}
