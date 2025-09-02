#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")


namespace FNTAS_lib
{
	// void print_title();
	// void repeat_char_output();
	void play_wav_file(LPCWSTR file_name);	// Воспроизводит аудиофайлы формата wav
	void window_transparency(bool on_off); // включает и выключает прозрачность окна
	void window_title(LPCWSTR title); // Задаёт заголовок окна
	void wait_seconds(unsigned char seconds); // Задержка
	void clear(); // Отчищает терминал от символов
}