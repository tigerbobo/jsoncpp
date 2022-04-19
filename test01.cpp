int test02()
{
	Json::Value root;
	Json::Reader reader;
	std::string string = "[1,2,3,4,5,6,7,8,9,0]";

	reader.parse(string, root);

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << root[i].asInt() << "\n";
	}

	return 0;
}
