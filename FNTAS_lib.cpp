#include "FNTAS_lib.h"


void FNTAS_lib::play_wav_file(LPCWSTR file_name)
{
	PlaySound(file_name, NULL, SND_FILENAME | SND_ASYNC);
}

void FNTAS_lib::window_transparency(bool on_off)
{
	if (on_off == true)
	{
		SetLayeredWindowAttributes(GetConsoleWindow(), RGB(0, 0, 0), 255, LWA_ALPHA);
	}
	else
	{
		SetLayeredWindowAttributes(GetConsoleWindow(), RGB(0, 0, 0), 255-45, LWA_ALPHA);
	}
}

void FNTAS_lib::window_title(LPCWSTR title)
{
	SetConsoleTitle(title);
}

void FNTAS_lib::wait_seconds(unsigned char seconds)
{
	Sleep(1000 * seconds);
}

void FNTAS_lib::clear()
{
	// Костыль
	COORD coord;
	coord.X = 0;
	coord.Y = 0;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	for (unsigned char i = 0; i < 15; i++)
	{
		std::cout << "                      " << std::endl;
	}

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}