#include <iostream>
#include <cmath>

//task1
//int main()
//{
//	int number;
//	std::cin >> number;
//	if (number > 0)
//	{
//		std::cout << "polozhitelno";
//	}
//	else if (number < 0)
//	{
//		std::cout << "otricatelno";
//	}
//	else
//	{
//		std::cout << "0";
//	}
//}

//task2
//int main()
//{
//	int num;
//	std::cin >> num;
//	switch (num)
//	{
//	case 1: std::cout << "I" << std:: endl;
//		break;
//	case 2: std::cout << "II" << std::endl;
//		break;
//	case 3: std::cout << "III" << std::endl;
//		break;
//	case 4: std::cout << "IV" << std::endl;
//		break;
//	case 5:
//		std::cout << "V" << std::endl;
//		break;
//	case 6:
//		std::cout << "VI" << std::endl;
//		break;
//	case 7:
//		std::cout << "VII" << std::endl;
//		break;
//	case 8:
//		std::cout << "VIII" << std::endl;
//		break;
//	case 9:
//		std::cout << "IX" << std::endl;
//		break;
//	default:
//		std::cout << "Invalid Input!" << std::endl;
//		break;
//	}
//}


//task3
//int main()
//{
//	int year;
//	std::cin >> year;
//	if (year % 4 == 0 && ((year % 100 != 0) || year % 400 == 0))
//	{
//		std::cout << "Leap year";
//	}
//	else
//	{
//		std::cout << "Not a leap year";
//	}
//
//}


//task4
//int main()
//{
//	int day;
//	std::cin >> day;
//	if (!std::cin)
//	{
//		std::cout << "Invalid input!" << std::endl;
//		return -1;
//	}
//
//	switch (day)
//	{
//	case 1:
//		std::cout << "Monday" << std::endl;
//		break;
//	case 2:
//		std::cout << "Tuesday" << std::endl;
//		break;
//	case 3:
//		std::cout << "Wednesday" << std::endl;
//		break;
//	case 4:
//		std::cout << "Thursday" << std::endl;
//		break;
//	case 5:
//		std::cout << "Friday" << std::endl;
//		break;
//	case 6:
//		std::cout << "Saturday" << std::endl;
//		break;
//	case 7:
//		std::cout << "Sunday" << std::endl;
//		break;
//	default:
//		std::cout << "You have entered an incorrect number!" << std::endl;
//		break;
//	}
//}



//task5
//int main()
//{
//	int a, b;
//	std::cin >> a >> b;
//	int bigNum = (a > b) ? a : b;
//	std::cout << bigNum;
//}

//task6
//int main()
//{
//	char ch;
//	std::cin >> ch;
//
//	if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) 
//	{
//		std::cout << "Invalid input!" << std::endl;
//		return -1; 
//	}
//
//	bool isUpper = (ch >= 'A' && ch <= 'Z');
//	bool isVowel = false;
//
//	char lowerCh = (isUpper) ? (ch + 32) : ch; 
//	if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u' || 
//		lowerCh == 'A' || lowerCh == 'E' || lowerCh == 'I' || lowerCh == 'O' || lowerCh == 'U')
//	{
//		isVowel = true;
//	}
//
//	if (isUpper) 
//	{
//		std::cout << ch << " is upper and" << (isVowel ? " vowel" : " isn't vowel") << std::endl;
//		std::cout  << char(ch + 32) << std::endl;
//	}
//	else
//	{
//		std::cout << ch << " is lower and" << (isVowel ? " vowel" : " isn't vowel") << std::endl;
//		std::cout  << char(ch - 32) << std::endl;
//	}
//
//	return 0;
//}

