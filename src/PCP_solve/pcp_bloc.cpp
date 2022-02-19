#include "pcp_bloc.h"

Pcp_bloc::Pcp_bloc(std::string top, std::string bottom)
{
	_top = top;
	_bottom = bottom;
	_width = MAX(top.length(), bottom.length());
}


bool Pcp_bloc::has_prefix()
{
	int size = _width - (ABS(top_less_bottom_len()));
	return !_top.compare(0, size, _bottom, 0, size);
}

std::ostream& operator<< (std::ostream& out,  Pcp_bloc& v){
	out << '[' << v._top << '/' << v._bottom << ']';
	return out;
}

