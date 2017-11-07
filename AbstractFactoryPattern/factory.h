#pragma once
#include "product.h"


class factory
{
public:
	factory();
	~factory();

	virtual productA *CreateProductA() = 0;
	virtual productB *CreateProductB() = 0;
};
class factoryI : public factory
{
public:
	factoryI();
	~factoryI();

	virtual productA *CreateProductA() override;
	virtual productB *CreateProductB() override;
};
class factoryII : public factory
{
public:
	factoryII();
	~factoryII();

	virtual productA *CreateProductA() override;
	virtual productB *CreateProductB() override;
};