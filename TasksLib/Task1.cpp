#include "pch.h"
#include "Task1.h"

namespace TasksLib
{
	void Task1::Run()
	{
		system("cls");
		setlocale(LC_ALL, "Russian.utf8");

		std::string strSize = "";
		size_t size = 0;
		int amountMax = 0;		
		size_t indexMax = 0;
		bool key = true;

		do
		{
			std::cout << "Введите размер массива (5 - 20): ";
			std::cin >> strSize;
			key = !(ConvertLib::Convert::ToUlonglong(strSize, size) && size >= 5 && size <= 20);

			if (key)
			{
				std::cout << "Ошибка ввода!!!" << std::endl;
				std::cout << "--------------------------------------------" << std::endl;
			}
		} 
		while (key);

		std::vector<int> arr(size);
		
		for (auto i = arr.begin(); i != arr.end(); i++)
		{
			*i = RandomLib::Random::Next(-10, 10);
		}

		std::cout << "Массив: ";

		for (auto i = arr.begin(); i != arr.end(); i++)
		{
			std::cout << *i << " ";
			amountMax += *i;
		}

		indexMax = arr.size() - 1;

		std::cout << std::endl;

		size_t minIndexOut = 0;
		size_t maxIndexOut = indexMax;

		while(indexMax > 0)
		{
			for (size_t i = 0; i < indexMax; i++)
			{
				int amount = 0;

				for (size_t j = i; j <= indexMax; j++)
				{
					amount += arr[j];
				}

				if (amount > amountMax)
				{
					amountMax = amount;
					maxIndexOut = indexMax;
					minIndexOut = i;
				}
			}

			indexMax--;
		}

		std::cout << "Наибольшая сумма последовательных элементов находится между индексами: " << minIndexOut << " и " << maxIndexOut << std::endl;
		
		std::cout << "Элемены: ";

		for (size_t i = minIndexOut; i <= maxIndexOut; i++)
		{
			std::cout << arr[i] << " ";
		}

		std::cout << std::endl;

		std::cout << "Сумма равна: " << amountMax << std::endl;

		std::cin.get();
	}
}
