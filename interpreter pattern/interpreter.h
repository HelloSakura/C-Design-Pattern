#ifndef _EXPRESSION_H_
#define _EXPRESSION_H_

#include<map>
#include<stack>
#include<string>

using namespace std;

namespace interpreter {

	class Expression
	{
	public:
		Expression();
		virtual ~Expression();

		virtual int interpreter(map<string, int>& var) = 0;

	};

	class VarExpression :public Expression
	{
	public:
		VarExpression(string key);
		~VarExpression();

		virtual int interpreter(map<string, int>& var) override;

	private:
		string m_key;
	};

	class SymbolExpression :public Expression
	{
	public:
		SymbolExpression(Expression* left, Expression* right);
		~SymbolExpression();


		Expression* getLeft();
		Expression* getRight();

	protected:
		Expression * m_left;
		Expression * m_right;

	};

	class AddExpression :public SymbolExpression
	{
	public:
		AddExpression(Expression*left, Expression* right);
		~AddExpression();

		virtual int interpreter(map<string, int>& var) override;
	};


	class SubExpression :public SymbolExpression
	{
	public:
		SubExpression(Expression*left, Expression* right);
		~SubExpression();

		virtual int interpreter(map<string, int>& var) override;
	};


	class Calculator
	{
	public:
		Calculator(string expStr);
		~Calculator();

		void delTree(Expression* exp);
		int run(map<string, int>& var);

	private:
		Expression * m_exp;

	};

}


#endif // !_EXPRESSION_H_
