#include "constModifier.h"

void Person::ShowPerson()const {//const���ε���thisָ���ֵ��ʹ��thisָ��ָ���ֵ�Ǹ�����: const person* const this
	//this->m_A = 100;
	this->m_B = 100;
	//this=nullptr;				//thisָ��ı�����һ��ָ�볣����ָ���ֵ�����޸�: person* const this
}