//task7
//int main() {
//    int a, b, c;
//    std::cin >> a >> b >> c;
//
//    int min, mid, max;
//
//    if (a <= b && a <= c) 
//    {
//        min = a;
//        if (b <= c) 
//        {
//            mid = b;
//            max = c;
//        }
//        else 
//        {
//            mid = c;
//            max = b;
//        }
//    }
//    else if (b <= a && b <= c) 
//    {
//        min = b;
//        if (a <= c) 
//        {
//            mid = a;
//            max = c;
//        }
//        else 
//        {
//            mid = c;
//            max = a;
//        }
//    }
//    else 
//    {
//        min = c;
//        if (a <= b) 
//        {
//            mid = a;
//            max = b;
//        }
//        else {
//            mid = b;
//            max = a;
//        }
//    }
//
//    std::cout  << min << " " << mid << " " << max << std::endl;
//
//    return 0;
//}

//task8
//int main()
//{
//	int radius, a, b;
//	std::cout << "Radius:";
//	std::cin >> radius;
//	std::cout << "enter a and b" << std :: endl;
//	std::cin >> a >> b;
//
//	double distance = sqrt(a * a + b  * b);
//
//	if (distance < radius) 
//	{
//		std::cout << "inside the circle" << std::endl;
//	}
//	else if (distance == radius) 
//	{
//		std::cout << "is on the circle" << std::endl;
//	}
//	else
//{
//		std::cout << "outside the circle" << std::endl;
//	}
//
//	return 0; 
//}

//task9
//int main()
//{
//	const double EPSILON = 0.000001;
//	double left, right, number;
//	std::cout << "Enter left";
//	std::cin >> left;
//	std::cout << "Enter right";
//	std::cin >> right;
//	std::cout << "Enter number";
//	std::cin >> number;
//
//	if (left > right)
//	{
//		std::cout << "The left edge should be smaller than the right ";
//    }
//
//	bool isEqualLeft = (number >= left - EPSILON && number <= left + EPSILON);
//	bool isEqualRight = (number >= right - EPSILON && number <= right + EPSILON);
//
//	if (isEqualLeft || isEqualRight) 
//	{
//		std::cout << "interval is closed" << std::endl;
//	}
//	else if (number > left && number < right)
//	{
//		std::cout << "The number is in an open space" << std::endl;
//	}
//	else 
//	{
//		std::cout << "the number is not in the interval" << std::endl;
//	}
//}

//task10
//int main()
//{
//	int number;
//	std::cin >> number;
//	if (number <= 999 && number >= 10000)
//	{
//		std::cout << "invalid input";
//	}
//	int digit1 = number / 1000;
//	int digit2 = (number / 100) % 10;
//	int digit3 = (number / 10) % 10;
//	int digit4 = number % 10;
//	int newNum1 = digit1 * 10 + digit4;
//	int newNum2 = digit2 * 10 + digit3;
//	if (newNum1 > newNum2)
//	{
//		std::cout << newNum1 << ">" << newNum2;
//	}
//	else if (newNum1 < newNum2)
//	{
//		std::cout << newNum2 << ">" << newNum1;
//	}
//	else
//	{
//		std::cout << newNum1 << "=" << newNum2;
//	}
//
//}

//task11
//int main()
//{
//	int day, month, year;
//	std::cin >> day >> month >> year;
//
//	if (month > 12 || month < 1)
//	{
//		std::cout << "invalid input for month";
//	}
//
//    int daysInMonth;
//    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//    {
//        daysInMonth = 31; 
//    }
//    else if (month == 4 || month == 6 || month == 9 || month == 11) 
//    {
//        daysInMonth = 30; 
//    }
//    else 
//    { 
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//        {
//            daysInMonth = 29; 
//        }
//        else 
//        {
//            daysInMonth = 28;
//        }
//    }
//
//    if (day >= 1 && day <= daysInMonth) 
//    {
//        std::cout << "1" << std::endl; 
//    }
//    else 
//    {
//        std::cout << "0" << std::endl;
//    }
//
//    return 0;
//}

