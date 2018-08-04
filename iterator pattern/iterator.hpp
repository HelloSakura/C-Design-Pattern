#ifndef _ITERATOR_H_
#define _ITERATOR_H_
#include<vector>

namespace iterator {

	template<class Item>
	class Iterator {
	public:
		virtual ~Iterator() {}

		virtual void first() = 0;
		virtual void next() = 0;
		virtual Item* currentItem() = 0;
		virtual bool isDone() = 0;
	};

	template<class Item>
	class Aggregate {
	public:
		virtual ~Aggregate() {}

		virtual Iterator<Item>* createIterator() = 0;
	};

	template<class Item>
	class ConcreteAggregate;

	template<class Item>
	class ConcreteIterator :public Iterator<Item> {
	public:
		ConcreteIterator(ConcreteAggregate<Item>* a):
			m_aggr(a),
			m_cur(0)
		{}

		virtual void first() override 
		{
			m_cur = 0;
		}

		virtual void next() override
		{
			if (m_cur < m_aggr->getLen()) {
				m_cur++;
			}
		}

		virtual Item* currentItem() override
		{
			if (m_cur < m_aggr->getLen()) {
				return &(*m_aggr)[m_cur];
			}
			else{
				return nullptr;
			}
		}

		virtual bool isDone() 
		{
			return m_cur >= m_aggr->getLen();
		}

	private:
		ConcreteAggregate<Item> *m_aggr;
		int m_cur;
	};

	template<class Item>
	class ConcreteAggregate :public Aggregate<Item>{
	public:
		ConcreteAggregate()
		{
			m_date.push_back(1);
			m_date.push_back(2);
			m_date.push_back(3);

		}

		virtual Iterator<Item>* createIterator()
		{
			return new ConcreteIterator<Item>(this);
		}

		Item& operator[](int index)
		{
			return m_date[index];
		}

		int getLen()
		{
			return m_date.size();
		}

	private:
		std::vector<Item> m_date;
	};

}

#endif // !_ITERATOR_H_
