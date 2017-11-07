#pragma once
/* A产品 */
class productA
{
public:
	productA();
	~productA();

	virtual void ShowProduct() = 0;
};

class productA1 : public productA
{
public:
	productA1();
	~productA1();

	virtual void ShowProduct() override;
};

class productA2 : public productA
{
public:
	productA2();
	~productA2();

	virtual void ShowProduct() override;
};

/* B产品 */
class productB
{
public:
	productB();
	~productB();

	virtual void ShowProduct() = 0;
};
class productB1 : public productB
{
public:
	productB1();
	~productB1();

	virtual void ShowProduct() override;
};
class productB2 : public productB
{
public:
	productB2();
	~productB2();

	virtual void ShowProduct() override;
};