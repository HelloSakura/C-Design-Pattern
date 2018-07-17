#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

/*
Diretor���Խ���һ�·�װ�����ظ��ֲ�ͬ��model
���˸о����ڹ���ģʽ�Ļ������������˼�������������о����ڹ���ģʽ�����ϼ�һ���װ
������ڷ��ظ��ֲ�ͬ��model��model�ṩ���ֲ��跽��������һ��model����build����
ͨ�������Щ����������������ͬ��model���о�modelʵ�������ṩһ����ͬ���ϵ��࣬��builder
ʹ����Щ������������ͬ�Ķ��󣬿���˵һ��model���ṩ���еķ������У����builder��
������������ͬ��model����diretor���ṩ���ֳ��õ�builder��������model
*/
class Builder;
class Model;
class Director
{
public:
	Director(Builder* bld);
	~Director();
	void setBuilder(Builder* bld);
	Model* getModel();

private:
	Builder * _bld;
};
#endif // !_DIRECTOR_H_
