//#include <iostream>
//#include <fstream>
//using namespace std;

//int main() {
//	fstream bin_file;
//    bin_file.open("backupimage.jpg", ios::binary | ios::out);
//	if(bin_file.open()) {
		
//	}
//	return 0;
//}


#include <iostream>
#include <filesystem>
using namespace std;

int main() {
	try {
		filesystem::copy_file("image1.jpg", "backupimage.jpg", filesystem::copy_options::overwrite_existing);
		
	} catch (const filesystem::filesystem_error& e) {
		cerr << e.what() <<endl;
		return 1;
	}
	
	return 0;
}