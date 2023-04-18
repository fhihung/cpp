#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct Company{
	int rank;
	string company_name;
	string country;
	float sales;
	float profit;
	float assets;
	float market_value;
};

float parseValue(string parsedString){
	float value = 0.0;
	string unit = parsedString.substr(parsedString.length() - 1, 1);
	parsedString = parsedString.erase(parsedString.length() - 1,1);
	parsedString = parsedString.erase(0 ,1);
	float value = stof(parsedString);
	if(unit == "B"){
		value *= 10000000000;
	} else if(unit == "M"){
		value *= 1000000;
	}
	return value;
}
void exportValue(vector<Company> &comp, string ctrName){
		vector<Company> ctrCompany;
		for(auto &x : comp){
			if(comp.country == ctrName){
				ctrCompany.push_back(x);
			}
		}
		ofstream outFile(ctrName + ".csv");
		if(!outFile.is_open()){
			cout << "KHONG MO DUOC";
			exit(0);
		}
		else{
			for(auto c: ctrCompany){
				outFile << x.rank << "" << x.company_name << "" << x.sales << "" << x.profit << "" << x,assets << "" << x. market_value;  
			}
		}
	}

int main(int argc, char *argv[]){
//xu ly tham bien truyen vao
	if(argc < 7){
		cout << "Thieu du lieu";
		exit(0);
	}
	string path = "";
	float value;
	string countryName;
	for(int i = 1; i <argc; ++i){
		if(string(argv[i]) == string("-p"))
		{
			path = argv[i+1];
		}
		if(string(argv[i]) == string("c"))
		{
			countryName = argv[i+1];
		}
		if(string(argv[i]) == string("-v")){
			value = stof(argv[i+1]);
		}
	}


	ifstream inFile;
	inFile.open(path);
	if(!inFile.is_open()){
		cout << "Khong mo duoc file";
		exit(0);
	}
	vector<Company> inFo;
	string line;
	getline(inFile,line);
	while(getline(inFile,line)){
		istringstream iss(line);
		Company temp;
		string token;
		getline(iss,token,',');
		temp.rank = stoi(token);
		getline(iss,token,',');
		temp.country = token;
		getline(iss,token,',');
		temp.sales = parseValue(token);
		getline(iss,token,',');
		temp.profit = parseValue(token);
		getline(iss,token,',');
		temp.assets = parseValue(token);
		getline(iss,token,',');
		temp.market_value = parseValue(token);
		inFo.push_back(temp);
	}

}