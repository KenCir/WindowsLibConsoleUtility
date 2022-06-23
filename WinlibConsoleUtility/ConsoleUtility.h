#pragma once

/* コンソールユーティリティ名前空間 */
namespace Ken_Cir_GT_ConsoleUtility
{
	/* コンソールユーティリティクラス */
	class ConsoleUtility
	{
	public:
		/* 黒 */
		static const int    COLOR_BLACK = 0x00;

		/* ダークブルー */
		static const int    COLOR_DARK_BLUE = 0x01;

		/* ダークグリーン */
		static const int    COLOR_DARK_GREEN = 0x02;

		/* ダークシアン */
		static const int    COLOR_DARK_CYAN = 0x03;

		/* ダークレッド */
		static const int    COLOR_DARK_RED = 0x04;

		/* ダークバイオレット */
		static const int    COLOR_DARK_VIOLET = 0x05;

		/* ダークイエロー */
		static const int    COLOR_DARK_YELLOW = 0x06;

		/* グレー */
		static const int    COLOR_GRAY = 0x07;

		/* ライトグレー */
		static const int    COLOR_LIGHT_GRAY = 0x08;

		/* ブルー */
		static const int    COLOR_BLUE = 0x09;

		/* グリーン */
		static const int    COLOR_GREEN = 0x0a;

		/* シアン */
		static const int    COLOR_CYAN = 0x0b;

		/* レッド */
		static const int    COLOR_RED = 0x0c;

		/* バイオレッド */
		static const int    COLOR_VIOLET = 0x0d;

		/* イエロー */
		static const int    COLOR_YELLOW = 0x0e;

		/* ホワイト */
		static const int    COLOR_WHITE = 0x0f;

		/* 高輝度マスク */
		static const int    COLOR_INTENSITY = 0x08;

		/* 赤色ビット */
		static const int    COLOR_RED_MASK = 0x04;

		/* 緑色ビット */
		static const int    COLOR_GREEN_MASK = 0x02;

		/* 青色ビット */
		static const int    COLOR_BLUE_MASK = 0x01;

		ConsoleUtility(const char* prefix);
		~ConsoleUtility();

		/* コンソール上の文字列色をセットする */
		void setColor(int col);

		/* コンソール上の文字列色と背景色をセットする */
		void setColor(int fg, int bg);

		/* コンソールにマルチバイト文字列を書き込む */
		void writeConsole(const char* str);

		/* コンソールにワイド文字列を書き込む */
		void writeConsole(const wchar_t* wstr);

	private:
		// ログPrefix
		const char* prefix;
	};
}