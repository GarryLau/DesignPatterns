#pragma once
class Singleton
{
public:
	~Singleton();
	static Singleton * Instance();

/* Singleton �����Ա�ʵ��������˽��乹�캯������Ϊprotected��ֱ������Ϊprivate */
protected:
	Singleton();

private:
	static Singleton * instance;
};

