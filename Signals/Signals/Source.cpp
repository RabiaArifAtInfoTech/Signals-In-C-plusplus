//Syntax:

//Signal(signal registered, signal handler)

//List of Signal in C++
//Given below are the list :
//
//Signals
//
//Operation Description
//
//SIGINT   |	An active signal gets generated for the receiver end.
//SIGTERM  |	A request is sent to the program for termination from the normal execution.
//SIGBUS   |	Notifies a bus error which accessing an invalid address.
//SIGILL   |	It detects an illegal command.
//SIGALRM  |	This signal Indicates expiration of timer and is mostly used by alarm function.
//SIGABRT  |	Abnormally a program gets terminated.
//SIGSTOP  |	A process gets stopped, ignored, blocked and handled by this signal.
//SIGSEGV  |	Storage with an invalid access.
//SIGFPE   |	It recognizes any mathematically incorrect or overflow operations.
//SIGUSR1  |    Signals with user defined.
//SIGUSR2  |          //
//SIGHUP   |	It tells the user that the terminal is disconnected.A type of signal used to report the termination of the controlling process.
//SIGQUIT  |	A core dump gets generatedand used to terminate the process.
//SIGTRAP  |	Trace all the traps.
//SIGCONT  |	The signal is sent to the process for making a continued process.


#include <iostream>
#include <csignal>
//using namespace std;

void signal_handler(int signl_no) {
	std::cout << "The interrupt signal is (" << signl_no << "). \n";
	exit(signl_no);
}
int main() {

	//1. SIGABRT
	signal(SIGABRT, signal_handler); //The interrupt signal is 22
	int count = 0;
	while (true) 
	{
		std::cout << "Hello educba learn infinite..." << std::endl;
		count++;
		if (count == 101)
		{
			raise(SIGABRT); 
		}
	}
	
	////2. SIGINT
	//signal(SIGINT, signal_handler); //The interrupt signal is 2
	//int count = 0;
	//while (true)
	//{
	//	std::cout << "Hello educba learn infinite..." << std::endl;
	//	count++;
	//	if (count == 101)
	//	{
	//		raise(SIGINT);
	//	}
	//}
	
	////3. SIGBUS
	//signal(SIGBUS, signal_handler); //Compile time error : SIGBUS undefined
	//int count = 0;
	//while (true)
	//{
	//	std::cout << "Hello educba learn infinite..." << std::endl;
	//	count++;
	//	if (count == 101)
	//	{
	//		raise(SIGBUS);
	//	}
	//}

	////4. SIGILL
	//signal(SIGILL, signal_handler); //The interrupt signal is 4
	//int count = 0;
	//while (true)
	//{
	//	std::cout << "Hello educba learn infinite..." << std::endl;
	//	count++;
	//	if (count == 101)
	//	{
	//		raise(SIGILL);
	//	}
	//}

	////5. SIGALRM
	//signal(SIGALRM, signal_handler); //Compile error: 'SIGALRM': undeclared indentifier
	//int count = 0;
	//while (true)
	//{
	//	std::cout << "Hello educba learn infinite..." << std::endl;
	//	count++;
	//	if (count == 101)
	//	{
	//		raise(SIGALRM);
	//	}
	//}

	////6. SIGSEGV
	//signal(SIGSEGV, signal_handler); //The interrupt signal is 11
	//int count = 0;
	//while (true)
	//{
	//	std::cout << "Hello educba learn infinite..." << std::endl;
	//	count++;
	//	if (count == 101)
	//	{
	//		raise(SIGSEGV);
	//	}
	//}

	////7. SIGSTOP
	//signal(SIGSTOP, signal_handler); //Error
	//int count = 0;
	//while (true)
	//{
	//	std::cout << "Hello educba learn infinite..." << std::endl;
	//	count++;
	//	if (count == 101)
	//	{
	//		raise(SIGSTOP);
	//	}
	//}



	return 0;
}