#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <string>
#include <Windows.h>

using namespace std;

int foo(int some, int any)
{
    return 1;
}

int main()
{
    setlocale(0, "");
    srand(time(0));
    /*1.	Пользователь вводит с клавиатуры сумму в гривнах (дробное число). Вывести по отдельности количество гривен и количество копеек (например, ввести 45.67 гривен - получить и вывести 45 гривен 67 копеек)*/
   // cout << "Введите сумму в гривнах (дробное число через точку): ";
   // double user_number;
   // cin >> user_number;
   // 	    
   // cout << int(user_number) <<" грн. "<< int(user_number * 100) % 100<<" коп.";

    /*2.	Пользователь вводит с клавиатуры массу в тоннах(дробное число).Вывести по отдельности количество тонн, килограмм, грамм(например, ввести 126.456789т - получить и вывести 126т 456кг 789г)*/
    /*cout << "Введитев тонны (дробное число через точку): ";
    double user_number;
    cin >> user_number;
   
    cout << (int)user_number << " т " << int(user_number * 1000) % 1000 << " кг " << int(user_number * 1000000) % 1000 << "г ";*/

    /*3.	Пользователь вводит с клавиатуры время в секундах.Перевести это значение в дни, часы, минуты и секунды.Например, 43513 секунд – это 12 часов, 5 минут и 13 секунд.*/
    //cout << "Введитев число в секундах: ";
    //int user_number;
    //cin >> user_number;
    //int hours = user_number / 3600;
    //int minutes = user_number % 3600 / 60;
    //int seconds = user_number % 3600 % 60;

    //cout <<hours << "ч. "<<minutes<<"мин. "<<seconds<<"сек."<<endl;

    /*4.	Пользователь вводит с клавиатуры расстояние до аэропорта(в километрах, может быть вещественное значение) и время, за которое нужно доехать(в минутах).Вычислить скорость(км / ч), с которой нужно ехать.*/

    /*cout << "Введитев расстояние до аэропорта(в километрах, может быть вещественное значение): ";
    double distance;
    cin >> distance;
    cout << "Введитев время, за которое нужно доехать(в минутах): ";
    int minutes;
    cin >> minutes;

    cout << "Cкорость(км / ч), с которой нужно ехать: " << distance * 60 /minutes<<"км/ч"<<endl;*/

   /* 5.	Пользователь вводит с клавиатуры время начала и время завершения телефонного разговора (часы, минуты и секунды). Посчитать стоимость разговора, если стоимость минуты составляет 15 копеек, с учётом посекундной тарификации.*/
    //int hour_start, minute_start, second_start, hour_end, minute_end, second_end, tax = 15;

    //cout << "Введитев время начало разговора.\nчасы: ";
    //cin >> hour_start;
    //cout << "минуты: ";
    //cin >> minute_start;
    //cout << "секунды: ";
    //cin >> second_start;
    //cout << "Введитев время окончания разговора.\nчасы: ";
    //cin >> hour_end;
    //cout << "минуты: ";
    //cin >> minute_end;
    //cout << "секунды: ";
    //cin >> second_end;

    //int time_start_sec = (second_start + minute_start * 60 + hour_start * 3600);    // проверки на некорректный ввод не делала
    //int time_end_sec = (second_end + minute_end * 60 + hour_end * 3600);
    //int time_conversation_min = (time_end_sec - time_start_sec) / 60;
    //int price = time_conversation_min * 15;

    //cout<< price/100<< "грн."<<price%100<< "коп.";


    /*6.	Пользователь вводит с клавиатуры время в секундах, прошедшее с начала рабочего дня. Посчитать, сколько целых часов ему осталось сидеть на работе, если рабочий день составляет 8 часов.    */
   /* int user_number; 
    cout << "Введитев число в секундах, прошедшее с начала рабочего дня: ";    
    cin >> user_number;
    const int WORKING_HOURS = 8;
    int working_seconds = WORKING_HOURS * 3600;
    int rest = (working_seconds - user_number) / 3600;
    int seconds = user_number % 3600 % 60;

    cout<<"До конца рабочего дня осталось целых " << rest << " часов;-) " << endl;*/

    /*7.	Пользователь вводит с клавиатуры размер одного фильма в гигабайтах (вещественное значение!) и скорость Интернет-соединения в мегабитах в секунду. Определить, за какое время (часы, минуты и секунды) скачается фильм.
    */
    /*double movie_size;
    double speed;
    cout << "Введите размер файла (Гб): ";
    cin >> movie_size;
    cout << "Введите скорость интернет соединения (мбит/сек): ";
    cin >> speed;

    const int MBIT_PER_GB = 8000;

    int time_seconds  = int(movie_size * MBIT_PER_GB / speed);
    int hours = time_seconds / 3600;
    int minutes = time_seconds % 3600 / 60;
    int seconds = time_seconds % 3600 % 60;

    cout << hours << "ч. " << minutes << "мин. " << seconds << "сек." << endl;*/

    /*8.	Преподаватель вводит с клавиатуры количество студентов, сдавших домашние задание, и количество «должников». Посчитать, сколько процентов составляют «должники» от общего числа студентов.
    */
    /*int count_succeded = 0, count_owned = 0;
    cout << "Введите количество студентов, сдавших домашние задание: ";
    cin >> count_succeded;
    cout << "Введите количество «должников»: ";
    cin >> count_owned;
    cout << "Должники состаляют: " << count_owned * 100. / (count_succeded + count_owned)<<"%";
    */

    /*9.	Пользователь вводит с клавиатуры время в секундах, прошедшее с начала дня. Определить, сколько времени (часов, минут и секунд) осталось до полуночи.
    */
   /* int user_number;
    const int HOURS_PER_DAY = 24;
    const int SECONDS_PER_DAY = HOURS_PER_DAY * 3600;
    cout << "Введитев число в секундах, прошедшее с начала дня: ";
    cin >> user_number;
    
    int seconds_rest = SECONDS_PER_DAY - user_number;
    int hours = seconds_rest / 3600;
    int minutes = seconds_rest % 3600 / 60;
    int seconds = seconds_rest % 3600 % 60;   

    cout << "До конца дня осталось  " << hours << " ч. " <<minutes<<"м. "<< seconds<<"c. "<< endl;*/

/* 10.	Пользователь вводит с клавиатуры сумму в гривнах, срок вклада в месяцах и процентную ставку за год. Посчитать, сколько денег будет у пользователя в конце срока.
*/
    /*double money_count = 0;
    double interest_rate = 1;
    int month_count = 0;
    cout << "Введите сумму вклада: ";
    cin >> money_count;
    cout << "Введите процентную ставку за год: ";
    cin >> interest_rate;
    interest_rate /= 100;
    cout << "Введите срок вклада (месяцы): ";
    cin >> month_count;
    cout << "Через " << month_count << " сумма вклада будет составлять: " << interest_rate * money_count * month_count + money_count<<"грн.";*/

/******************************************************************************************************************************************************/

/*
* 1.	Написать программу, которая находит среднее арифметическое значение трёх вещественных чисел.
*/
   /* double num1, num2, num3;
    cout << "Введите значение 1го вещественного числа: ";
    cin >> num1;
    cout << "Введите значение 2го вещественного числа: ";
    cin >> num2;
    cout << "Введите значение 3го вещественного числа: ";
    cin >> num3;
    cout << "Среднее арифметическое чисел составляет: " << (num1 + num2 + num3) / 3;*/

/*2.	Пользователь вводит число и степень. Программа вычисляет указанную степень этого числа (пригодится функция pow).
*/
    /*int user_number;
    int user_pow;
    cout << "Enter a number: ";
    cin >> user_number;
    cout << "Enter a pow:";
    cin >> user_pow;
    cout << user_number << " ^ " << user_pow << " = " << pow(user_number, user_pow);*/

/*3.	Написать программу, которая  предлагает пользователю ввести радиус окружности, а затем считает площадь и длину этой окружности. Число Pi задать в программе как вещественную константу.
*/
    /*const double PI = 3.14159265;
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << setw(2) << "Circle's square = " << PI * pow(radius, 2)<<endl;
    cout<< "Circle's perimeter = " << std::setw(4) << 2 * PI * radius<<endl;*/

/*4.	Написать программу, которая  предоставляет пользователю возможность ввести с клавиатуры количество гривен, и переводит это количество в доллары, евро и биткоины.
*/  
    /*double hrivnas = 0;
    cout << "Enter hrivnas amount: ";
    cin >> hrivnas;
    double EURO = 0.022;
    double DOLLARS = 0.024;
    double BITCOINS = 0.00000043;
    cout << hrivnas << "uah = " << hrivnas * EURO << " euro"<<endl;
    cout << hrivnas << "uah = " << hrivnas * DOLLARS << " dollars" << endl;
    cout << hrivnas << "uah = " << hrivnas * BITCOINS << " bitcoins" << endl;
    */

/*5.	Написать программу, которая переводит километры в сухопутные и морские мили.
*/ 
    /*const double LAND_MILES = 0.621371;
    const double NAUTICAL_MILES = 0.539957;
    double kilometers;
    cout << "Enter kilometers: ";
    cin >> kilometers;
    cout << "Land miles: " << kilometers * LAND_MILES << endl;
    cout << "Nautical miles: " << kilometers * NAUTICAL_MILES << endl;*/

/*6.	Написать программу, которая находит процент P от числа N.
*/
   /* double user_number, percent;
    cout << "Enter a number: ";
    cin >> user_number;
    cout << "Enter percent: ";
    cin >> percent;
    cout << percent << "% from " << user_number << " = " << percent * user_number / 100;*/

/*7.	Написать программу, которая переводит указанное количество градусов по Цельсию в градусы по шкале Фаренгейта, Кельвина, Реомюра и Делиля. Затем реализовать перевод из градусов по Фаренгейту в градусы по Цельсию.
*/
    /*double celcius = 0;
    cout << "Enter temperature in Celcius: ";
    cin >> celcius;
    double fahrengeit = (celcius * 9 / 5) + 32;
    double kelvin = celcius + 273.15;
    double reomure = celcius * 0.8;
    double delil = (100 - celcius) * 3 /2;
    cout << celcius << " = " << fahrengeit << " F"<<endl;
    cout << celcius << " = " << kelvin << " K"<<endl;
    cout << celcius << " = " << reomure << " R"<<endl;
    cout << celcius << " = " << delil << " D"<<endl;*/
/*8.	Поменять местами значения переменных a и b, сначала с использованием дополнительной третьей переменной, а затем – без.
*/
   /* int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "number 1: "<< num1 << "\nnumber2: " << num2 << endl << endl;

    num1 += num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "number 1: " << num1 << "\nnumber2: " << num2<<endl << endl;

    num1 ^= num2;
    num2 = num1 ^ num2;
    num1 ^= num2;
    cout << "number 1: " << num1 << "\nnumber2: " << num2 << endl << endl;*/



    /**********************************************************************************/
/* 1.	Ввести с клавиатуры два 3-значных числа и поменять у них средние цифры (например, ввести 357  и 702 – получить и вывести числа  307 и 752).
*/
    /*int num1, num2;
    cout << "Enter 3 digit number 1: ";
    cin >> num1;
    cout << "Enter 3 digit number 2: ";
    cin >> num2;
    int temp = num1 % 100;
    num1 = (num1 / 100) *100;
    num1 = num1 + num2 % 100;
    num2 = (num2 / 100) * 100 + temp;    
    temp = num1 % 10;
    num1 = (num1 / 10) * 10 + num2 % 10;
    num2 = (num2 / 10) * 10 + temp;
    cout << num1 << endl;
    cout << num2 << endl;*/
    
    
    /*2.	Ввести 4-значное число и подсчитать сумму первой и третьей цифры и разность второй и четвертой цифры.
    */
      
   /* int number = 1000 + rand() % 9000;
    cout << number<<endl;   
    cout << number / 1000 << " + "<< number % 100 / 10<< " = "<< number / 1000 + number % 100 / 10 << endl;
    cout << number / 100 % 10 << " - "<< number % 10 <<" = "<< number / 100 % 10 - number % 10 << endl;*/

/* 3.	Ввести с клавиатуры 3-значное число и удалить из него среднюю цифру (например, ввести 3, 5, 7 – получить и вывести число 37).
*/ 
    /*int number;
    cout << "Enter 3-digit number: ";
    cin >> number;
    if (number < 100 || number > 999)
    {
	cout << "You entered not 3-digit number!";
    }
    else
    {
	int temp = number % 10;
	number = (number / 100) * 10 + temp;
	cout << number;
    }*/
/*4.	Сколько товара ценой Y можно купить на Х гривен и сколько получить сдачи?
*/
   /* double money; 
    double price;
    cout << "How much money do you have? Enter: ";
    cin >> money;
    cout << "Enter product price: ";
    cin >> price;
    cout << "You can buy " << int(money / price) << " product items\nThe rest'll be: " << (int(money*100) % int(price*100))/100. << "grn.";*/

/* 5.	Ввести длину, ширину и высоту комнаты. Подсчитать, сколько краски уйдет на покраску стен этой комнаты, если на 1м2 стены приходится N литров краски и M% поверхности стен занимают окна и двери. Также, рассчитать общую стоимость краски, с учётом того, что один литр краски стоит R гривен.
*/
   /* double length, width, height, paint_consumption_per_1meter2, door_windows_square, paint_price_litre;
    cout << "Enter length of the room: ";
    cin >> length; 
    cout << "Enter width of the room: ";
    cin >> width;
    cout << "Enter height of the room: ";
    cin >> height;
    cout << "Enter paint consumption (litre/meter^2: ";
    cin >> paint_consumption_per_1meter2;
    cout << "Enter cost of 1 l paint: ";
    cin >> paint_price_litre;
    cout << "Enter the square of room widows and door: ";
    cin >> door_windows_square;
    double common_square = height * length *2 + width * height * 2 - door_windows_square;
    double paint_count = common_square / paint_consumption_per_1meter2;
    cout << "You'll need " << paint_count << "l of paint" << endl;
    cout << "The price of needed paint quantity is " << paint_count * paint_price_litre;*/

/*
6.	Ввести с клавиатуры 3-значное число и «перевернуть» его (например, ввести 357 – получить и вывести 753).
*/
   /* int number;
    cout << "Enter 3-digit number: ";
    cin >> number;
    if (number < 100 || number >999)
    {
	cout << "You entered not 3-digit number!";
    }
    else
    {
	int temp = 0;
	for (int i = 0; i < 3; i++)
	{
	    temp = temp * 10 + number % 10;
	    number /= 10;
	}
	number = temp;
	cout<<"Reversed number:" << number;

    }*/
    /*7.	Ввести пятизначное число и сдвинуть его циклически вправо на 2 разряда (например, если число равно 12345 – вывести на экран 45123).
    */
    /*int number;
    cout << "Enter 5-digit number: ";
    cin >> number;
    if (number < 10000 || number >99999)
    {
        cout << "You entered not 5-digit number!";
    }
    else
    {
	number = number % 100 * 1000 + number / 100;        
        cout << "Changed number: " << number;    
    }*/

    /* 8.	Рассчитать общую массу всех планет Солнечной системы. Вычислить среднее арифметическое масс планет. Затем - массу каждой планеты в процентном соотношении, если принять за 100% общую массу всех планет. Во сколько раз масса самой крупной планеты больше чем сумма масс всех остальных планет? Все результаты – показать на экране.
    */
//☿Меркурий  0.06	    330,2 
//♀ Венера     0.82	    4868,5
//🜨 Земля      1	    5973,6 ⋅ 10^24 кг
//♂ Марс       0.11	    641,85 
//♃ Юпитер    317.8	    1 898 600
//♄ Сатурн    95.2	    568 460 
//♅ Уран      14.6	    86 832 
//♆ Нептун    17.2	    102 430 
   /* double Mercury =	   0.33020;
    double Venus =	   4.86850;
    double Earth =	   5.97360;
    double Mars =	   0.64185;
    double Jupiter =	1898.60000;
    double Saturn =      568.46000;
    double Uranus =       86.83200;
    double Neptune =     102.43000;
    double common_weight = Mercury + Venus + Earth + Mars + Jupiter + Saturn + Uranus + Neptune;
    cout << "Название\t\tмасса *10^24\t\t% соотношение\n";
    cout<<"________________________________________________________________\n";
    cout<<"Mercury   \t\t   "<<Mercury<<"\t\t"<<Mercury	* 100./common_weight<<endl;
    cout << "Venus   \t\t   " << Venus << "\t\t" << Venus * 100./common_weight<<endl;
    cout << "Earth   \t\t   " << Earth << "\t\t" << Earth * 100./common_weight<<endl;
    cout << "Mars    \t\t   " << Mars << "\t\t" << Mars * 100./common_weight<<endl;
    cout << "Jupiter \t\t" << Jupiter << "\t\t\t" << Jupiter * 100./common_weight<<endl;
    cout << "Saturn  \t\t " << Saturn << "\t\t\t" << Saturn * 100./common_weight<<endl;
    cout << "Uranus  \t\t  " << Uranus << "\t\t" << Uranus * 100./common_weight<<endl;
    cout << "Neptune \t\t " << Neptune << "\t\t\t" << Neptune * 100./common_weight<<endl;
    cout << "________________________________________________________________\n";
    cout << "Common weight:\t\t" << common_weight<<endl<<endl;
    cout << "Jupiter is the biggest planet."<<endl;
    cout << "Its mass is " << Jupiter << "*10^24 and it is bigger " << Jupiter / (common_weight - Jupiter) << " times, than common mass of the all the other planets." << endl;*/


    return 0;
}
