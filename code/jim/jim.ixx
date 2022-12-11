export module jim;

import john;

struct Jim {
	char name[32] = "Jim";
	int age = 48;
};

export Jim getJim()
{
	return {}; // returning internal type
}

export John getJohn()
{
	return {}; // returning type from other module
}