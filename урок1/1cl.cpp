#include <iostream>

#define forever for(;;)
#define begin {
#define end }
#define write cout<<
#define size 6
int arr[size]{ 1,2,3,4,5 };
#define stroka "\t I love\
 C++\n"
#define x 2
#define square(x) paw(x,2)
#define abs(y) ((y)<0?-(y):(y))
#define modify(arr,index)\
arr[index]*=2;\
index++;
#define ted "ted"
#define STR(str) #str
#define concat(a,b) a##b
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int menu;
	do
	{
		//main
		cout << "Enter task:" << endl;
		cin >> menu;
		switch (menu) {
		case 1: {
			forever begin
				write "Hello world!";
			end

		}
			  break;
		case 2: {
			int sum = 0;
			for (size_t i = 0; i < size; i++)
			{
				sum += arr[i];
			}
			cout << sum << endl;
			/* #undef size
			 int size=10;
			 size++;
			 cout << size << endl;*/
		}
			  break;
		case 3: {
			write stroka;
			
			
		}
			  break;
		case 4: {
			int num = -5;
			cout << abs(num++) << endl;
			cout << num << endl;
		}
			  break;
		case 5: {
			for (size_t i = 0; i < size;)
			{
				modify(arr, i);
				cout << arr[i] << endl;
			}
			for (size_t i = 0; i < size; i++)
			{
				cout << arr[i] << endl;
			}
		}
			  break;
		case 6: {
#ifdef ted
			cout << "Hello " << ted << endl;
#else
			cout << "Hello anyone " << ted << endl;
#endif
		}
			  break;
		case 7: {
#if(size==5)
#error size повинно =5!
#endif
#line 19 "source.cpp"
			cout << __LINE__ << "file" << __FILE__ << "date" << __DATE__ << "time:" << __TIME__ << endl;
		}
			  break;
		case 8: {
			int xy = 100;
			cout << concat(x, y) << endl;
			cout << concat(10, 20) << endl;

		}
			  break;
		case 9: {

		}
			  break;
		case 10: {

		}
			   break;
		}
	} while (menu != 0);
	return 0;
}