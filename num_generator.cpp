#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;

int main(int ac, char **av)
{
    if (ac == 2)
	{
		int cap = atoi(av[1]);
    	int nums[cap];
    	int aux = 0;
		srand(time(0));
		for(int i = 0; i < cap; i++)
		{
			aux = (1 + rand() % 10000);
			int aux2 = 0;
			while(aux2 < i){
	
				if(aux != nums[aux2])
					aux2++;
				else
				{
					aux = (1 + rand() % 10000);
					aux2 = 0;  
				}
			}
			nums[i] = aux;
			cout << nums[i] << " ";
		}
    }
	cout << "Error!" << endl;
	cout << "Usage: ./gen <numbers>" << endl;
    return 0;
}