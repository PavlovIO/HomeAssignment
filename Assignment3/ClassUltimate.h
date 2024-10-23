#ifndef CLASSULTIMATE_H
#define CLASSULTIMATE_H

class Ultimate {
	public:
		//различные виды
		enum class Type{ Heal, Buff, Shield};
		
		//конструктор
		Ultimate(Type type = Type::Heal);
		
		//методы
		void use();

	private:
		//поля
		Type _type;
		bool _is_used;
};

#endif
