#pragma once

class Singleton
{
private:
	Singleton();
	~Singleton();

	static Singleton* instance;

public:
	bool objectA = false;
	bool objectB = false;
	bool objectC = false;
	bool objectD = false;
	bool objectE = false;

	// Singleton
	static Singleton* Get()
	{
		if (instance == nullptr)
		{
			instance = new Singleton();
		}

		return instance;
	}
};

