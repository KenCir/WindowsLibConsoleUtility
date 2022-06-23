// WinConsoleUtility.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <Windows.h>
#include "..\WinlibConsoleUtility\ConsoleUtility.h"

using namespace Ken_Cir_GT_ConsoleUtility;

// writeConsole のテスト ワイド文字列(wchar_t)
void writeConsole_TestW()
{
    ConsoleUtility::writeConsole(L"ーーーwriteConsole TestW ワイド文字列ーーー\n");

    ConsoleUtility::writeConsole(L"Hello World\n");
    ConsoleUtility::writeConsole(L"こんにちは世界\n");

    ConsoleUtility::writeConsole(L"ーーーwriteConsole TestW ワイド文字列 ENDーーー\n\n");
}

// writeConsole のテスト マルチバイト文字列(char)
void writeConsole_TestA()
{
    ConsoleUtility::writeConsole("ーーーwriteConsole TestA マルチバイト文字列ーーー\n");

    ConsoleUtility::writeConsole("Hello World\n");
    ConsoleUtility::writeConsole("こんにちは世界\n");

    ConsoleUtility::writeConsole("ーーーwriteConsole TestA マルチバイト文字列 ENDーーー\n\n");
}

// setColor のテスト 文字列色
void setColor_Test_StringColor()
{
    ConsoleUtility::writeConsole(L"ーーーsetColor Test 文字列色ーーー\n");

    // ブラック
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_WHITE);
    ConsoleUtility::writeConsole(L"COLOR_BLACK\n");

    // ダークブルー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_DARK_BLUE);
    ConsoleUtility::writeConsole(L"COLOR_DARK_BLUE\n");

    // ダークグリーン
    ConsoleUtility::setColor(ConsoleUtility::COLOR_DARK_GREEN);
    ConsoleUtility::writeConsole(L"COLOR_DARK_GREEN\n");

    // ダークシアン
    ConsoleUtility::setColor(ConsoleUtility::COLOR_DARK_CYAN);
    ConsoleUtility::writeConsole(L"COLOR_DARK_CYAN\n");

    // ダークレッド
    ConsoleUtility::setColor(ConsoleUtility::COLOR_DARK_RED);
    ConsoleUtility::writeConsole(L"COLOR_DARK_RED\n");

    // ダークバイオレッド
    ConsoleUtility::setColor(ConsoleUtility::COLOR_DARK_VIOLET);
    ConsoleUtility::writeConsole(L"COLOR_DARK_VIOLET\n");

    // ダークイエロー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_DARK_YELLOW);
    ConsoleUtility::writeConsole(L"COLOR_DARK_YELLOW\n");

    // グレー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_GRAY);
    ConsoleUtility::writeConsole(L"COLOR_GRAYW\n");

    // ライトグレー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_LIGHT_GRAY);
    ConsoleUtility::writeConsole(L"COLOR_LIGHT_GRAYW\n");

    // ブルー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLUE);
    ConsoleUtility::writeConsole(L"COLOR_BLUE\n");

    // グリーン
    ConsoleUtility::setColor(ConsoleUtility::COLOR_GREEN);
    ConsoleUtility::writeConsole(L"COLOR_GREEN\n");

    // シアン
    ConsoleUtility::setColor(ConsoleUtility::COLOR_CYAN);
    ConsoleUtility::writeConsole(L"COLOR_CYAN\n");

    // レッド
    ConsoleUtility::setColor(ConsoleUtility::COLOR_RED);
    ConsoleUtility::writeConsole(L"COLOR_RED\n");

    // バイオレッド
    ConsoleUtility::setColor(ConsoleUtility::COLOR_VIOLET);
    ConsoleUtility::writeConsole(L"COLOR_VIOLET\n");

    // イエロー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_YELLOW);
    ConsoleUtility::writeConsole(L"COLOR_YELLOW\n");

    // ホワイト
    ConsoleUtility::setColor(ConsoleUtility::COLOR_WHITE);
    ConsoleUtility::writeConsole(L"COLOR_WHITE\n");

    ConsoleUtility::writeConsole(L"ーーーsetColor Test 文字列色 ENDーーー\n\n");
}

// setColor のテスト 背景色
void setColor_Test_BackGroundColor()
{
    ConsoleUtility::writeConsole(L"ーーーsetColor Test 背景色ーーー\n");

    // ブラック
    ConsoleUtility::setColor(ConsoleUtility::COLOR_WHITE, ConsoleUtility::COLOR_BLACK);
    ConsoleUtility::writeConsole(L"COLOR_BLACK");

    // ダークブルー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_DARK_BLUE);
    ConsoleUtility::writeConsole(L"\nCOLOR_DARK_BLUE");

    // ダークグリーン
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_DARK_GREEN);
    ConsoleUtility::writeConsole(L"\nCOLOR_DARK_GREEN");

    // ダークシアン
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_DARK_CYAN);
    ConsoleUtility::writeConsole(L"\nCOLOR_DARK_CYAN");

    // ダークレッド
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_DARK_RED);
    ConsoleUtility::writeConsole(L"\nCOLOR_DARK_RED");

    // ダークバイオレッド
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_DARK_VIOLET);
    ConsoleUtility::writeConsole(L"\nCOLOR_DARK_VIOLET");

    // ダークイエロー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_DARK_YELLOW);
    ConsoleUtility::writeConsole(L"\nCOLOR_DARK_YELLOW");

    // グレー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_GRAY);
    ConsoleUtility::writeConsole(L"\nCOLOR_GRAYW");

    // ライトグレー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_LIGHT_GRAY);
    ConsoleUtility::writeConsole(L"\nCOLOR_LIGHT_GRAYW");

    // ブルー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_BLUE);
    ConsoleUtility::writeConsole(L"\nCOLOR_BLUE");

    // グリーン
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_GREEN);
    ConsoleUtility::writeConsole(L"\nCOLOR_GREEN");

    // シアン
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_CYAN);
    ConsoleUtility::writeConsole(L"\nCOLOR_CYAN");

    // レッド
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_RED);
    ConsoleUtility::writeConsole(L"\nCOLOR_RED");

    // バイオレッド
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_VIOLET);
    ConsoleUtility::writeConsole(L"\nCOLOR_VIOLET");

    // イエロー
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_YELLOW);
    ConsoleUtility::writeConsole(L"\nCOLOR_YELLOW");

    // ホワイト
    ConsoleUtility::setColor(ConsoleUtility::COLOR_BLACK, ConsoleUtility::COLOR_WHITE);
    ConsoleUtility::writeConsole(L"\nCOLOR_WHITE");

    ConsoleUtility::setColor(ConsoleUtility::COLOR_WHITE, ConsoleUtility::COLOR_BLACK);
    ConsoleUtility::writeConsole(L"\nーーーsetColor Test 背景色 ENDーーー\n\n");
}

int main()
{
    writeConsole_TestW();

    writeConsole_TestA();

    setColor_Test_StringColor();

    setColor_Test_BackGroundColor();

    return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
