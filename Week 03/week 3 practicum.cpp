#include <iostream>

//task1
//int main()
//{
//    int n, m;
//    std::cin >> n >> m;
//    if (n < 0 || n>256 || m < 0 || m > 256)
//    {
//        std::cout << "invalid input";
//        return -1;
//    }
//    if (n > m)
//    {
//        int temp = n;
//        n = m;
//        m = temp;
//    }
//    for (int i = n; i < m; i++)
//    {
//        std::cout << i << " - " << char(i) << std::endl;
//    }
//}

//task2
//int main()
//{
//	int n;
//	std::cin >> n;
//	if (n < 0)
//	{
//		std::cout << "invalid input";
//		return -1;
//	}
//	if (n == 0)
//	{
//		std::cout << 1;
//	}
//
//	int k = 1;
//
//	for (size_t i = n; i > 0; --i) 
//	{
//		k *= i;
//	}
//	std::cout << k;
//}

//task3
//int main()
//{
//	int number;
//	std::cin >> number;
//	if (!std::cin || number <= 0)
//	{
//		std::cout << "invalid input";
//		return -1;
//	}
//	if (number == 1)
//	{
//		std::cout << "Sum is 1";
//		return 0;
//	}
//
//	int totalSum = 0;
//	for (int i = 1; i <= number; i++) 
//	{
//		totalSum += (i * (i + 1)) / 2;
//		std::cout << totalSum ;
//	}
//
//	std::cout << totalSum;
//
//}

//task4
//int main()
//{
//	int num;
//	std::cin >> num;
//	if (!std::cin)
//	{
//		std::cout << "invalid input";
//		return 1;
//	}
//
//	for (int i = 1; i <= num; i++) {
//		if (num % i == 0) 
//		{
//			std::cout << i << " "; 
//		}
//	}
//
//	return 0;
//
//}

//task5
//int main()
//{
//	int number;
//	std::cin >> number;
//	if (!std::cin || number <= 0)
//	{
//		std::cout << "invalid input";
//		return 1;
//	}
//
//	int fibbNum;
//	if (number == 1)
//	{
//		std::cout << 0 << std::endl;
//	}
//	else if (number == 2) 
//	{
//		std::cout << 0 << " " << 1 << " ";
//	}
//	else 
//	{
//		int first = 0, second = 1;
//
//		std::cout << first << " " << second << " ";
//
//		for (int i = 3; i <= number; ++i) 
//		{
//			fibbNum = first + second;
//			std::cout << fibbNum << " ";
//			first = second;
//			second = fibbNum;
//		}
//
//		std::cout << std::endl;
//	}
//
//}

//task6
//int main()
//{
//	int n;
//	std::cin >> n;
//	if (!std::cin)
//	{
//		std::cout << "invalid input";
//		return 1;
//	}
//
//	int sum =0, number;
//	while (true)
//	{
//		std::cin >> number;
//
//		if (number == -1)
//		{
//			break;
//		}
//		if (number < n && number % 2 == 0)
//		{
//			sum += number;
//		}
//	}
//	std::cout << sum;
//}

//task7
//int main()
//{
//	int m, n;
//	std::cout << "enter two positive numbers" << std :: endl;
//	std::cin >> m >> n;
//	if (!std::cin || m < 0 || n < 0)
//	{
//		std::cout << "invalid input";
//	}
//
//	if (m > n)
//	{
//		int temp = m;
//		m = n;
//		n = temp;
//	}
//
//
//	for (int i = m; i <= n; i++) 
//	{
//		int sum = 0;
//		for (int j = 1; j <= i / 2; j++) 
//		{
//			if (i % j == 0) 
//			{
//				sum += j; 
//			}
//		}
//
//		
//		if (sum == i)
//		{
//			std::cout << i << std::endl; 
//		}
//	}
//
//	return 0; 
//}

//task 8
//int main()
//{
//	int n, m;
//	std::cin >> n >> m;
//	if (!std::cin || n <0 || m < 0)
//	{
//		std::cout <<" invalid input";
//		return 1;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m ; j++)
//		{
//			std::cout << "(" << i << ";" << j << ")";
//		}
//
//		std::cout << std:: endl;
//	}
//	return 0;
//
//}