//task12
//int main()
//{
//	double x1, y1, x2, y2;
//	double x, y;
//	std::cout << "Enter the coordinates of the first point (x1 y1): ";
//	std::cin >> x1 >> y1;
//	std::cout << "Enter the coordinates of the second point (x1 y1): ";
//	std::cin >> x2 >> y2;
//	std::cout << "Enter the coordinates of the third point (x y):";
//	std::cin >> x >> y;
//
//
//	double left, right, bottom, top;
//	if (x1 > x2)
//	{
//		left = x1;
//		right = x2;
//	}
//	else
//	{
//		left = x2;
//		right = x1;
//	}
//	if (y1 < y2) 
//	{
//		bottom = y1;
//		top = y2;
//	}
//	else 
//	{
//		bottom = y2;
//		top = y1;
//	}
//
//	if (x > left && x < right && y > bottom && y < top)
//	{
//		std::cout << "The point is inside the rectangle";
//	}
//	else if ((x == left || x == right) && (y >= bottom && y <= top) || (y == bottom || y == top) && (x >= left && x <= right))
//	{
//		std::cout << "The point is on the contour of the rectangle";
//	}
//	else 
//	{
//		std::cout << "The point is outside the rectangle" << std::endl;
//	}
//	return 0;
//
//}

//task13
//int main()
//{
//    double a, b, c;
//    std::cout << "Enter a, b and c: ";
//    std::cin >> a >> b >> c;
//
//    if (a == 0)
//    {
//        if (b == 0)
//        {
//            if (c == 0)
//            {
//                std::cout << "The equation has countless solutions" << std::endl;
//            }
//            else
//            {
//                std::cout << "The equation has no solutions" << std::endl;
//            }
//        }
//        else
//        {
//            std::cout << "The equation has one solution" << std::endl;
//        }
//    }
//    else
//    {
//
//        double d = b * b - 4 * a * c;
//
//        if (d > 0)
//        {
//            std::cout << "The equation has two real roots" << std::endl;
//        }
//        else if (d == 0)
//        {
//            std::cout << "The equation has one real double root" << std::endl;
//        }
//        else
//        {
//            std::cout << "The equation has zero real roots." << std::endl;
//        }
//    }
//}

//task14
//int main()
//{
//        char firstUpper, secondUpper, firstLower, secondLower, fifth; 
//
//        std::cout << "Enter 5 letters (first two uppercase, next two lowercase): ";
//        std::cin >> firstUpper >> secondUpper >> firstLower >> secondLower >> fifth;
//
//        char startA, endA, startB, endB;
//        if (firstUpper < secondUpper) 
//        {
//            startA = firstUpper;
//            endA = secondUpper;
//        }
//        else 
//        {
//            startA = secondUpper;
//            endA = firstUpper;
//        }
//        if (firstLower < secondLower) 
//        {
//            startB = firstLower;
//            endB = secondLower;
//        }
//        else 
//        {
//            startB = secondLower;
//            endB = firstLower;
//        }
//        bool inUnion = (fifth >= startA && fifth <= endA) || (fifth >= startB && fifth <= endB);
//        bool inIntersection = (fifth >= startA && fifth <= endA) && (fifth >= startB && fifth <= endB);
//        bool inDifference = (fifth >= startA && fifth <= endA) && !(fifth >= startB && fifth <= endB);
//
//        std::cout << "Belongs to the union of A and B: " << (inUnion ? "Yes" : "No") << std::endl;
//        std::cout << "Belongs to the intersection of A and B: " << (inIntersection ? "Yes" : "No") << std::endl;
//        std::cout << "Belongs to the difference of A with B: " << (inDifference ? "Yes" : "No") << std::endl;
//
//        bool onlyInA = inUnion && !inIntersection && !inDifference;
//        bool onlyInB = inUnion && !inIntersection && inDifference;
//        std::cout << "Belongs only to A: " << (onlyInA ? "Yes" : "No") << std::endl;
//        std::cout << "Belongs only to B: " << (onlyInB ? "Yes" : "No") << std::endl;
//
//        return 0; 
//
//}