#include <iostream>
#include <windows.h>


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int choose = 0;
	double bablostorage = 0;
	double storagepars = 0;
	double total = 0;
	double porogskidki = 1000;
	double skidkapars = 0;
	int apple = 0;
	int orange = 0;
	int apricot = 0;
	int pear = 0;
	int tomato = 0;
	int onion = 0;
	int freeonion = 0;
	int pickle = 0;
	int garlic = 0;
	int parsley = 0;
	int karkade = 0;
	while (true)
	{
		std::cout << "\t\t\t добро пожаловать в магазин \"Соки Севы\"\n";
		std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t это Я\n";
		std::cout << "\t\t\t 1-фруктовые\n";
		std::cout << "\t\t\t 2-овощьные\n";
		std::cout << "\t\t\t 3-чаи\n";
		std::cin >> choose;


		if (choose == 1)
		{
			system("cls");
			while (true)
			{
				std::cout << "\t\t\t фруктовый\n";
				std::cout << "\t\t\t выберите сок\n";
				std::cout << "\t\t\t1- яблочный сок 60r -" << apple << "L\n";
				std::cout << "\t\t\t2- апельсиновый сок 120r -" << orange << "L\n";
				std::cout << "\t\t\t3- абрикосовый сок 160r -" << apricot << "L\n";
				std::cout << "\t\t\t4- грушевый сок 80r -" << pear << "L\n";
				std::cin >> choose;
				system("cls");
					if (choose == 1)
					{
						std::cout << "\t\t\t впишите кол-во литров\n";
						std::cin >> apple;
						total = apple * 60;
					}
					else if (choose == 2)
					{
						std::cout << "\t\t\t впишите кол-во литров\n";
						std::cin >> orange;
						total = orange * 120;
					}
					else if (choose == 3)
					{
						std::cout << "\t\t\t впишите кол-во литров\n";
						std::cin >> apricot;
						total = apricot * 160;
					}
					else if (choose == 4)
					{
						std::cout << "\t\t\t впишите кол-во литров\n";
						std::cin >> pear;
						total = pear * 80;
					}
					else
					{
						break;
					}

			}


		}
		else if (choose == 2)
		{
			system("cls");
			while (true)
			{
				std::cout << "\t\t\t овощной\n";
				std::cout << "\t\t\t выберите сок\n";
				std::cout << "\t\t\t1- томатный сок 60r -" << tomato << "L\n";
				std::cout << "\t\t\t2- луковый сок 120r -" << onion << "L\n";
				std::cout << "\t\t\t3- огуречный сок 160r -" << pickle << "L\n";
				std::cin >> choose;
				system("cls");
				if (choose == 1)
				{
					std::cout << "\t\t\t впишите кол-во литров\n";
					std::cin >> tomato;
					total = tomato * 60;
				}
				else if (choose == 2)
				{
					std::cout << "\t\t\t впишите кол-во литров\n";
					std::cin >> onion;
					total = onion * 120;

				}
				else if (choose == 3)
				{
					std::cout << "\t\t\t впишите кол-во литров\n";
					std::cin >> pickle;
					total = pickle * 160;
				}
				else
				{
					break;
				}
			}

		}
		else if (choose == 3)
		{
			system("cls");
			while (true)
			{
				std::cout << "\t\t\t чай\n";
				std::cout << "\t\t\t выберите чай\n";
				std::cout << "\t\t\t1- чесночный чай 60r -" << garlic << "L\n";
				std::cout << "\t\t\t2- петрушевый чай 120r -" << parsley << "L\n";
				std::cout << "\t\t\t3- каркаде 1488r -" << karkade << "L\n";
				std::cin >> choose;
				system("cls");
				if (choose == 1)
				{
					std::cout << "\t\t\t впишите кол-во литров\n";
					std::cin >> garlic;
					total = garlic * 60;
				}
				else if (choose == 2)
				{
					std::cout << "\t\t\t впишите кол-во литров\n";
					std::cin >> parsley;
					storagepars = parsley * 120;
				}
				else if (choose == 3)
				{
					std::cout << "\t\t\t впишите кол-во литров\n";
					std::cin >> karkade;
					total = karkade * 1488;
				}
				else
				{
					break;
				}

			}

		}
		else
		{
			if (parsley > 3)
			{
				skidkapars += storagepars;
				skidkapars /= 100;
				skidkapars *= 5;
				storagepars -= skidkapars;
				skidkapars = 5;
			}
			if (total > porogskidki)
			{
			bablostorage = total;
			bablostorage /= 100;
			bablostorage *= 13;
			total -= bablostorage;
			bablostorage = 13


			}

			total += storagepars;
			system("cls");
			std::cout << "\t\t\t всего куплено\n";
			std::cout << "\t\t\t1- яблочный сок -" << apple << "L\n";
			std::cout << "\t\t\t2- апельсиновый сок -" << orange << "L\n";
			std::cout << "\t\t\t3- абрикосовый сок -" << apricot << "L\n";
			std::cout << "\t\t\t4- грушевый сок -" << pear << "L\n";
			std::cout << "\t\t\t1- томатный сок -" << tomato << "L\n";
			std::cout << "\t\t\t2- луковый сок -" << onion << "L\n";
			std::cout << "\t\t\t3- огуречный сок -" << pickle << "L\n";
			std::cout << "\t\t\t1- чесночный чай -" << garlic << "L\n";
			std::cout << "\t\t\t2- петрушевый чай -" << parsley << "L\n";
			std::cout << "\t\t\t3- каркаде -" << karkade << "L\n";
			std::cout << "скидка на петрушевый чай" << skidkapars << "%\n";
			std::cout << "скидка на весь товар" << bablostorage << "%\n";
			std::cout << total;
			break;
		}
	}












	return 0;
}