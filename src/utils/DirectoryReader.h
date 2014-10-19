/*
 * DirectoryReader.h
 *
 *  Created on: 24 May 2014
 *      Author: Andrzej Salamon <andrzej.salamon@gmail.com>
 */

#ifndef DIRECTORYREADER_H_
#define DIRECTORYREADER_H_

#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <vector>
#include <string>
#include <fstream>

#include "../SystemException.h"
#include <boost/filesystem.hpp>

using namespace std;

namespace Salamon {

class DirectoryReader {
public:
	enum OS {
		Win, Nix
	};
	struct Item {
		bool isFile;
		string name;
		string fullPath;
		string dir;

	};
	DirectoryReader();
	DirectoryReader(const char* dir);
	virtual ~DirectoryReader();
	void read();
	void read(const char* dirName, string baseDir);
	void setPath(const char* p);
	const char* getPath();
	vector<Item> *getResults();
	DirectoryReader::OS getOS();
	string readTextFile(const string path);
	bool writeTextFile(const string path, const string& content);
	void createDir(const string path);
	/*
	 * windows based systems directory separator
	 */
	static const string WIN_DS;
	/*
	 * unix/linux based systems directory separator
	 */
	static const string NIX_DS;
protected:
	const char* path;
private:
	vector<Item> *result;

};

} /* namespace Salamon */

#endif /* DIRECTORYREADER_H_ */
