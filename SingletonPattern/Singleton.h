#pragma once
class Singleton
{
public:
	~Singleton();
	static Singleton * Instance();

/* Singleton 不可以被实例化，因此将其构造函数声明为protected或直接声明为private */
protected:
	Singleton();

private:
	static Singleton * instance;
};

