// Read integers from a file and print their sum or send it to other file;

void somefunction()
{
	ifStream inFile(“wow.txt”);
	if(!inFile)
	{
		crr << “file not found” << endl;
		return;
}

string line;
ofstream outFile(“sum.txt”);
while(getline(inFile, line)
{
	if(line.empty()) continue;

	istringstream iss(line);
	int sum = 0;
	int next = 0;
while(iss >> next)
{
	sum+= next;
}
	outFile << sum << endl;
}

inFile.close();
outFile.close();
return;
}
