


int main()
{

	pid = fork();
	if(pid < 0)
	{

	}
	if(pid == 0)
	{
		execl("./denglu","denglu",NULL);
		perror();
		exit(1);
	}

	fork();




}


