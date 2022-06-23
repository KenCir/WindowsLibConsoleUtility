#include "ConsoleUtility.h"

// includes
#include <Windows.h>

Ken_Cir_GT_ConsoleUtility::ConsoleUtility::ConsoleUtility(const char* prefix) : prefix(prefix)
{
}

Ken_Cir_GT_ConsoleUtility::ConsoleUtility::~ConsoleUtility()
{
}

void Ken_Cir_GT_ConsoleUtility::ConsoleUtility::setColor(int col)
{
	HANDLE h = ::GetStdHandle(STD_OUTPUT_HANDLE);
	WORD color = 0;
	if (col & COLOR_INTENSITY)
		color |= FOREGROUND_INTENSITY;
	if (col & COLOR_RED_MASK)
		color |= FOREGROUND_RED;
	if (col & COLOR_GREEN_MASK)
		color |= FOREGROUND_GREEN;
	if (col & COLOR_BLUE_MASK)
		color |= FOREGROUND_BLUE;

	// 色をセットする
	::SetConsoleTextAttribute(h, color);
}

void Ken_Cir_GT_ConsoleUtility::ConsoleUtility::setColor(int fg, int bg)
{
	HANDLE h = ::GetStdHandle(STD_OUTPUT_HANDLE);
	WORD color = 0;
	if (fg & COLOR_INTENSITY)
		color |= FOREGROUND_INTENSITY;
	if (fg & COLOR_RED_MASK)
		color |= FOREGROUND_RED;
	if (fg & COLOR_GREEN_MASK)
		color |= FOREGROUND_GREEN;
	if (fg & COLOR_BLUE_MASK)
		color |= FOREGROUND_BLUE;

	if (bg & COLOR_INTENSITY)
		color |= BACKGROUND_INTENSITY;
	if (bg & COLOR_RED_MASK)
		color |= BACKGROUND_RED;
	if (bg & COLOR_GREEN_MASK)
		color |= BACKGROUND_GREEN;
	if (bg & COLOR_BLUE_MASK)
		color |= BACKGROUND_BLUE;
	::SetConsoleTextAttribute(h, color);
}

void Ken_Cir_GT_ConsoleUtility::ConsoleUtility::writeConsole(const char* str)
{
	HANDLE h = ::GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwNumberOfCharsWrite;
	::WriteConsoleA(h,
		this->prefix,
		(DWORD)strlen(this->prefix),
		&dwNumberOfCharsWrite,
		NULL);
	::WriteConsoleA(h,
		str,
		(DWORD)strlen(str),
		&dwNumberOfCharsWrite,
		NULL);
}

void Ken_Cir_GT_ConsoleUtility::ConsoleUtility::writeConsole(const wchar_t* wstr)
{
	HANDLE h = ::GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwNumberOfCharsWrite;
	::WriteConsoleA(h,
		this->prefix,
		(DWORD)strlen(this->prefix),
		&dwNumberOfCharsWrite,
		NULL);
	::WriteConsoleW(h,
		wstr,
		(DWORD)wcslen(wstr),
		&dwNumberOfCharsWrite,
		NULL);
}
