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
		cout << "\033[0;33mARGS" << cap << "=\"";
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
			cout << nums[i];
			if ((i + 1) < cap)
				cout << " ";
		}
		cout << "\" ;\necho -n \"\\033[0;33m\" ;./push_swap $ARGS" << cap \
			<< " | wc -l && ./push_swap $ARGS" << cap \
			<< " | ./checker $ARGS" << cap << endl;
		return (0);
    }
	cout << "Error!" << endl;
	cout << "Usage: ./gen <size list of numbers>" << endl;
    return (1);
}