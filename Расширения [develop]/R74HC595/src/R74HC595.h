/*
  R74HC595.h - библиотека для работы со сдвиговым регистром
*/

#ifndef R74HC595_h
#define R74HC595_h

#include <Arduino.h>

///Объявляем класс
class R74HC595Class
{
	public:
		R74HC595Class(int latchPin, int clockPin, int dataPin); ///Описание класса
		void updateShiftRegister(byte leds); ///Описание функции передачи данных в сдвиговый регистр
	private:
		int _latchPin; ///Внутреняя переменная с номером пина "защелкивания", низкий уровень - запись в 74HC595, высокий уровень - вывод 74HC595 полученного байта
		int _dataPin; ///Внутреняя переменная с номером пина передачи данных в регистр сдвига
		int _clockPin; ///Внутреняя переменная с номером пина синхронизации передачи данных
		byte _leds; ///Байт информации передаваемый в регистр сдвига
};

#endif