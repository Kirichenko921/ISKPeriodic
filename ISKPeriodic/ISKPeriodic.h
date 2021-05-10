#pragma once
#include <iostream>
#include <string>
#include<vector>

bool IskPeriodic(std::string text, int k)
{
	if (text.size() % k != 0) //если строка не кратна индексу кратности возвращаем false
	{
		return false;
	}
	std::vector<int>  textASCII; // массив для преобразования входящей строки в int
	std::vector<int> pattern;  // массив для подстроки

	for (size_t i = 0; i < text.size(); ++i) // заполняем массив int значениями соответствующих символам по таблице ASCII
	{
		textASCII.push_back(static_cast<int>(text[i]));
	}
	for (int i = 0; i < k; ++i) // присваиваем первые k значения входящей строки подстроке
	{
		pattern.push_back(textASCII[i]);
	}

	for (size_t itext = 0; itext < text.size(); itext += k) // проверяем каждую часть строки 
	{
		for (int ipattern = 0; ipattern < k; ++ipattern)    //равную подстроке
		{
			if (textASCII[itext + ipattern] != pattern[ipattern]) // если символ части строки не совпадает с символом подстроки
			{
				return false;
			}
		}
	}
	return true; // если прошли все испытания
}