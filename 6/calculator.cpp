#include <iostream>

struct Token {
	char kind;		// what kind of token
	double value;	// for numbers: a value 

	// constructor for a operator
	Token(char ch) : kind{ ch }, value{ 0 } {}
	// constructor for a number
	Token(char ch, double val) : kind{ch}, value{val} {}
};

class Token_stream {
public:
	Token_stream();   // make a Token_stream that reads from cin
	Token get();      // get a Token (get() is defined elsewhere)
	void putback(Token t);    // put a Token back
private:
	bool full;        // is there a Token in the buffer?
	Token buffer;     // here is where we keep a Token put back using putback()
};

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
	:full(false), buffer(0)    // no Token in buffer
{
}

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
	if (full) {
		std::cerr << "putback() into a full buffer\n";
		return;
	}
	buffer = t;       // copy t to buffer
	full = true;      // buffer is now full
}


Token Token_stream::get()
{
	if (full) {       // do we already have a Token ready?
		// remove token from buffer
		full = false;
		return buffer;
	}

	char ch;
	std::cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

	switch (ch) {
	case ';':    // for "print"
	case 'q':    // for "quit"
	case '(': case ')': case '+': case '-': case '*': case '/':
		return Token(ch);        // let each character represent itself
	case '.':
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
	{
		std::cin.putback(ch);         // put digit back into the input stream
		double val;
		std::cin >> val;              // read a floating-point number
		return Token('8', val);   // let '8' represent "a number"
	}
	default:
		std::cerr << "Bad token\n";
		return EXIT_FAILURE;
	}
}

Token_stream ts;        // provides get() and putback() 
double expression();    // declaration so that primary() can call expression()


// deal with numbers and parentheses
double primary()
{
	Token t = ts.get();
	switch (t.kind) {
	case '(':    // handle '(' expression ')'
	{
		double d = expression();
		t = ts.get();
		if (t.kind != ')') {
			std::cerr << "')' expected\n";
			return 0;
		}
		return d;
	}
	case '8':            // we use '8' to represent a number
		return t.value;  // return the number's value
	default:
		std::cerr << "primary expected\n";
		return EXIT_FAILURE;
	}
}


// deal with *, /, and %
double term()
{
	double left = primary();
	Token t = ts.get();        // get the next token from token stream

	while (true) 
	{
		switch (t.kind) {
		case '*':
			left *= primary();
			t = ts.get();
			break;
		case '/':
		{
			double d = primary();
			if (d == 0) {
				std::cerr << "divide by zero\n";
				return EXIT_FAILURE;
			}
			left /= d;
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);     // put t back into the token stream
			return left;
		}
	}
}

// deal with + and -
double expression()
{
	double left = term();		// read and evaluate a Term
	Token t = ts.get();			// get the next token from token stream

	while (true)
	{
		switch (t.kind) {
		case '+':
			left += term();		// evaluate Term and add
			t = ts.get();
			break;
		case '-':
			left -= term();		// evaluate Term and subtract
			t = ts.get();
			break;
		default:
			ts.putback(t);		// put t back into the token stream
			return left;		// finally: no more + or -: return the answer
		}
	}
}

int main()
{
	double val = 0;
	while (std::cin) {
		Token t = ts.get();

		if (t.kind == 'q') break; // 'q' for quit
		if (t.kind == ';')        // ';' for "print now"
			std::cout << "=" << val << '\n';
		else
			ts.putback(t);
		val = expression();
	}
}
