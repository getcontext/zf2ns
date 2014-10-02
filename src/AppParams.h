/*
 * must be immutable !
 * AppParams.h
 *
 *  Created on: 17 May 2014
 *      Author: Andrzej Salamon <andrzej.salamon@gmail.com>
 */

#ifndef APPPARAMS_H_
#define APPPARAMS_H_

#include <string>
using namespace std;

namespace Salamon {

class AppParams {
public:
	string path;
	bool recursive;
	AppParams* createFromRequest(int argc,char* argv[]);
	bool isValid();
private:
	bool valid;
	void setRecursive(const bool recursive);
	void setValid(const bool valid);


};

} /* namespace Salamon */

#endif /* APPPARAMS_H_ */
