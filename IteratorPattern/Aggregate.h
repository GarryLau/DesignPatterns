#pragma once

#define SIZE (10)

extern class Iterator;
extern class ListIterator;

class Aggregate
{
public:
    virtual void push(int a) = 0;
    virtual void pop() = 0;
    virtual bool isEmpty() = 0;
    virtual int getValue(int index)const = 0 ;
    /* ��ȡ����Ԫ�ظ��� */
    virtual int getCount()const = 0;
};

class ListAggeragte : public Aggregate
{
public:
    ListAggeragte() {
        m_count = 0;
    }
    virtual void push(int a)override {
        if (m_count >= SIZE)
        {
            throw("ListAggeragte is too full to add an element!");
        }
        m_list[m_count] = a;
        m_count++;
    }
    virtual void pop()override {
        if (m_count <= 0)
        {
            throw("ListAggeragte is empty, cannot pop any elements!");
        }
        m_count--;
    }
    virtual bool isEmpty() override {
        return 0 == m_count;
    }
    virtual int getValue(int index) const override {
        if (index < 0 || index >= SIZE )
        {
            throw("Out of range!");
        }
        return m_list[index];
    }
    /* �������弯�ϵĵ����� */
    ListIterator* createIterator();
    virtual int getCount() const override{
        return m_count;
    }
private:
    int m_list[SIZE];
    /* ����Ԫ�ظ�����Ϊ0ʱ�ǿռ��ϣ�û��Ԫ�� */
    int m_count;
};