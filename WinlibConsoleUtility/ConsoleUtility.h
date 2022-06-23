#pragma once

/* �R���\�[�����[�e�B���e�B���O��� */
namespace Ken_Cir_GT_ConsoleUtility
{
	/* �R���\�[�����[�e�B���e�B�N���X */
	class ConsoleUtility
	{
	public:
		/* �� */
		static const int    COLOR_BLACK = 0x00;

		/* �_�[�N�u���[ */
		static const int    COLOR_DARK_BLUE = 0x01;

		/* �_�[�N�O���[�� */
		static const int    COLOR_DARK_GREEN = 0x02;

		/* �_�[�N�V�A�� */
		static const int    COLOR_DARK_CYAN = 0x03;

		/* �_�[�N���b�h */
		static const int    COLOR_DARK_RED = 0x04;

		/* �_�[�N�o�C�I���b�g */
		static const int    COLOR_DARK_VIOLET = 0x05;

		/* �_�[�N�C�G���[ */
		static const int    COLOR_DARK_YELLOW = 0x06;

		/* �O���[ */
		static const int    COLOR_GRAY = 0x07;

		/* ���C�g�O���[ */
		static const int    COLOR_LIGHT_GRAY = 0x08;

		/* �u���[ */
		static const int    COLOR_BLUE = 0x09;

		/* �O���[�� */
		static const int    COLOR_GREEN = 0x0a;

		/* �V�A�� */
		static const int    COLOR_CYAN = 0x0b;

		/* ���b�h */
		static const int    COLOR_RED = 0x0c;

		/* �o�C�I���b�h */
		static const int    COLOR_VIOLET = 0x0d;

		/* �C�G���[ */
		static const int    COLOR_YELLOW = 0x0e;

		/* �z���C�g */
		static const int    COLOR_WHITE = 0x0f;

		/* ���P�x�}�X�N */
		static const int    COLOR_INTENSITY = 0x08;

		/* �ԐF�r�b�g */
		static const int    COLOR_RED_MASK = 0x04;

		/* �ΐF�r�b�g */
		static const int    COLOR_GREEN_MASK = 0x02;

		/* �F�r�b�g */
		static const int    COLOR_BLUE_MASK = 0x01;

		ConsoleUtility(const char* prefix);
		~ConsoleUtility();

		/* �R���\�[����̕�����F���Z�b�g���� */
		void setColor(int col);

		/* �R���\�[����̕�����F�Ɣw�i�F���Z�b�g���� */
		void setColor(int fg, int bg);

		/* �R���\�[���Ƀ}���`�o�C�g��������������� */
		void writeConsole(const char* str);

		/* �R���\�[���Ƀ��C�h��������������� */
		void writeConsole(const wchar_t* wstr);

	private:
		// ���OPrefix
		const char* prefix;
	};
}