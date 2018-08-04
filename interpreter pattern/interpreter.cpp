#include"interpreter.h"

using namespace interpreter;

Expression::Expression()
{
}

Expression::~Expression()
{
}

VarExpression::VarExpression(string key):
	m_key(key)
{
}

VarExpression::~VarExpression()
{
}

int VarExpression::interpreter(map<string, int>& var)
{
	return var[m_key];
}

SymbolExpression::SymbolExpression(Expression * left, Expression * right):
	m_left(left), m_right(right)
{
}

SymbolExpression::~SymbolExpression()
{
}

Expression *SymbolExpression::getLeft()
{
	return m_left;
}

Expression * SymbolExpression::getRight()
{
	return m_right;
}

AddExpression::AddExpression(Expression * left, Expression * right):
	SymbolExpression(left, right)
{
}

AddExpression::~AddExpression()
{
}

int AddExpression::interpreter(map<string, int>& var)
{
	return m_left->interpreter(var) + m_right->interpreter(var);
}

SubExpression::SubExpression(Expression*left, Expression*right) :
	SymbolExpression(left, right)
{
}

SubExpression::~SubExpression()
{
}

int SubExpression::interpreter(map<string, int>& var)
{
	return m_left->interpreter(var) - m_right->interpreter(var);
}


Calculator::Calculator(string expStr)
{
	m_exp = nullptr;
	stack<Expression*> stkExp;

	Expression* t_left = nullptr , *t_right = nullptr;


	for (auto i = 0; i < expStr.length(); ++i) {
		switch (expStr[i])
		{
		case'+':
			t_left = stkExp.top();
			stkExp.pop();

			t_right = new VarExpression(expStr.substr(++i, 1));
			stkExp.push(new AddExpression(t_left, t_right));

			break;
			
		case'-':
			t_left = stkExp.top();
			stkExp.pop();

			t_right = new VarExpression(expStr.substr(++i, 1));
			stkExp.push(new SubExpression(t_left, t_right));
			break;
		default:
			stkExp.push(new  VarExpression(expStr.substr(i, 1)));
		}
	}

	if (!stkExp.empty()) {
		m_exp = stkExp.top();
		stkExp.pop();
	}
}

Calculator::~Calculator()
{
	delete(m_exp);
	m_exp = nullptr;
}

void Calculator::delTree(Expression * exp)
{
	SymbolExpression*branch = dynamic_cast<SymbolExpression*>(exp);

	if (nullptr == branch) {
		delete exp;
	}
	else {
		delTree(branch->getLeft());
		delTree(branch->getRight());

		delete exp;
	}
}

int Calculator::run(map<string, int>& var)
{
	return (m_exp == nullptr) ? 0 : m_exp->interpreter(var);
}

