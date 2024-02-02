#include <iostream>
using namespace std;
class Cpu {
	public:
		virtual void Calculate() = 0;
};

class VideoCard {
	public:
		virtual void display() = 0;
};

class Memory {
	public:
		virtual void Storage() = 0;
};

class Computer {
	public:
		Computer(Cpu *cpu, VideoCard *ve, Memory *me) {
			M_cpu = cpu;
			M_vc = ve;
			memory = me;
		}
		void Work()
		{
		M_cpu->Calculate();
		M_vc->display();
		memory->Storage();
		
		}
	private:
		Cpu * M_cpu;
		VideoCard *M_vc;
		Memory *memory;
};

class InterCpu:public Cpu
{
	
};
int main() {


}
